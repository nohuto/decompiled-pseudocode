/*
 * XREFs of sub_140A992BC @ 0x140A992BC
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 * Callees:
 *     sub_140A99834 @ 0x140A99834 (sub_140A99834.c)
 *     sub_140A9A0B8 @ 0x140A9A0B8 (sub_140A9A0B8.c)
 */

_UNKNOWN **__fastcall sub_140A992BC(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rdi
  _QWORD *v6; // rbx
  int v8; // esi
  _QWORD *v9; // r9
  __int64 v10; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 8);
  v8 = 0;
  while ( v6 != v4 )
  {
    v9 = v6 - 3;
    v6 = (_QWORD *)*v6;
    result = (_UNKNOWN **)sub_140A9A0B8(v9, a2);
    if ( (_DWORD)result )
    {
      if ( v8 )
        result = (_UNKNOWN **)sub_140A99834(a2, v10, a3);
      else
        v8 = 1;
    }
  }
  return result;
}
