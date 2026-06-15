/*
 * XREFs of ActivatePolicyManager @ 0x18000E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyMana.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivatePolicyManager(__int64 a1, struct IVolumeProvider *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // edi
  signed __int32 v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  g_VolumeProvider = a2;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               3u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &g_DeviceEnumerator);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Instance);
    return v6;
  }
  g_PolicyManager = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v8[7] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &CWindowsPolicyManager::`vftable';
  *((_QWORD *)v9 + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)v9 + 2) = &CWindowsPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioPolicyNotificationManager>'};
  *((_QWORD *)v9 + 4) = 0LL;
  *((_QWORD *)v9 + 5) = 0LL;
  v9[12] = 0;
  v10 = CWindowsPolicyManager::RuntimeClassInitialize((CWindowsPolicyManager *)v9);
  if ( v10 >= 0 )
  {
    do
      v11 = v9[7];
    while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(v9 + 7, v11 + 1, v11) );
    g_PolicyManager = (CWindowsPolicyManager *)v9;
    v10 = 0;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release(v9);
  if ( v10 < 0 )
    goto LABEL_13;
  *a5 = g_PolicyManager;
  return 0LL;
}
