/*
 * XREFs of ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800C1740
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion_nothrow@_N@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@@Z @ 0x180085F30 (--$wait_for_completion_nothrow@_N@wil@@YAJPEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tag.c)
 *     ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF84C (-GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV-$com_ptr_t@UIUnifiedTileIdenti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall StartDocked::SwapTilesInStart(__int64 **a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx
  int UdkTileIdFromUnifiedTileIdentifier; // eax
  unsigned int v10; // r14d
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v20 = 0LL;
  v8 = *a2;
  v22 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  UdkTileIdFromUnifiedTileIdentifier = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(&v22, &v20);
  v10 = UdkTileIdFromUnifiedTileIdentifier;
  if ( UdkTileIdFromUnifiedTileIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)UdkTileIdFromUnifiedTileIdentifier);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( *a3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    return v10;
  }
  v19 = 0LL;
  v12 = *a3;
  v22 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(&v22, &v19);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v13);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( *a3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    return v10;
  }
  v21 = 0LL;
  v14 = *a1;
  v15 = **a1;
  v21 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v15 + 80))(
          v14,
          v20,
          v19,
          &v21);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v16);
    if ( v21 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( *a3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    return v10;
  }
  v18 = wil::wait_for_completion_nothrow<bool>(v21, a4, v17);
  v10 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v18);
    if ( v21 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( *a1 )
      (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( *a3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    return v10;
  }
  if ( v21 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( *a1 )
    (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  return 0LL;
}
