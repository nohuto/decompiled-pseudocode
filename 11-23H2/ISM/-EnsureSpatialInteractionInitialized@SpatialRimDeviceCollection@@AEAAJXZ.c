/*
 * XREFs of ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D8A00
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D8638 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D9CC0 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800CEEB8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D4240 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D4994 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D6140 (--$SpatialInteractionDLL_EntryPointNotFound@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D61B8 (--$SpatialInteractionDLL_FailedToCreateCollection@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ??$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800D6230 (--$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z.c)
 *     ?Close@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800D81E0 (-Close@-$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800DBAA4 (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  signed int v3; // ebx
  __int64 v5; // rcx
  HMODULE LibraryW; // rbp
  signed int v7; // eax
  __int64 v8; // rcx
  RawInputProvidersTracing *v9; // rcx
  FARPROC ProcAddress; // rbx
  signed int LastError; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2768);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2768));
  v13 = v2;
  v3 = 0;
  if ( !*((_QWORD *)this + 354) )
  {
    if ( *((_BYTE *)this + 2808) )
    {
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v13);
      return 2147549183LL;
    }
    LibraryW = LoadLibraryW(L"SpatialInteraction.dll");
    if ( LibraryW != *((HMODULE *)this + 353) )
    {
      Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::Close((__int64)this + 2816);
      *((_QWORD *)this + 353) = LibraryW;
    }
    if ( *((_QWORD *)this + 353) )
    {
      if ( RawInputProvidersTracing::IsEnabled(v5) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v8,
          (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::SpatialInteractionDLL_Loaded_(v9);
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
      v7 = GetLastError();
      v3 = v7;
      if ( v7 > 0 )
        v3 = (unsigned __int16)v7 | 0x80070000;
      v12 = v3;
      RawInputProvidersTracing::SpatialInteractionDLL_LoadFailure<long &>(&v12);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
