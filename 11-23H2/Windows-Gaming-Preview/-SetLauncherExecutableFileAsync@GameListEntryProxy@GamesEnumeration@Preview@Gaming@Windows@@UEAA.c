/*
 * XREFs of ?SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::SetLauncherExecutableFileAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::Storage::IStorageFile *a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  __int64 *v6; // r8
  int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v14);
  *v6 = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
    v7 = -2147467259;
    goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 11) + 24LL))(
         *((_QWORD *)this + 11),
         &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
         v6);
  if ( v7 < 0 )
  {
LABEL_6:
    v9 = (unsigned int)v7;
    v10 = 163LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::IStorageFile *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v14 + 72LL))(
         v14,
         a2,
         a3);
  v7 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  v9 = (unsigned int)v8;
  v10 = 165LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v9);
LABEL_8:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v7;
}
