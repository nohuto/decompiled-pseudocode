/*
 * XREFs of sub_1403DB228 @ 0x1403DB228
 * Callers:
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 * Callees:
 *     sub_1402820F4 @ 0x1402820F4 (sub_1402820F4.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403DB228(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _QWORD *v8; // rcx

  v1 = 20LL;
  v2 = a1[2090] >> 15;
  if ( v2 >= 0x14 )
  {
    v1 = a1[2090] >> 15;
    if ( v2 > 0x80 )
      v1 = 128LL;
  }
  v4 = 0;
  a1[80] = v1;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_1402820F4((__int64)a1, 16LL, 1);
    v7 = v6;
    if ( !v6 )
      break;
    memset(v6, 0, 0x108uLL);
    v7[10] |= 1u;
    *((_QWORD *)v7 + 24) = a1;
    v8 = (_QWORD *)a1[83];
    if ( (_QWORD *)*v8 != a1 + 82 )
      __fastfail(3u);
    *(_QWORD *)v7 = a1 + 82;
    ++v5;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = v7;
    a1[83] = v7;
    if ( v5 >= 4 )
      return v4;
  }
  if ( !v5 )
    return (unsigned int)-1073741670;
  return v4;
}
