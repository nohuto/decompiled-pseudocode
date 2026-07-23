/*
 * XREFs of sub_140211E70 @ 0x140211E70
 * Callers:
 *     sub_140211BD0 @ 0x140211BD0 (sub_140211BD0.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140211E70(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v3 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
        sub_14039D930(v3);
      else
        _mm_pause();
    }
    while ( *(_QWORD *)a1 );
    v4 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v4 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v7 = *(_DWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 24) = v7 + 1;
        if ( v7 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v8 = *(_DWORD *)(v6 + 24) - 1;
        *(_DWORD *)(v6 + 24) = v8;
        if ( !v8 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  return v3;
}
