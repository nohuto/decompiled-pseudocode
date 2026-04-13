/*
 * XREFs of ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800AE78C
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800AF5E8 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006DA14 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800A50B0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x1800AE4D4 (-GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV-$com_ptr_t@UIUnifiedTileIdenti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall StartDocked::IsPinnedToStart(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v6; // rax
  int UdkTileIdFromUnifiedTileIdentifier; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v6 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
         &v16,
         a2);
  UdkTileIdFromUnifiedTileIdentifier = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(v6, &v15);
  v8 = UdkTileIdFromUnifiedTileIdentifier;
  if ( UdkTileIdFromUnifiedTileIdentifier >= 0 )
  {
    v18 = 0LL;
    v9 = (_QWORD *)*a1;
    v10 = *(_QWORD *)*a1;
    v18 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v10 + 48))(v9, v15, &v18);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(v18, a3, v12);
      v8 = v11;
      if ( v11 >= 0 )
      {
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v18);
        v8 = 0;
        goto LABEL_9;
      }
      v13 = 100LL;
    }
    else
    {
      v13 = 99LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)UdkTileIdFromUnifiedTileIdentifier);
  }
LABEL_9:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v15);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a2);
  return v8;
}
