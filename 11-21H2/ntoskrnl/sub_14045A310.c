/*
 * XREFs of sub_14045A310 @ 0x14045A310
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
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

void __fastcall sub_14045A310(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r14d
  int v3; // r15d
  int v4; // ebp
  char v6; // si
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    v2 = *((_DWORD *)CurrentPrcb + 8272);
    v3 = v7;
  }
  else
  {
    v6 = 0;
  }
  ++*((_DWORD *)CurrentPrcb + 8752);
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v9 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v9 + 1;
      if ( v9 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    v12 = sub_140211E70(a1);
    ++*((_DWORD *)CurrentPrcb + 8753);
    v4 = v12;
    *((_DWORD *)CurrentPrcb + 8754) += v12;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    sub_140632C48((_DWORD)a1, v13, v13 - v3, v4, v2, 0);
  }
}
