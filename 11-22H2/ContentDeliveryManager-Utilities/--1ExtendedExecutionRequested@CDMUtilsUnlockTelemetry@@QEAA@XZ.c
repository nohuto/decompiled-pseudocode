/*
 * XREFs of ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x1800A552C
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800A72F8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800DA590 (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A5ABC (-Destroy@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  *(_QWORD *)this = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
