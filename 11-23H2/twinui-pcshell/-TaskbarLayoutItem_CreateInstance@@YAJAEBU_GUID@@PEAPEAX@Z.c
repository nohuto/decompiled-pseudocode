/*
 * XREFs of ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803EBA98
 * Callers:
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803EA338 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VTaskbarLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutItem@@@Z @ 0x1803EB588 (--$MakeAndInitialize@VTaskbarLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutIt.c)
 */

__int64 __fastcall TaskbarLayoutItem_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TaskbarLayoutItem *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutItem,TaskbarLayoutItem,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 132LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutItem *, GUID *, void **))v8)(
         v8,
         &GUID_8a2a3037_d907_4af5_996a_0262e73bbe8f,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 133LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return v4;
}
