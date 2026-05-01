/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18001274C
 * Callers:
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800106D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180017594 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180022B44 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@Windows.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180039AE8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180044130 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Fou.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002630 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        wil::details **a1)
{
  wil::details *v2; // rcx
  wil::details *Event; // rbp
  unsigned int v4; // edi
  wil::details *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rdx

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  v4 = 0;
  if ( Event )
  {
    GetLastError();
    v5 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v5, v7);
      SetLastError(LastError);
    }
    *a1 = Event;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v2);
  }
  return v4;
}
