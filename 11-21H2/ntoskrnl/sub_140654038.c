/*
 * XREFs of sub_140654038 @ 0x140654038
 * Callers:
 *     sub_140629A00 @ 0x140629A00 (sub_140629A00.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140654038(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  int v11; // r15d
  void *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v9 = 0;
  v18 = 0LL;
  v19 = 0LL;
  LODWORD(v20) = 0;
  *a5 = 0LL;
  v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v18, 1, 0LL, 0LL);
  v11 = 0;
  *((_DWORD *)v10 + 3) = 0;
  v12 = v10 + 2;
  v13 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v14 = a3;
  *v10 = a1;
  do
  {
    if ( v14 >= 0xFF )
      v14 = 255LL;
    memmove(v12, (const void *)(a4 + 16 * v13), 16 * v14);
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)v14) & 0xFFF;
    v15 = HvlInvokeHypercall(110);
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v13 = *a5 + (WORD2(v15) & 0xFFF);
    *a5 = v13;
    v14 = a3 - v13;
  }
  while ( a3 != v13 );
  sub_14039D8F0((__int64)&v18);
  if ( v16 )
    return (unsigned int)sub_14054CA70(v16);
  return v9;
}
