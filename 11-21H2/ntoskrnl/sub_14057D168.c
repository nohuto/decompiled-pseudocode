/*
 * XREFs of sub_14057D168 @ 0x14057D168
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14057D168(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  _WORD *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rsi
  volatile LONG *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 208);
  v7 = *(_WORD **)(a2 + 576);
  v8 = *(_QWORD *)(v3 + 128);
  if ( (unsigned __int16)v5 >= *v7 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v7[4 * v5 + 4];
  v10 = (volatile LONG *)(v3 + 104);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  v13 = a3 & v8 & v9 & *(_QWORD *)(v3 + 80);
  if ( v13 || (v8 & v9 & *(_QWORD *)(v3 + 80)) != 0 )
  {
    v14 = *(_BYTE *)(v4 + 209);
    if ( !v13 )
      v13 = v8 & v9 & *(_QWORD *)(v3 + 80);
    v13 = __ROR8__(v13, v14);
    _BitScanForward64(&v15, v13);
    v11 = (((unsigned __int8)v15 + v14) & 0x3F) + (*(unsigned __int8 *)(v4 + 208) << 6);
    v4 = qword_140D088C0[dword_140D105E0[v11]];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  while ( 1 )
  {
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v17 + 24);
        *(_DWORD *)(v17 + 24) = v18 + 1;
        if ( v18 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    v19 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v19 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v19 + 24) - 1;
        *(_DWORD *)(v19 + 24) = v20;
        if ( !v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v22, v11, v13, v12);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v10);
  return v4;
}
