/*
 * XREFs of ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x14002DAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::InitializeAPOs(
        CSystemAudioDeviceBase *this,
        __int64 a2,
        __int64 a3,
        struct IAudioProcessingObject **a4)
{
  return (*(__int64 (__fastcall **)(char *, __int64, __int64, struct IAudioProcessingObject **))(*((_QWORD *)this - 1)
                                                                                               + 192LL))(
           (char *)this - 8,
           a2,
           a3,
           a4);
}
