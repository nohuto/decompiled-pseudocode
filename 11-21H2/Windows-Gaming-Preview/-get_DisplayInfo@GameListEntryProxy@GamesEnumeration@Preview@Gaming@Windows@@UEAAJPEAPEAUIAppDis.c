/*
 * XREFs of ?get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x18002A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010D4C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_DisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v13);
  *v4 = 0LL;
  if ( !*((_QWORD *)this + 12) )
  {
    v6 = -2147467259;
LABEL_9:
    v8 = (unsigned int)v6;
    v9 = 58LL;
    goto LABEL_10;
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           v4);
  else
    v6 = 0;
  if ( v6 < 0 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::ApplicationModel::IAppDisplayInfo **, __int64 *))(*(_QWORD *)v13 + 48LL))(
         v13,
         a2,
         v4);
  v6 = v7;
  if ( v7 >= 0 )
    goto LABEL_11;
  v8 = (unsigned int)v7;
  v9 = 60LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v8);
LABEL_11:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
