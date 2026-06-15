/*
 * XREFs of ?SetMute@CVolumeStrip@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D0C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetMute(CVolumeStrip *this, __int64 a2, const struct _GUID *a3, int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(**((_QWORD **)this + 21) + 72LL))(
           *((_QWORD *)this + 21),
           a2,
           a3,
           a4);
}
