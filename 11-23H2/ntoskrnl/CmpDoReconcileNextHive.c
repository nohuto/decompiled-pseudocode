/*
 * XREFs of CmpDoReconcileNextHive @ 0x140750C30
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140750B80 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1407513A8 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1407E2734 (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  unsigned __int64 v10; // rcx

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140C02004;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        HvGetEffectiveLogSizeCapForHive(NextActiveHive);
        if ( (int)CmpFlushHive(NextActiveHive) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_140C0200C;
        }
      }
      else if ( *(_DWORD *)(NextActiveHive + 128) )
      {
        if ( (*(_DWORD *)(NextActiveHive + 160) & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = *(_QWORD *)(NextActiveHive + 4144) + 10000000LL * (unsigned int)dword_140C02000;
          if ( UnbiasedInterruptTime < v10 )
            v8 = v10 - UnbiasedInterruptTime;
        }
      }
      v6 = NextActiveHive;
      if ( v8 >= v3 )
        v8 = v3;
      v3 = v8;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
