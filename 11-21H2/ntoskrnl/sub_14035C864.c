/*
 * XREFs of sub_14035C864 @ 0x14035C864
 * Callers:
 *     ExSetTimerResolution @ 0x1403DE0E0 (ExSetTimerResolution.c)
 *     sub_1406D8260 @ 0x1406D8260 (sub_1406D8260.c)
 *     sub_1407D6CE0 @ 0x1407D6CE0 (sub_1407D6CE0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14035C7A4 @ 0x14035C7A4 (sub_14035C7A4.c)
 *     sub_14035F21C @ 0x14035F21C (sub_14035F21C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035C864(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // bl
  __int64 result; // rax
  __int64 i; // rcx
  int v8; // edi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r8
  int v17; // eax
  ULONG v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C15B28);
    a2 = v18;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( a2 >= dword_140C095D0 || DesiredTime <= a2 )
    {
LABEL_9:
      KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      return (unsigned int)dword_140D06984;
    }
  }
  else
  {
    a2 = DesiredTime;
    v18 = DesiredTime;
    if ( dword_140C15B30 )
    {
      if ( dword_140C15B34 < DesiredTime )
        a2 = dword_140C15B34;
      v18 = a2;
    }
    for ( i = qword_140C15B40; (__int64 *)i != &qword_140C15B40; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 956) & 0x1000) != 0 && *(_DWORD *)(i + 24) < a2 )
      {
        if ( (*(_DWORD *)(i + 92) & 0x4000000) == 0 )
          a2 = *(_DWORD *)(i + 24);
        v18 = a2;
      }
    }
  }
  if ( a2 < dword_140D06960 )
    a2 = dword_140D06960;
  v18 = a2;
  if ( a2 == dword_140C095D0 )
    goto LABEL_9;
  v8 = dword_140D06984;
  dword_140C095D0 = a2;
  KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && v5 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(v10);
      }
    }
  }
  __writecr8(v5);
  sub_14035C7A4((__int64)&v18, 0LL, 0LL);
  result = v18;
  if ( v8 != v18 )
  {
    sub_14035F21C();
    return v18;
  }
  return result;
}
