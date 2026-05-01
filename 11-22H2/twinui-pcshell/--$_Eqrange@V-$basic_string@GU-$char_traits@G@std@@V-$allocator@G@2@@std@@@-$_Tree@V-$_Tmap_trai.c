/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18063D840
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
        __int64 a1,
        __int64 *a2,
        char *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 *result; // rax

  v3 = StartupAppMonitor::s_showNotificationMap;
  v6 = StartupAppMonitor::s_showNotificationMap;
  v7 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  v8 = v7;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    LOBYTE(v9) = std::wstring::compare((char *)(v8 + 32), a3);
    if ( v9 >= 0 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        LOBYTE(v10) = std::wstring::compare(a3, (char *)(v8 + 32));
        if ( v10 < 0 )
          v6 = v8;
      }
      v3 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( !*(_BYTE *)(v6 + 25) )
    v7 = *(_QWORD *)v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    LOBYTE(v11) = std::wstring::compare(a3, (char *)(v7 + 32));
    if ( v11 >= 0 )
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v6 = v7;
      v7 = *(_QWORD *)v7;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
