/*
 * XREFs of ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x180283994
 * Callers:
 *     ?ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x180731D00 (-ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV-$sh.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1802828E8 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _DWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  int v11; // [rsp+3C8h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+3D0h] [rbp+18h]
  __int64 *v13; // [rsp+3D8h] [rbp+20h]

  v13 = a4;
  v12 = a3;
  v8 = operator new(0x35BuLL);
  v11 = 0;
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__InitCoro_2(
    (__int64)&v11,
    v8,
    a2,
    a3,
    a4,
    a1);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  winrt::hstring::~hstring((void **)a4);
  return a2;
}
