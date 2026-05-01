/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18057E000
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 i; // rbx
  __int64 *result; // rax

  v3 = StartupAppMonitor::s_showNotificationMap;
  v6 = StartupAppMonitor::s_showNotificationMap;
  v7 = StartupAppMonitor::s_showNotificationMap;
  v8 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( (int)std::wstring::compare((_QWORD *)(v8 + 32), a3) >= 0 )
    {
      if ( *(_BYTE *)(v7 + 25) && (int)std::wstring::compare(a3, (_QWORD *)(v8 + 32)) < 0 )
        v7 = v8;
      v6 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  i = v3 + 8;
  if ( !*(_BYTE *)(v7 + 25) )
    i = v7;
LABEL_11:
  for ( i = *(_QWORD *)i; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
  {
    if ( (int)std::wstring::compare(a3, (_QWORD *)(i + 32)) < 0 )
    {
      v7 = i;
      goto LABEL_11;
    }
  }
  result = a2;
  a2[1] = v7;
  *a2 = v6;
  return result;
}
