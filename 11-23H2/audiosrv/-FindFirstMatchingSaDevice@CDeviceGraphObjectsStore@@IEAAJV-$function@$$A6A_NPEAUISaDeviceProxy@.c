/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180044044
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180043ED0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180043FD0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18010BB10 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18010BB50 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x18010BB90 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180082AC2 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 **v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  unsigned int i; // r12d
  __int64 *j; // rbx
  unsigned int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+48h]
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  __int64 v20; // [rsp+88h] [rbp+58h] BYREF

  v18 = a2;
  v5 = (__int64 **)(a1 + 88);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v16[1] = v6;
  for ( i = 0; i < 4; ++i )
  {
    if ( *a3 )
      break;
    for ( j = *v5; j != v5[1]; ++j )
    {
      v13 = *j;
      v20 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v19 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v20, &v19) >= 0 && v19 )
      {
        v17 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v19, &v17) >= 0 )
        {
          v16[0] = v17;
          v14 = a2[7];
          if ( !v14 )
          {
            std::_Xbad_function_call();
            __debugbreak();
            JUMPOUT(0x1800B2AC3LL);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 16LL))(v14, v16) )
          {
            v15 = v17;
            v17 = 0LL;
            *a3 = v15;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v17);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v19);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
            break;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v17);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
    }
    v5 += 3;
  }
  v9 = *a3 == 0LL ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v10 = (__int64 *)a2[7];
  if ( v10 )
  {
    v11 = *v10;
    LOBYTE(v11) = v10 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 32))(v10, v11);
    a2[7] = 0LL;
  }
  return v9;
}
