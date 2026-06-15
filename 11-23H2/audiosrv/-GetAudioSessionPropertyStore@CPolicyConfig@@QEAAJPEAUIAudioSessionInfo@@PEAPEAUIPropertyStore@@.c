/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180013834 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000AC94 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800124FC (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001262C (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x180013E50 (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x1800488A8 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 **i; // rsi
  struct IPropertyStore **v9; // rsi
  __int64 *j; // rdi
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *v16; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 **v21; // rsi
  int (__fastcall *v22)(__int64 **, GUID *, __int64 **); // r14
  __int64 *v23; // rsi
  unsigned __int8 (__fastcall *v24)(__int64 *, __int64); // r14
  __int64 v25; // rax
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 *v28; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioSessionInfo *v29; // [rsp+78h] [rbp+10h] BYREF
  struct IPropertyStore **v30; // [rsp+80h] [rbp+18h] BYREF
  __int64 **v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = a3;
  v29 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v26[1] = v4;
  v6 = (__int64 *)*((_QWORD *)this + 8);
  v7 = (__int64 *)*((_QWORD *)this + 9);
  while ( v6 != v7 && !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v5, (__int64)v6) )
    ++v6;
  if ( v6 != v7 )
  {
    for ( i = (__int64 **)(v6 + 1); i != (__int64 **)v7; ++i )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v5, (__int64)i) )
      {
        v19 = 0LL;
        if ( &v28 != i )
        {
          v19 = *i;
          *i = 0LL;
        }
        v28 = (__int64 *)*v6;
        *v6 = (__int64)v19;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
        ++v6;
      }
    }
  }
  std::vector<Microsoft::WRL::WeakRef>::erase((__int64)this + 64, &v28, v6, *((__int64 **)this + 9));
  v9 = v30;
  *v30 = 0LL;
  for ( j = (__int64 *)*((_QWORD *)this + 8); j != *((__int64 **)this + 9); ++j )
  {
    v20 = *j;
    v26[0] = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v31 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v26, &v31) >= 0 )
    {
      v21 = v31;
      if ( v31 )
      {
        v28 = 0LL;
        v22 = (int (__fastcall *)(__int64 **, GUID *, __int64 **))**v31;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
        if ( v22(v21, &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a, &v28) >= 0 )
        {
          v23 = v28;
          v24 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v28 + 24);
          v25 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v29 + 64LL))(v29);
          if ( v24(v23, v25) )
          {
            v9 = v30;
            (*(void (__fastcall **)(__int64 *, GUID *, struct IPropertyStore **))*v28)(
              v28,
              &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
              v30);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v31);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
            break;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      }
      v9 = v30;
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
  }
  if ( *v9 )
    goto LABEL_15;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionStore,IAudioSessionStore,IAudioSessionInfo * &>(
          &v30,
          &v29);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -2147024894 || v11 == -2147024891 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v11,
        v26[0]);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v12;
    }
  }
  else
  {
    v28 = 0LL;
    v31 = &v28;
    v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v31);
    v14 = Microsoft::WRL::AsWeak<IAudioSessionStore>(v30, v13);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = (_QWORD *)*((_QWORD *)this + 9);
      if ( v16 == *((_QWORD **)this + 10) )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
          (__int64 *)this + 8,
          (__int64)v16,
          (__int64 *)&v28);
      }
      else
      {
        v18 = v28;
        *v16 = v28;
        if ( v18 )
          (*(void (__fastcall **)(__int64 *))(*v18 + 8))(v18);
        *((_QWORD *)this + 9) += 8LL;
      }
      ((void (__fastcall *)(struct IPropertyStore **, GUID *, struct IPropertyStore **))(*v30)->lpVtbl)(
        v30,
        &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
        v9);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
LABEL_15:
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v14,
      v26[0]);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v15;
  }
}
