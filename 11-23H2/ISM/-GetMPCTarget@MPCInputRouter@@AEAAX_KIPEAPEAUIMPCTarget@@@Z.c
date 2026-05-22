/*
 * XREFs of ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x180109308
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1801098A0 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18005F7A4 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18010820C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18010CBA8 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::GetMPCTarget(MPCInputRouter *this, __int64 a2, unsigned int a3, struct IMPCTarget **a4)
{
  char v6; // di
  _QWORD *v7; // r14
  struct IMPCTarget *v8; // rbx
  void *v9; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  void *v14; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  struct IMPCTarget *v17; // [rsp+98h] [rbp+48h] BYREF

  v16 = a2;
  v6 = 0;
  v7 = (_QWORD *)((char *)this + 904);
  v8 = *(struct IMPCTarget **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                            (_QWORD *)this + 113,
                                            (__int64)v15,
                                            (unsigned __int8 *)&v16)
                             + 24LL);
  v17 = v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v17);
  if ( !v8 )
  {
    v9 = RefCountedObject::operator new(0x50uLL);
    v14 = v9;
    if ( v9 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v11 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v13, 1, v16);
      v6 = 1;
      v8 = (struct IMPCTarget *)MPCTarget::MPCTarget(v9, *v11, 2LL, a3);
    }
    else
    {
      v8 = 0LL;
    }
    v17 = v8;
    if ( (v6 & 1) != 0 )
    {
      v12 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                             v7,
                             (__int64)&v14,
                             (unsigned __int8 *)&v16)
              + 24LL) = v8;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v17);
  *a4 = v8;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
}
