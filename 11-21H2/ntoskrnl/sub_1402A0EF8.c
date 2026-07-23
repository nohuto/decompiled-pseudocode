/*
 * XREFs of sub_1402A0EF8 @ 0x1402A0EF8
 * Callers:
 *     sub_140363EF0 @ 0x140363EF0 (sub_140363EF0.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402A1788 @ 0x1402A1788 (sub_1402A1788.c)
 *     sub_14036DC90 @ 0x14036DC90 (sub_14036DC90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_1402A0EF8()
{
  __int64 result; // rax
  void *i; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  result = sub_1402A1788(0LL);
  for ( i = (void *)result; result; i = (void *)result )
  {
    if ( (int)sub_1402312E0((ULONG_PTR)i) >= 0 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL);
      v3 = *(_QWORD *)(v2 + 14576);
      if ( v3 )
      {
        v4 = *(__int16 *)(v3 + 342);
        v5 = *(_QWORD *)(v4 + v3 + 328) >> *(_BYTE *)(v3 + 331);
        if ( v5 <= 8 )
          v5 = 8LL;
        if ( *(_QWORD *)(v4 + v3 + 336) + *(_QWORD *)(v4 + v3 + 344) > v5 )
          sub_14036DC90(*(_QWORD *)(v2 + 14576));
      }
      v6 = *(_QWORD *)(v2 + 14584);
      if ( v6 )
      {
        v7 = *(__int16 *)(v6 + 342);
        v8 = *(_QWORD *)(v7 + v6 + 328) >> *(_BYTE *)(v6 + 331);
        if ( v8 <= 8 )
          v8 = 8LL;
        if ( *(_QWORD *)(v7 + v6 + 336) + *(_QWORD *)(v7 + v6 + 344) > v8 )
          sub_14036DC90(*(_QWORD *)(v2 + 14584));
      }
      sub_140231240((__int64)i, (__int64)v9);
    }
    result = sub_1402A1788(i);
  }
  return result;
}
