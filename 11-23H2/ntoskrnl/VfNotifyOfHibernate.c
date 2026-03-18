/*
 * XREFs of VfNotifyOfHibernate @ 0x140AC7248
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405CE224 (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1405CE858 (VfDisableHalVerifier.c)
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
