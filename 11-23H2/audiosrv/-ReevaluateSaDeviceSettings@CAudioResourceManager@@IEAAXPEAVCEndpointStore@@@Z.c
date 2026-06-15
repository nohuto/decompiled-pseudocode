/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC24
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Do_call @ 0x1800DDAC0 (std--_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D8854 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800DDC7C (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_P @ 0x1800DDD3C (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        struct CEndpointStore *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  int v5; // edi
  char v6; // r15
  __int64 v7; // r8
  int v8; // r12d
  struct tWAVEFORMATEX *v9; // rdi
  struct tWAVEFORMATEX *v10; // rsi
  __int64 *i; // rbx
  __int64 *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r14
  struct _GUID v16; // xmm8
  struct _GUID v17; // xmm7
  struct _GUID v18; // xmm6
  unsigned int v19; // eax
  int v20; // eax
  struct tWAVEFORMATEX *v21; // r14
  __int64 v22; // r15
  struct _GUID v23; // xmm6
  unsigned int v24; // eax
  __int64 v25; // rax
  double v26; // xmm6_8
  const struct tWAVEFORMATEX *v27; // rax
  __int64 v28; // r15
  __int64 v29; // rbx
  SaDeviceParams *v30; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID v31; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A8h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v34; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-30h]
  struct tWAVEFORMATEX *v39; // [rsp+E0h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v41; // [rsp+F0h] [rbp-18h]
  __int128 v42; // [rsp+F8h] [rbp-10h] BYREF
  std::_Ref_count_base *v43; // [rsp+108h] [rbp+0h]
  CAudioResourceManager *v44; // [rsp+110h] [rbp+8h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+118h] [rbp+10h] BYREF
  struct _GUID v46; // [rsp+128h] [rbp+20h] BYREF
  struct _GUID v47; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v48[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v49[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v50[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v51[16]; // [rsp+178h] [rbp+70h] BYREF

  v44 = this;
  v42 = 0LL;
  v43 = 0LL;
  v3 = (_QWORD *)((char *)a2 + 16);
  v4 = v3;
  if ( v3[3] >= 8uLL )
    v4 = (_QWORD *)*v3;
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                              + 40LL))(
         g_pEndpointCharacteristicsCache,
         v4,
         0LL,
         0LL,
         &v42);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids, v3);
  }
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)a2 + 13) + 120LL))(
      *((_QWORD *)a2 + 13),
      lpCriticalSection);
    while ( 1 )
    {
      v6 = 1;
      v37 = 0LL;
      v38 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 88LL))(*((_QWORD *)a2 + 13), &v37);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, v7, (__int64)(*((_QWORD *)&v37 + 1) - v37) >> 3);
      }
      if ( v8 < 0 )
        goto LABEL_47;
      v33 = 0LL;
      v9 = 0LL;
      v40 = 0LL;
      v10 = 0LL;
      v41 = 0LL;
      for ( i = (__int64 *)v37; ; ++i )
      {
        if ( i == *((__int64 **)&v37 + 1) )
        {
          v6 = 1;
          goto LABEL_46;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
          || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
        {
          continue;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
          break;
        LODWORD(v30) = 0;
        v39 = 0LL;
        v34 = 0LL;
        v36 = 0LL;
        pv = 0LL;
        v16 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v48);
        v17 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v49);
        v18 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v50);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v46 = v16;
        v47 = v17;
        v31 = v18;
        v20 = DeriveDeviceGraphFormatsForStream(
                (CEndpointCharacteristics **)&v42,
                0,
                (struct _GUID *)v19,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                (IAudioMediaType *)&v31,
                &v47,
                &v46,
                0LL,
                &v36,
                (struct tWAVEFORMATEX **)&pv,
                &v34,
                &v39);
        v21 = v39;
        if ( v20 >= 0 )
        {
          v22 = *((_QWORD *)&v42 + 1);
          v23 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v51);
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          v31 = v23;
          if ( (int)EffectPack::GetSharedModeEnginePeriodicity(
                      v22,
                      v24,
                      (__int64)v21,
                      (__int128 *)&v31,
                      0,
                      (__int64)&v30,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            v26 = (double)(int)v30 * 10000000.0;
            if ( v25 != (int)(v26 / (double)(int)v21->nSamplesPerSec + 0.5)
              || (v27 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v21, v27)) )
            {
              v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v28 >= 0x2700 )
              {
                v6 = 0;
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v33, i);
                CoTaskMemFree(0LL);
                v9 = v21;
                v40 = v21;
                CoTaskMemFree(0LL);
                v10 = v34;
                v41 = v34;
                v29 = (unsigned int)(int)(v26 / (double)(int)v21->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v36);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
                goto LABEL_43;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v36);
        CoTaskMemFree(v34);
        CoTaskMemFree(v21);
LABEL_37:
        ;
      }
      v31 = 0LL;
      v32 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, struct _GUID *))(**((_QWORD **)a2 + 13) + 112LL))(
             *((_QWORD *)a2 + 13),
             *i,
             &v31) < 0 )
        goto LABEL_28;
      v12 = *(__int64 **)&v31.Data1;
      if ( (__int64)(*(_QWORD *)v31.Data4 - *(_QWORD *)&v31.Data1) >> 3 != 1 )
      {
LABEL_29:
        if ( v12 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v12, *(__int64 **)v31.Data4);
          std::_Deallocate<16,0>(*(void **)&v31.Data1, (v32 - *(_QWORD *)&v31.Data1) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        goto LABEL_37;
      }
      v30 = 0LL;
      if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v30) < 0
        || (v13 = **(_QWORD **)&v31.Data1,
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i),
            v14 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 144LL))(v13))
        || (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i), GetTickCount64() - v15 < 0x2700) )
      {
        if ( v30 )
          SaDeviceParams::`scalar deleting destructor'(v30);
LABEL_28:
        v12 = *(__int64 **)&v31.Data1;
        goto LABEL_29;
      }
      v6 = 0;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v33, i);
      v9 = (struct tWAVEFORMATEX *)*((_QWORD *)v30 + 2);
      *((_QWORD *)v30 + 2) = 0LL;
      CoTaskMemFree(0LL);
      v40 = v9;
      v10 = (struct tWAVEFORMATEX *)*((_QWORD *)v30 + 3);
      *((_QWORD *)v30 + 3) = 0LL;
      CoTaskMemFree(0LL);
      v41 = v10;
      v29 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v31.Data1 + 144LL))(**(_QWORD **)&v31.Data1);
      if ( v30 )
        SaDeviceParams::`scalar deleting destructor'(v30);
      v30 = 0LL;
      if ( *(_QWORD *)&v31.Data1 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)&v31.Data1,
          *(__int64 **)v31.Data4);
        std::_Deallocate<16,0>(*(void **)&v31.Data1, (v32 - *(_QWORD *)&v31.Data1) & 0xFFFFFFFFFFFFFFF8uLL);
      }
LABEL_43:
      if ( v33 )
      {
        std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v37);
        v8 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v44, &v42, *((_QWORD *)a2 + 13), v9, v10, v29, &v33);
      }
LABEL_46:
      CoTaskMemFree(v10);
      CoTaskMemFree(v9);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
LABEL_47:
      if ( (_QWORD)v37 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v37,
          *((__int64 **)&v37 + 1));
        std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( v8 < 0 || v6 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        break;
      }
    }
  }
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
}
