/*
 * XREFs of ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800BFA94
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800BF6E4 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800C0D00 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800BB148 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800BD220 (--$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800BD298 (--$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800BD310 (--$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ?Close@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800BF2B0 (-Close@-$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800C2ACC (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  signed int v3; // ebx
  __int64 v4; // rcx
  HMODULE LibraryW; // rbp
  signed int v6; // eax
  __int64 v7; // rcx
  RawInputProvidersTracing *v8; // rcx
  FARPROC ProcAddress; // rbx
  signed int LastError; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2768);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2768));
  v13 = v2;
  v3 = 0;
  if ( !*((_QWORD *)this + 354) )
  {
    if ( *((_BYTE *)this + 2808) )
    {
      v3 = -2147418113;
    }
    else
    {
      LibraryW = LoadLibraryW(L"SpatialInteraction.dll");
      if ( LibraryW != *((HMODULE *)this + 353) )
      {
        Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::Close((__int64)this + 2816);
        *((_QWORD *)this + 353) = LibraryW;
      }
      if ( *((_QWORD *)this + 353) )
      {
        if ( RawInputProvidersTracing::IsEnabled(v4) )
        {
          wil::details::static_lazy<RawInputProvidersTracing>::get(
            v7,
            _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
          RawInputProvidersTracing::SpatialInteractionDLL_Loaded_(v8);
        }
        ProcAddress = GetProcAddress(*((HMODULE *)this + 353), "CreateSpatialInteractionSourceCollection");
        if ( ProcAddress )
        {
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 354);
          v3 = ((__int64 (__fastcall *)(char *))ProcAddress)((char *)this + 2832);
          v12 = v3;
          if ( v3 >= 0 )
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 354) + 96LL))(
                   *((_QWORD *)this + 354),
                   *((_QWORD *)this + 372));
          else
            RawInputProvidersTracing::SpatialInteractionDLL_FailedToCreateCollection<long &>(&v12);
        }
        else
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          v12 = v3;
          RawInputProvidersTracing::SpatialInteractionDLL_EntryPointNotFound<long &>(&v12);
        }
      }
      else
      {
        v6 = GetLastError();
        v3 = v6;
        if ( v6 > 0 )
          v3 = (unsigned __int16)v6 | 0x80070000;
        v12 = v3;
        RawInputProvidersTracing::SpatialInteractionDLL_LoadFailure<long &>(&v12);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
