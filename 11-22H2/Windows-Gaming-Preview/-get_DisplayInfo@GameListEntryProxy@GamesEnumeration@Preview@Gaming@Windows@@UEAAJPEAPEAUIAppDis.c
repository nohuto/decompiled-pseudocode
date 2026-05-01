/*
 * XREFs of ?get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x18002AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_DisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  __int64 *v4; // r8
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v12);
  *v4 = 0LL;
  if ( !*((_QWORD *)this + 12) )
  {
    v5 = -2147467259;
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 12) + 24LL))(
         *((_QWORD *)this + 12),
         &GUID_735924d3_811f_4494_b69c_c641a0c61543,
         v4);
  if ( v5 < 0 )
  {
LABEL_6:
    v7 = (unsigned int)v5;
    v8 = 58LL;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::ApplicationModel::IAppDisplayInfo **))(*(_QWORD *)v12 + 48LL))(
         v12,
         a2);
  v5 = v6;
  if ( v6 >= 0 )
    goto LABEL_8;
  v7 = (unsigned int)v6;
  v8 = 60LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v7);
LABEL_8:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v5;
}
