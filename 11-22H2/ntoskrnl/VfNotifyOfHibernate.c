/*
 * XREFs of VfNotifyOfHibernate @ 0x140AC8218
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405CE2B4 (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1405CE8E8 (VfDisableHalVerifier.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  int IsVerifierExtensionEnabled; // eax
  int v2; // r8d

  if ( a1 )
  {
    if ( ViVerifyDma )
    {
      ViEnableAfterHibernate = 1;
      VfDisableHalVerifier();
    }
  }
  else
  {
    if ( !ViEnableAfterHibernate )
      return;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v2 )
  {
    if ( ViFnExtensionHiberFunc )
      ((void (*)(void))ViFnExtensionHiberFunc)();
  }
}
