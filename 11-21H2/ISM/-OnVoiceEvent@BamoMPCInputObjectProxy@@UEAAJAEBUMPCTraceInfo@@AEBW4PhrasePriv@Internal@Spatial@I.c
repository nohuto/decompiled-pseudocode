/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180112FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x180113054 (-OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Inter.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnVoiceEvent(
        BamoMPCInputObjectProxy *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  BamoMPCInputObjectProxy *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v8) = BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
                  (BamoMPCInputObjectProxy *)((char *)v8 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, v9, v10);
  return (unsigned int)v8;
}
