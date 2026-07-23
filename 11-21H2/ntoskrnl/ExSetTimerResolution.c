/*
 * XREFs of ExSetTimerResolution @ 0x1403DE0E0
 * Callers:
 *     sub_140609830 @ 0x140609830 (sub_140609830.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14035C864 @ 0x14035C864 (sub_14035C864.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // ebp
  ULONG v6; // ebx
  KIRQL v7; // si
  int v9; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // [rsp+48h] [rbp+10h] BYREF

  sub_14022F440(SetResolution != 0 ? DesiredTime : 0, 1381258053, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C15B28);
  v5 = dword_140D069B8;
  v6 = 0;
  v15 = v4;
  v7 = v4;
  if ( !SetResolution )
  {
    v9 = dword_140C15B30;
    if ( !dword_140C15B30 )
      goto LABEL_10;
    --dword_140C15B30;
    if ( v9 != 1 )
      goto LABEL_10;
    dword_140D069B8 = ::DesiredTime;
LABEL_4:
    dword_140C15B34 = v6;
    return sub_14035C864(SetResolution, v6, &v15);
  }
  if ( ++dword_140C15B30 == 1 || DesiredTime < dword_140C15B34 )
  {
    dword_140D069B8 = DesiredTime;
    v6 = DesiredTime;
    goto LABEL_4;
  }
LABEL_10:
  KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = v15;
        v13 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v5;
}
