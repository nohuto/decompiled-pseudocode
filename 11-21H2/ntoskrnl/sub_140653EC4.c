/*
 * XREFs of sub_140653EC4 @ 0x140653EC4
 * Callers:
 *     sub_14045F736 @ 0x14045F736 (sub_14045F736.c)
 *     sub_140629A00 @ 0x140629A00 (sub_140629A00.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140653EC4(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  _QWORD *v10; // r14
  int v11; // r15d
  __int64 v12; // rbp
  int v13; // r13d
  __int64 v14; // rax
  unsigned __int16 v15; // bx
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v21; // [rsp+90h] [rbp+18h]

  v6 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v7 = a4;
  LODWORD(v19) = 0;
  *a6 = 0LL;
  v21 = (a3 >> 31) & 9;
  v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v17, 1, 0LL, 0LL);
  v11 = 0;
  v10[1] = 0LL;
  *((_DWORD *)v10 + 5) = 0;
  v12 = *a6;
  *((_DWORD *)v10 + 4) = a3;
  v13 = a3 & 0x30000;
  *v10 = a1;
  do
  {
    if ( v7 >= 0x1FD )
      v7 = 509LL;
    if ( !v13 )
      memmove(v10 + 3, (const void *)(a5 + 8 * v12), 8 * v7);
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)v7) & 0xFFF;
    v10[1] = a2 + (v12 << v21);
    v14 = HvlInvokeHypercall(75);
    v15 = v14;
    if ( (_WORD)v14 )
      break;
    v12 = *a6 + (WORD2(v14) & 0xFFF);
    *a6 = v12;
    v7 = a4 - v12;
  }
  while ( a4 != v12 );
  sub_14039D8F0((__int64)&v17);
  if ( v15 )
    return (unsigned int)sub_14054CA70(v15);
  return v6;
}
