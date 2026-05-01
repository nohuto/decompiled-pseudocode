/*
 * XREFs of ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D877C
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x1803D2F0C (--$_Emplace_reallocate@U-$pair@KVString@Internal@Windows@@@std@@@-$vector@U-$pair@KVString@Inter.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAX_K@Z @ 0x1803DCCF4 (-_Reallocate_exactly@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVSt.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x1803DCEB4 (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 */

// Hidden C++ exception states: #wind=3
unsigned int __fastcall BroadcastDVRComponent::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2)
{
  const char *v4; // r9
  __int64 v6; // rdi
  DWORD v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rbx
  DWORD v10; // r12d
  PCWSTR StringRawBuffer; // rax
  HSTRING v12; // rax
  HSTRING v13; // rcx
  HSTRING string; // [rsp+20h] [rbp-1078h] BYREF
  __int128 v15; // [rsp+28h] [rbp-1070h] BYREF
  __int64 v16; // [rsp+38h] [rbp-1060h]
  DWORD cbNeeded; // [rsp+40h] [rbp-1058h] BYREF
  DWORD v18; // [rsp+48h] [rbp-1050h] BYREF
  HSTRING v19; // [rsp+50h] [rbp-1048h]
  DWORD idProcess[1024]; // [rsp+60h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1098h] [rbp+0h]

  if ( !K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
    return wil::details::in1diag3::Log_GetLastError(
             retaddr,
             (void *)0x853,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
             v4);
  try
  {
    v15 = 0LL;
    v6 = 0LL;
    v16 = 0LL;
    v7 = cbNeeded >> 2;
    if ( cbNeeded >> 2 )
    {
      std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocate_exactly(&v15, v7);
      v6 = v16;
    }
    v8 = 0LL;
    v9 = *((_QWORD *)&v15 + 1);
    while ( (unsigned int)v8 < v7 )
    {
      string = 0LL;
      v10 = idProcess[v8];
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, HSTRING *))(**(_QWORD **)(a1 + 256) + 104LL))(
             *(_QWORD *)(a1 + 256),
             v10,
             &string) >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( (unsigned int)_o__wcsicmp(StringRawBuffer, L"svchost.exe") )
        {
          v18 = v10;
          v12 = string;
          v19 = string;
          string = 0LL;
          if ( v9 == v6 )
          {
            std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Emplace_reallocate<std::pair<unsigned long,Windows::Internal::String>>(
              (__int64 *)&v15,
              v9,
              (__int64)&v18);
            v6 = v16;
            v9 = *((_QWORD *)&v15 + 1);
            v13 = v19;
          }
          else
          {
            *(_DWORD *)v9 = v10;
            *(_QWORD *)(v9 + 8) = v12;
            v13 = 0LL;
            v9 += 16LL;
            *((_QWORD *)&v15 + 1) = v9;
          }
          if ( v13 )
            WindowsDeleteString(v13);
        }
      }
      if ( string )
        WindowsDeleteString(string);
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__int128 *)a2 != &v15 )
    {
      std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(a2);
      *(_QWORD *)a2 = v15;
      *(_QWORD *)(a2 + 8) = v9;
      *(_QWORD *)(a2 + 16) = v6;
      v15 = 0LL;
      v16 = 0LL;
    }
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x873,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x8007000ELL);
  }
  return std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v15);
}
