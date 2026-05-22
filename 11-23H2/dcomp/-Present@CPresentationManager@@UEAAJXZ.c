/*
 * XREFs of ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??$AddItem@UBatchSyncInfo@@@CPropertyIndex@@QEAAXPEBUBatchSyncInfo@@@Z @ 0x1800A6FB8 (--$AddItem@UBatchSyncInfo@@@CPropertyIndex@@QEAAXPEBUBatchSyncInfo@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix@@@details@wil@@QEAA_NXZ @ 0x1800A7744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirecti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18010E31C (--1-$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V-$all.c)
 *     ??$_Emplace_reallocate@AEBQEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801ACB3C (--$_Emplace_reallocate@AEBQEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@.c)
 *     ??1CPropertyIndex@@QEAA@XZ @ 0x1801AD040 (--1CPropertyIndex@@QEAA@XZ.c)
 *     ?AddToIndexIfSet@CPresentParametersInfo@CPresentationManager@@QEAAXAEAVCPropertyIndex@@@Z @ 0x1801AD238 (-AddToIndexIfSet@CPresentParametersInfo@CPresentationManager@@QEAAXAEAVCPropertyIndex@@@Z.c)
 *     ?CheckLostEvent@CPresentationManager@@AEAAJXZ @ 0x1801AD368 (-CheckLostEvent@CPresentationManager@@AEAAJXZ.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationManager::Present(CPresentationManager *this)
{
  __int64 v2; // rcx
  double v3; // xmm0_8
  unsigned __int64 v4; // rcx
  double v5; // xmm0_8
  signed int v6; // eax
  int v7; // ebx
  char *v8; // rsi
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  signed int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  DWORD v15; // r12d
  unsigned int v16; // r15d
  signed int i; // eax
  __int64 v18; // rdx
  DWORD v19; // r15d
  _QWORD *v20; // r15
  _QWORD *j; // rsi
  signed int v22; // eax
  unsigned int v24; // [rsp+28h] [rbp-59h]
  unsigned int v25; // [rsp+28h] [rbp-59h]
  void *v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+58h] [rbp-29h] BYREF
  __int64 v29; // [rsp+68h] [rbp-19h]
  __int64 v30; // [rsp+70h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+78h] [rbp-9h] BYREF
  __int128 v32; // [rsp+80h] [rbp-1h] BYREF
  __int64 v33; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v34; // [rsp+98h] [rbp+17h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v36; // [rsp+A8h] [rbp+27h]

  wil::EnterCriticalSection(&v31, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v2 = *((_QWORD *)this + 24);
  v33 = 0LL;
  v32 = 0LL;
  if ( v2 < 0 )
    v3 = (double)(int)(v2 & 1 | ((unsigned __int64)v2 >> 1)) + (double)(int)(v2 & 1 | ((unsigned __int64)v2 >> 1));
  else
    v3 = (double)(int)v2;
  v4 = 0LL;
  v5 = v3 / 10000000.0 * *((double *)this + 22);
  if ( v5 >= 9.223372036854776e18 )
  {
    v5 = v5 - 9.223372036854776e18;
    if ( v5 < 9.223372036854776e18 )
      v4 = 0x8000000000000000uLL;
  }
  v26 = 0LL;
  v29 = 0LL;
  v34 = v4 + (unsigned int)(int)v5;
  v28 = 0LL;
  v6 = CPresentationManager::CheckLostEvent((HANDLE *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, v6, 0xC3u, 0LL);
    v8 = (char *)this + 64;
  }
  else
  {
    CPresentationManager::CPresentParametersInfo::AddToIndexIfSet(
      (CPresentationManager *)((char *)this + 208),
      (struct CPropertyIndex *)&v32);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl)
      && *((_QWORD *)this + 25) )
    {
      CPropertyIndex::AddItem<BatchSyncInfo>((__int64)&v32, (__int64)this + 200);
    }
    v8 = (char *)this + 64;
    v9 = (_QWORD *)*((_QWORD *)this + 8);
    v10 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v9 != v10 )
    {
      v11 = (**(__int64 (__fastcall ***)(_QWORD, __int64 *))*v9)(*v9, &v30);
      v7 = v11;
      if ( v11 < 0 )
      {
        v24 = 214;
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, v11, v24, 0LL);
        goto LABEL_47;
      }
      if ( v30 )
      {
        if ( *((_QWORD *)&v28 + 1) == v29 )
        {
          std::vector<IUnknown *>::_Emplace_reallocate<IUnknown * const &>(&v28, *((_BYTE **)&v28 + 1), &v30);
        }
        else
        {
          **((_QWORD **)&v28 + 1) = v30;
          *((_QWORD *)&v28 + 1) += 8LL;
        }
      }
      ++v9;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v26,
      0LL);
    v12 = NtTokenManagerCreateFlipObjectTokenHandle(
            *((_QWORD *)this + 13),
            &v34,
            1LL,
            (__int64)(*((_QWORD *)&v32 + 1) - v32) >> 5,
            v32,
            &v26,
            &v27,
            &v35);
    v11 = HRESULTFromNTSTATUS(v12);
    v7 = v11;
    if ( v11 < 0 )
    {
      v24 = 232;
      goto LABEL_26;
    }
    v13 = v36;
    if ( v35 || v36 )
    {
      *((_QWORD *)this + 16) = v35;
      *((_QWORD *)this + 17) = v13;
    }
    v14 = 0;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix>::GetImpl'::`2'::impl) )
    {
      v15 = 1;
      v16 = *((_QWORD *)this + 25) == 0LL ? 0xD : 0;
      for ( i = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, void *, __int128 *))(**((_QWORD **)this + 19)
                                                                                               + 24LL))(
                  *((_QWORD *)this + 19),
                  v27,
                  *((_QWORD *)this + 16),
                  *((_QWORD *)this + 17),
                  v26,
                  &v28);
            ;
            i = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, void *, __int128 *))(**((_QWORD **)this + 19)
                                                                                               + 24LL))(
                  *((_QWORD *)this + 19),
                  v27,
                  *((_QWORD *)this + 16),
                  *((_QWORD *)this + 17),
                  v26,
                  &v28) )
      {
        v7 = i;
        if ( i < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, i, 0x109u, 0LL);
          goto LABEL_47;
        }
        if ( i != 142213124 )
        {
          ++*((_QWORD *)this + 23);
          *((_DWORD *)this + 54) = 0;
          goto LABEL_47;
        }
        if ( v14 >= v16 )
          break;
        Sleep(v15);
        v15 *= 2;
        ++v14;
      }
      if ( *((_QWORD *)this + 25) )
      {
        ++*((_QWORD *)this + 23);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v26,
          0LL);
      }
      else
      {
        v7 = -2004811775;
      }
    }
    else
    {
      v19 = 1;
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, void *, __int128 *))(**((_QWORD **)this + 19)
                                                                                             + 24LL))(
                *((_QWORD *)this + 19),
                v27,
                *((_QWORD *)this + 16),
                *((_QWORD *)this + 17),
                v26,
                &v28);
        v7 = v11;
        if ( v11 < 0 )
        {
          v24 = 327;
          goto LABEL_26;
        }
        if ( v11 != 142213124 )
          break;
        Sleep(v19);
        v19 *= 2;
        if ( ++v14 >= 0xD )
          goto LABEL_42;
      }
      ++*((_QWORD *)this + 23);
      *((_DWORD *)this + 54) = 0;
LABEL_42:
      if ( v14 == 13 )
        v7 = -2004811775;
    }
  }
LABEL_47:
  v20 = (_QWORD *)*((_QWORD *)v8 + 1);
  for ( j = *(_QWORD **)v8; j != v20; ++j )
  {
    LOBYTE(v18) = v7 >= 0;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*j + 8LL))(*j, v18);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CompTexturesNoRedirectionFix>::GetImpl'::`2'::impl) )
  {
    if ( v7 < 0 || v7 == 142213124 )
    {
      v22 = CPresentationManager::CheckLostEvent((HANDLE *)this);
      if ( v22 < 0 )
      {
        v25 = 370;
LABEL_58:
        v7 = v22;
        MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, v22, v25, 0LL);
      }
    }
  }
  else if ( v7 < 0 )
  {
    v22 = CPresentationManager::CheckLostEvent((HANDLE *)this);
    if ( v22 < 0 )
    {
      v25 = 385;
      goto LABEL_58;
    }
  }
  std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::~vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>((__int64)&v28);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v26);
  CPropertyIndex::~CPropertyIndex((CPropertyIndex *)&v32);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v31);
  return (unsigned int)v7;
}
