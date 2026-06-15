/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18012AB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetMasterVolumeLevelScalar(
        CVolumeStrip *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  __int64 v4; // rdx

  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 20) + 104LL))(
           *((_QWORD *)this + 20),
           v4,
           a3,
           a4);
}
