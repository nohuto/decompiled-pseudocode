/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800FC218
 * Callers:
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800FC400 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800FC440 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800FC480 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x1800FD2F0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800FB384 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // r15d
  __int64 **v8; // rdi
  __int64 *i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+28h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+38h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+40h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+48h] BYREF
  __int64 v22; // [rsp+88h] [rbp+50h] BYREF

  v20 = a2;
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v18 = v6;
  v7 = 0;
  v8 = (__int64 **)(a1 + 88);
  while ( 2 )
  {
    if ( !*a3 )
    {
      for ( i = *v8; i != v8[1]; ++i )
      {
        v10 = *i;
        v22 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v21 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v22, &v21) >= 0 && v21 )
        {
          v19 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v21, &v19) >= 0 )
          {
            v17 = v19;
            v11 = a2[7];
            if ( !v11 )
            {
              std::_Xbad_function_call();
              return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor_0();
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v17) )
            {
              v12 = v19;
              v19 = 0LL;
              *a3 = v12;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
              Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v21);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
              break;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
        }
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      }
      ++v7;
      v8 += 3;
      if ( v7 < 4 )
        continue;
    }
    break;
  }
  v13 = *a3 == 0 ? 0x887C001A : 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  v14 = (__int64 *)a2[7];
  if ( v14 )
  {
    v15 = *v14;
    LOBYTE(v15) = v14 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 32))(v14, v15);
    a2[7] = 0LL;
  }
  return v13;
}
