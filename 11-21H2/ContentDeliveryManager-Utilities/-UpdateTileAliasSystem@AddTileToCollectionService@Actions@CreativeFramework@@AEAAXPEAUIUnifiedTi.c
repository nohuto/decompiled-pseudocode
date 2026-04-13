/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x1800C1C8C
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BFB10 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C0E90 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC620 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        __int64 (__fastcall ***a2)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, __int64 *),
        char a3)
{
  __int64 (__fastcall **v5)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING, HSTRING, HSTRING); // r14
  UINT32 v20; // edx
  const WCHAR *v21; // rcx
  HRESULT v22; // eax
  HSTRING v23; // rdi
  UINT32 v24; // edx
  const WCHAR *v25; // rcx
  HRESULT v26; // eax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // [rsp+20h] [rbp-59h]
  _BYTE v34[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v35; // [rsp+38h] [rbp-41h] BYREF
  HSTRING v36; // [rsp+40h] [rbp-39h] BYREF
  HSTRING v37; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v38; // [rsp+50h] [rbp-29h] BYREF
  __int64 v39; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-19h] BYREF
  HSTRING string; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER v42; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v43; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = *a2;
  v39 = 0LL;
  v6 = (*v5)(
         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *)a2,
         &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
         &v39);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      613LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6,
      v33);
  v36 = 0LL;
  v7 = v39;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v39 + 48LL);
  WindowsDeleteString(0LL);
  v36 = 0LL;
  v9 = v8(v7, &v36);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      616LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      v33);
  v37 = 0LL;
  v10 = v39;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v39 + 56LL);
  WindowsDeleteString(0LL);
  v37 = 0LL;
  v12 = v11(v10, &v37);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      618LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v12,
      v33);
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(
    (const WCHAR *)&v38,
    v13,
    v14);
  if ( a3 )
  {
    v35 = 0LL;
    v16 = *v38;
    v35 = 0LL;
    LOBYTE(v15) = 1;
    v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64, __int64 *))(v16 + 64))(v38, v36, v15, &v35);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        624LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v17,
        v33);
    v18 = v35;
    v19 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v35 + 48LL);
    v20 = *((_DWORD *)this + 40);
    v21 = (const WCHAR *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v21 = *(const WCHAR **)v21;
    string = 0LL;
    if ( v20 + 1 < v20 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v22 = WindowsCreateStringReference(v21, v20, &hstringHeader, &string);
    if ( v22 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    }
    else
    {
      v23 = string;
      v24 = *((_DWORD *)this + 32);
      v25 = (const WCHAR *)((char *)this + 112);
      if ( *((_QWORD *)this + 17) >= 8uLL )
        v25 = *(const WCHAR **)v25;
      v43 = 0LL;
      if ( v24 + 1 >= v24 )
      {
        v26 = WindowsCreateStringReference(v25, v24, &v42, &v43);
        if ( v26 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
        }
        else
        {
          v27 = v19(v18, v37, v43, v23);
          v28 = retaddr;
          if ( v27 >= 0 )
          {
            if ( v35 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            goto LABEL_23;
          }
        }
        wil::details::in1diag3::Throw_Hr(
          v28,
          628LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v27,
          v33);
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v29 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _BYTE *))(*v38 + 56))(v38, v36, v34);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      633LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v29,
      v33);
  if ( v34[0] )
  {
    v35 = 0LL;
    v30 = *v38;
    v35 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _QWORD, __int64 *))(v30 + 64))(v38, v36, 0LL, &v35);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        637LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v31,
        v33);
    v32 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v35 + 80LL))(v35, v37);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        638LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v32,
        v33);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
LABEL_23:
  if ( v38 )
    (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
  WindowsDeleteString(v37);
  v37 = 0LL;
  WindowsDeleteString(v36);
  v36 = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
}
