/*
 * XREFs of ?InitializeCacheTimer@InputSinkDataCache@@QEAAXPEAUIMessageSession@@@Z @ 0x180034358
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x1800343F4 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InputSinkDataCache::InitializeCacheTimer(InputSinkDataCache *this, struct IMessageSession *a2)
{
  __int64 (__fastcall *v4)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), InputSinkDataCache *, char *); // rdi
  int v5; // eax
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), InputSinkDataCache *, char *))(*(_QWORD *)a2 + 144LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 12);
  v5 = v4(a2, InputSinkDataCache::OnCacheTimerStatic, this, (char *)this + 96);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\inp"
                    "utsinkdatacache.cpp",
      (const char *)(unsigned int)v5,
      v7);
  *((_BYTE *)this + 104) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)InputSiteHierarchyManager + 40LL))(InputSiteHierarchyManager);
}
