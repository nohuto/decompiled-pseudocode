/*
 * XREFs of sub_14056F494 @ 0x14056F494
 * Callers:
 *     sub_1403979C4 @ 0x1403979C4 (sub_1403979C4.c)
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 */

__int64 __fastcall sub_14056F494(int a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r8
  int v16; // eax
  __int64 *v17; // rdx
  __int64 *v18; // rax
  int v19; // ebx
  unsigned __int8 v20; // al
  unsigned __int8 v21; // si
  struct _KPRCB *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  unsigned __int8 v26; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v26 = 0;
  v4 = (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(qword_140C2B0D8 + 48 * v4);
  sub_14045A41A(v5, &v26);
  v6 = qword_140C2B0D8 + 48 * v4;
  if ( !*(_BYTE *)(v6 + 32) )
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v26 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v26 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    v3 = 296;
LABEL_18:
    __writecr8(v26);
    return v3;
  }
  v12 = *(_QWORD *)(v6 + 40);
  if ( !v12 )
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && v26 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (v26 + 1));
          v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v11 )
            sub_140418E4C((__int64)v14);
        }
      }
    }
    goto LABEL_18;
  }
  v17 = (__int64 *)(v12 + 8);
  v18 = (__int64 *)(v12 + 8);
  while ( 1 )
  {
    v19 = -(v18[12] & 1);
    if ( (v18[12] & 1) == 0 )
      break;
    v18 = (__int64 *)*v18;
    if ( v18 == v17 )
      goto LABEL_24;
  }
  *(_BYTE *)(v6 + 32) = 0;
LABEL_24:
  KeReleaseSpinLockFromDpcLevel(v5);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v20 = KeGetCurrentIrql(), v20 <= 0xFu) )
  {
    v21 = v26;
    if ( v26 <= 0xFu && v20 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = *((_QWORD *)v22 + 4375);
      v21 = v26;
      v24 = ~(unsigned __int16)(-1LL << (v26 + 1));
      v11 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
      *(_DWORD *)(v23 + 20) &= v24;
      if ( v11 )
        sub_140418E4C((__int64)v22);
    }
  }
  else
  {
    v21 = v26;
  }
  __writecr8(v21);
  if ( !v19 )
    return (unsigned int)sub_14042A5E0(a2, 0LL);
  return v3;
}
