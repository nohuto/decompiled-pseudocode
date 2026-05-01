/*
 * XREFs of ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180458D88
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1804579F0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801BCA48 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x18045904C (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180459178 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1804595F0 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RetailDemoExperienceManager::_ParseExperienceArguments(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r14
  char *v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  DWORD pdwDefaultLayout; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-21h] BYREF
  char *v23[3]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v25[4]; // [rsp+68h] [rbp+1Fh] BYREF

  RetailDemoExperienceManager::_SetDefaults((RetailDemoExperienceManager *)a1);
  RetailDemoExperienceManager::_SplitString(v22, v2, 38LL);
  v3 = v22[0];
  v4 = v22[1];
  while ( v3 != v4 )
  {
    std::wstring::wstring(v25, v3);
    RetailDemoExperienceManager::_SplitString(v23, v25, 61LL);
    v5 = v23[0];
    LOBYTE(v6) = std::wstring::compare(v23[0], (char *)L"zBand");
    if ( v6 )
    {
      LOBYTE(v7) = std::wstring::compare(v5, (char *)L"topmost");
      if ( v7 )
      {
        LOBYTE(v9) = std::wstring::compare(v5, (char *)L"docked");
        if ( v9 )
        {
          LOBYTE(v11) = std::wstring::compare(v5, (char *)L"dockedSide");
          if ( v11 )
          {
            LOBYTE(v13) = std::wstring::compare(v5, (char *)L"adjustDesktop");
            if ( v13 )
            {
              LOBYTE(v15) = std::wstring::compare(v5, (char *)L"dockedWidth");
              if ( v15 )
              {
                LOBYTE(v17) = std::wstring::compare(v5, (char *)L"dockedMargin");
                if ( v17 )
                {
                  LOBYTE(v19) = std::wstring::compare(v5, (char *)L"dockedHeight");
                  if ( v19 )
                  {
                    LOBYTE(v20) = std::wstring::compare(v5, (char *)L"floatingRect");
                    if ( !v20 )
                      *(_OWORD *)(a1 + 364) = *(_OWORD *)RetailDemoExperienceManager::_ParseScreenRect(v24, v5 + 32);
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 360) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, 0LL, 0LL);
                  }
                }
                else
                {
                  LOBYTE(v18) = 1;
                  *(_DWORD *)(a1 + 356) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, v18, 0LL);
                }
              }
              else
              {
                LOBYTE(v16) = 1;
                *(_DWORD *)(a1 + 352) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, v16, 0LL);
              }
            }
            else
            {
              LOBYTE(v14) = std::wstring::compare(v5 + 32, (char *)L"true");
              *(_BYTE *)(a1 + 381) = v14 == 0;
            }
          }
          else
          {
            LOBYTE(v12) = std::wstring::compare(v5 + 32, (char *)L"right");
            *(_BYTE *)(a1 + 382) = v12 == 0;
            pdwDefaultLayout = 0;
            GetProcessDefaultLayout(&pdwDefaultLayout);
            if ( pdwDefaultLayout == 1 )
              *(_BYTE *)(a1 + 382) = *(_BYTE *)(a1 + 382) == 0;
          }
        }
        else
        {
          LOBYTE(v10) = std::wstring::compare(v5 + 32, (char *)L"true");
          *(_BYTE *)(a1 + 380) = v10 == 0;
        }
      }
      else
      {
        LOBYTE(v8) = std::wstring::compare(v5 + 32, (char *)L"true");
        *(_BYTE *)(a1 + 348) = v8 == 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 344) = _o__wtol();
    }
    std::vector<std::wstring>::_Tidy((__int64)v23);
    std::wstring::_Tidy_deallocate((__int64)v25);
    v3 += 32LL;
  }
  std::vector<std::wstring>::_Tidy((__int64)v22);
}
