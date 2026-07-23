/*
 * XREFs of sub_140547D00 @ 0x140547D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140547D00(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]

  v16 = 0LL;
  v17 = 0LL;
  v2 = -1LL;
  LODWORD(v18) = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (unsigned __int64)v5 + 40 > 0x1000 )
    return 3221225485LL;
  v7 = sub_14039DF90((PHYSICAL_ADDRESS *)&v16, 1, 0LL, 0LL);
  memset(v7, 0, v5 + 40LL);
  v8 = v7[1];
  *v7 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7[1] = v8 & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    *((_WORD *)v7 + 4) = *(_WORD *)(a1 + 12);
    *((_WORD *)v7 + 5) = *(_WORD *)(a1 + 8);
  }
  else
  {
    v7[1] = v8 | 0xC000000000000000uLL;
    v9 = *(_BYTE **)(a1 + 8);
    do
      ++v2;
    while ( v9[v2] );
    memmove(v7 + 5, v9, v2 + 1);
  }
  *((_DWORD *)v7 + 4) |= 1u;
  v7[3] = a2;
  while ( 1 )
  {
    v10 = HvlInvokeHypercall((v5 << 14) & 0x3FE0000 | 0x82);
    if ( !sub_140459C2A(v10) )
      break;
    if ( (int)sub_1405438E8(v12, v11, v13) < 0 )
    {
      v14 = -1073741670;
      goto LABEL_19;
    }
  }
  v14 = sub_14054CA70(v12);
LABEL_19:
  sub_14039D8F0((__int64)&v16);
  return v14;
}
