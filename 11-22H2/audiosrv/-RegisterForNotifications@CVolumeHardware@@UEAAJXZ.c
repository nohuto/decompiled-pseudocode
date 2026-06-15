/*
 * XREFs of ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18001DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeHardware::RegisterForNotifications(CVolumeHardware *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CVolumeHardware *))(**((_QWORD **)this + 31) + 112LL))(
         *((_QWORD *)this + 31),
         &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::RegisterForNotifications", 0x5D8u, v2);
  else
    *((_DWORD *)this + 70) = 1;
  return v3;
}
