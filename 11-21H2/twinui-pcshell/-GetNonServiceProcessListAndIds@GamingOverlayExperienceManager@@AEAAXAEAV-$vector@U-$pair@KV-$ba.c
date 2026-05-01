/*
 * XREFs of ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x18033146C
 * Callers:
 *     ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x180331C00 (-GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@PEAUHS.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180327F54 (--$_Emplace_reallocate@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 *     ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180331A54 (-GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV-$basic_string@GU-$ch.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x180334930 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18033C470 (-_Reallocate_exactly@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?_Tidy@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18033C6E8 (-_Tidy@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=3
unsigned int __fastcall GamingOverlayExperienceManager::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  const char *v5; // r9
  __int64 v7; // r14
  DWORD v8; // esi
  __int64 v9; // rdx
  DWORD v10; // r13d
  __int64 v11; // rbx
  DWORD v12; // eax
  unsigned int v13; // r15d
  _QWORD *i; // rax
  __int128 *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v19; // [rsp+28h] [rbp-1120h] BYREF
  __int64 v20; // [rsp+38h] [rbp-1110h]
  DWORD cbNeeded; // [rsp+40h] [rbp-1108h] BYREF
  DWORD v22; // [rsp+44h] [rbp-1104h]
  _QWORD *v23; // [rsp+48h] [rbp-1100h]
  __int128 v24; // [rsp+50h] [rbp-10F8h] BYREF
  __int128 v25; // [rsp+60h] [rbp-10E8h]
  DWORD v26; // [rsp+70h] [rbp-10D8h] BYREF
  __int128 v27; // [rsp+78h] [rbp-10D0h] BYREF
  __int128 v28; // [rsp+88h] [rbp-10C0h]
  _QWORD v29[14]; // [rsp+A0h] [rbp-10A8h] BYREF
  DWORD idProcess[1024]; // [rsp+110h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1148h] [rbp+0h]

  v3 = a3;
  if ( !K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
    return wil::details::in1diag3::Log_GetLastError(
             retaddr,
             (void *)0xAD6,
             (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
             v5);
  try
  {
    v29[0] = L"svchost.exe";
    v29[1] = L"explorer.exe";
    v29[2] = L"runtimebroker.exe";
    v29[3] = L"services.exe";
    v29[4] = L"sihost.exe";
    v29[5] = L"dllhost.exe";
    v29[6] = L"ShellExperienceHost.exe";
    v29[7] = L"StartMenuExperienceHost.exe";
    v29[8] = L"backgroundTaskHost.exe";
    v29[9] = L"taskhostw.exe";
    v29[10] = L"TabExperienceHost.exe";
    v29[11] = L"gamebar.exe";
    v29[12] = L"GameBarPresenceWriter.exe";
    v19 = 0LL;
    v7 = 0LL;
    v20 = 0LL;
    v8 = cbNeeded >> 2;
    v9 = cbNeeded >> 2;
    if ( cbNeeded >> 2 )
    {
      std::vector<std::pair<unsigned long,std::wstring>>::_Reallocate_exactly(&v19, v8);
      v7 = v20;
    }
    v10 = 0;
    v11 = *((_QWORD *)&v19 + 1);
    while ( v10 < v8 )
    {
      *(_QWORD *)&v25 = 0LL;
      *((_QWORD *)&v25 + 1) = 7LL;
      LOWORD(v24) = 0;
      v12 = idProcess[v10];
      v22 = v12;
      if ( v12 != v3 && (int)GamingOverlayExperienceManager::GetPathProcessNameFromProcessId(0LL, v12, &v24) >= 0 )
      {
        v13 = 0;
        for ( i = v29; ; i = v23 + 1 )
        {
          v23 = i;
          if ( v13 >= 0xD )
            break;
          v15 = &v24;
          if ( *((_QWORD *)&v25 + 1) >= 8uLL )
            v15 = (__int128 *)v24;
          if ( !(unsigned int)_o__wcsicmp(v15, *i) )
            goto LABEL_19;
          ++v13;
        }
        v26 = v22;
        v16 = v24;
        v27 = v24;
        v17 = v25;
        v28 = v25;
        *(_QWORD *)&v25 = 0LL;
        *((_QWORD *)&v25 + 1) = 7LL;
        LOWORD(v24) = 0;
        if ( v11 == v7 )
        {
          std::vector<std::pair<unsigned long,std::wstring>>::_Emplace_reallocate<std::pair<unsigned long,std::wstring>>(
            (__int64 *)&v19,
            v11,
            (__int64)&v26);
          v7 = v20;
          v11 = *((_QWORD *)&v19 + 1);
        }
        else
        {
          *(_DWORD *)v11 = v22;
          *(_OWORD *)(v11 + 8) = v16;
          *(_OWORD *)(v11 + 24) = v17;
          *(_QWORD *)&v28 = 0LL;
          *((_QWORD *)&v28 + 1) = 7LL;
          LOWORD(v27) = 0;
          v11 += 40LL;
          *((_QWORD *)&v19 + 1) = v11;
        }
        std::wstring::_Tidy_deallocate((__int64)&v27);
LABEL_19:
        v3 = a3;
      }
      std::wstring::_Tidy_deallocate((__int64)&v24);
      ++v10;
    }
    if ( (__int128 *)a2 != &v19 )
    {
      std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(a2, v9);
      *(_QWORD *)a2 = v19;
      *(_QWORD *)(a2 + 8) = v11;
      *(_QWORD *)(a2 + 16) = v7;
      v19 = 0LL;
      v20 = 0LL;
    }
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xB16,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x8007000ELL);
  }
  return std::vector<std::pair<unsigned long,std::wstring>>::_Tidy(&v19, v9);
}
