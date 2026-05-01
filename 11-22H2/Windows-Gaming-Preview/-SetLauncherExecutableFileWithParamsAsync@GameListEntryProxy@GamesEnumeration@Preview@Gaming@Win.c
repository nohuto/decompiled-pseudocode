/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::Storage::IStorageFile *a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  __int64 *v8; // r8
  int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v16);
  *v8 = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
    v9 = -2147467259;
    goto LABEL_6;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 11) + 24LL))(
         *((_QWORD *)this + 11),
         &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
         v8);
  if ( v9 < 0 )
  {
LABEL_6:
    v11 = (unsigned int)v9;
    v12 = 177LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::IStorageFile *, HSTRING, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v16 + 80LL))(
          v16,
          a2,
          a3,
          a4);
  v9 = v10;
  if ( v10 >= 0 )
    goto LABEL_8;
  v11 = (unsigned int)v10;
  v12 = 179LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v11);
LABEL_8:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v9;
}
