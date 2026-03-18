/*
 * XREFs of ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x1800D8AD0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComposition::UpdateAnimateResources(CComposition *this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  void (__fastcall ***v5)(_QWORD); // rcx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
      a3,
      1u,
      &v6);
  v4 = *((_DWORD *)this + 178);
  while ( v4 )
  {
    v5 = *(void (__fastcall ****)(_QWORD))(*((_QWORD *)this + 86) + 8LL * (unsigned int)--v4);
    (**v5)(v5);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop,
      a3,
      1u,
      &v6);
}
