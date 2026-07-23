/*
 * XREFs of sub_140A9933C @ 0x140A9933C
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 * Callees:
 *     sub_140A99834 @ 0x140A99834 (sub_140A99834.c)
 *     sub_140A9A0B8 @ 0x140A9A0B8 (sub_140A9A0B8.c)
 */

_UNKNOWN **__fastcall sub_140A9933C(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  int v3; // esi
  _QWORD **v4; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // r9
  __int64 v9; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 56) + 24LL);
  v7 = *v4;
  while ( v7 != v4 )
  {
    v8 = v7 - 5;
    v7 = (_QWORD *)*v7;
    if ( !*v8 )
    {
      result = (_UNKNOWN **)sub_140A9A0B8(v8, a1);
      if ( (_DWORD)result )
      {
        if ( v3 )
          result = (_UNKNOWN **)sub_140A99834(a1, v9, a2);
        else
          v3 = 1;
      }
    }
  }
  return result;
}
