/*
 * XREFs of ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18013F49C
 * Callers:
 *     PolicyConfigGetDynamicRoutingRule @ 0x180117CB0 (PolicyConfigGetDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x18013E100 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DynamicAudioEndpointManager::GetRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  DynamicAudioEndpointManager *v6; // rsi
  __int64 (__fastcall *v7)(struct IAudioPolicyManager *, void *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v19[24]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v22 = a3;
  v6 = g_DynamicAudioEndpointManager;
  v18 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v16);
  v8 = v7(g_PolicyManager, a2, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BF,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_16;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 16);
  v11 = *(_QWORD *)(*(_QWORD *)std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
                                 (__int64 *)v6 + 121,
                                 (__int64)v19,
                                 &v22,
                                 v10)
                  + 40LL);
  v18 = v11;
  if ( !v11 )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v17);
    v9 = -2147024809;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = v21;
  v21 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
          v11,
          &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
          &v21);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 716LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v17);
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct _DynamicRoutingRule *))(*(_QWORD *)v21 + 88LL))(
          v21,
          v16,
          a4);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 717LL;
    goto LABEL_10;
  }
  if ( v6 != (DynamicAudioEndpointManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  v9 = 0;
LABEL_16:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
  return v9;
}
