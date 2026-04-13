/*
 * XREFs of ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800BFC6C
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion_nothrow@_N@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@@Z @ 0x180085F30 (--$wait_for_completion_nothrow@_N@wil@@YAJPEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tag.c)
 *     ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF84C (-GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV-$com_ptr_t@UIUnifiedTileIdenti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall StartDocked::IsPinnedToStart(__int64 **a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int UdkTileIdFromUnifiedTileIdentifier; // eax
  unsigned int v8; // esi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  v6 = *a2;
  v16 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  UdkTileIdFromUnifiedTileIdentifier = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(&v16, &v15);
  v8 = UdkTileIdFromUnifiedTileIdentifier;
  if ( UdkTileIdFromUnifiedTileIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)UdkTileIdFromUnifiedTileIdentifier);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v8;
  }
  v18 = 0LL;
  v10 = *a1;
  v11 = **a1;
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v11 + 48))(v10, v15, &v18);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v12);
    if ( v18 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v8;
  }
  v14 = wil::wait_for_completion_nothrow<bool>(v18, a3, v13);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v14);
    if ( v18 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v8;
  }
  if ( v18 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *a1 )
    (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
