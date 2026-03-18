/*
 * XREFs of VfNotifyOfHibernate @ 0x140A8682C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405FDEEC (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1405FE548 (VfDisableHalVerifier.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v2; // rdx
  struct _LIST_ENTRY *v3; // rax
  int IsVerifierExtensionEnabled; // eax
  __int64 v5; // rcx
  char v6; // r9
  int v7; // r11d

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
    Flink = ViAdapterList.Flink;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
    while ( &ViAdapterList != Flink )
    {
      v2 = Flink[1].Flink;
      if ( v2 )
      {
        v3 = (struct _LIST_ENTRY *)&ViDmaOperationsV2;
        if ( LODWORD(Flink[12].Flink) >= 3 )
          v3 = (struct _LIST_ENTRY *)&ViDmaOperationsV3;
        v2->Blink = v3;
      }
      Flink = Flink->Flink;
    }
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v7 )
  {
    if ( ViFnExtensionHiberFunc )
    {
      LOBYTE(v5) = v6;
      ((void (__fastcall *)(__int64))ViFnExtensionHiberFunc)(v5);
    }
  }
}
