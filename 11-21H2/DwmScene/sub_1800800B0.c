/*
 * XREFs of sub_1800800B0 @ 0x1800800B0
 * Callers:
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 * Callees:
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18007FF80 @ 0x18007FF80 (sub_18007FF80.c)
 */

_UNKNOWN **__fastcall sub_1800800B0(_QWORD *a1, __int64 *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbp
  __int64 i; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a2[1];
  for ( i = *a2; i != v3; i += 152LL )
  {
    v6 = a1[1];
    v7 = a1[4];
    v8 = (v7 + 1) % (0x86BCA1AF286BCA1BuLL * ((a1[2] - v6) >> 3));
    a1[4] = v8;
    v9 = v6 + 152 * v8;
    if ( *(_BYTE *)(i + 120) )
    {
      result = (_UNKNOWN **)sub_18007FF80(v9, i);
    }
    else
    {
      sub_18007FF80(v9, v6 + 152 * v7);
      v10 = *(_QWORD *)(v9 + 136);
      *(_BYTE *)(v9 + 120) = 0;
      *(_QWORD *)(v9 + 128) = *(_QWORD *)(i + 128);
      result = (_UNKNOWN **)sub_18002CCFC(v9 + 136, v9 + 136, *(char **)(v10 + 8));
      *(_QWORD *)(v10 + 8) = v10;
      *(_QWORD *)v10 = v10;
      *(_QWORD *)(v10 + 16) = v10;
      *(_QWORD *)(v9 + 144) = 0LL;
    }
  }
  return result;
}
