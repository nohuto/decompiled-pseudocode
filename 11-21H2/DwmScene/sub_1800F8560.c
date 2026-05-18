/*
 * XREFs of sub_1800F8560 @ 0x1800F8560
 * Callers:
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_18010D10E @ 0x18010D10E (sub_18010D10E.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F7D08 @ 0x1800F7D08 (sub_1800F7D08.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

_UNKNOWN **__fastcall sub_1800F8560(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL);
    v10 = 0LL;
    sub_1800F7D08(v2, &v10);
    v4 = *(__int64 **)(v3 + 16);
    v10 = 0LL;
    result = (_UNKNOWN **)sub_1800F7D08(v4, &v10);
    v6 = *(_QWORD **)(v5 + 24);
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      sub_1800FA818(v7 + 6);
      v8 = v7[5];
      if ( v8 >= 8 )
        sub_180010884((char *)v7[2], 2 * v8 + 2);
      v7[4] = 0LL;
      v7[5] = 7LL;
      *((_WORD *)v7 + 8) = 0;
      result = (_UNKNOWN **)sub_180010884((char *)v7, 0xB0uLL);
    }
  }
  return result;
}
