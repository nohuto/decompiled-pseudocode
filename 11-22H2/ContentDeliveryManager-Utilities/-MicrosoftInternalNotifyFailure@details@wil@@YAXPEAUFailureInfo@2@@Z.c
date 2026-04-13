/*
 * XREFs of ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x1800393F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800457E8 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::MicrosoftInternalNotifyFailure(wil::details *this, struct wil::FailureInfo *a2)
{
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  char v7; // [rsp+30h] [rbp-20h]
  __int16 v8; // [rsp+32h] [rbp-1Eh]
  __int16 v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF

  v5 = *((_DWORD *)this + 2);
  v6 = *((_QWORD *)this + 3);
  v7 = *(_BYTE *)this;
  v8 = wil::g_moduleFailureReportFlags;
  v9 = *((_WORD *)this + 32);
  v10 = 0;
  v11 = *((_QWORD *)this + 7);
  v12 = *((_QWORD *)this + 16);
  v13 = 0LL;
  ProcAddress = (FARPROC)`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers;
  if ( `wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "WilFailureNotifyWatchers"),
        (`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD, int *, __int64 *))ProcAddress)(0LL, &v5, &v13);
  }
  *((_DWORD *)this + 4) = v13;
  switch ( BYTE4(v13) )
  {
    case 1u:
      *((_DWORD *)this + 1) |= 1u;
      break;
    case 2u:
      *((_DWORD *)this + 1) |= 2u;
      break;
    case 3u:
      *((_DWORD *)this + 1) |= 4u;
      break;
  }
}
