/*
 * XREFs of ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18063D914
 * Callers:
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x180640828 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801F0194 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18063D4C0 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@-$_Tree_tem.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18063DDA8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_18063DDA8.c)
 *     ??4STARTUPAPPINFO@@QEAAAEAU0@$$QEAU0@@Z @ 0x18063E418 (--4STARTUPAPPINFO@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]

  v4 = StartupAppMonitor::s_showNotificationMap;
  v17 = 0;
  v8 = StartupAppMonitor::s_showNotificationMap;
  v9 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  v16 = v9;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v16 = v9;
    LOBYTE(v10) = std::wstring::compare((char *)(v9 + 32), a3);
    if ( v10 >= 0 )
    {
      v8 = v9;
      v17 = 1;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v17 = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  if ( *(_BYTE *)(v8 + 25) || (LOBYTE(v11) = std::wstring::compare(a3, (char *)(v8 + 32)), v11 < 0) )
  {
    if ( qword_18098F188 == 0x108421084210842LL )
      std::_Throw_tree_length_error();
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(
            v15,
            (__int64)&StartupAppMonitor::s_showNotificationMap,
            v4,
            (__int64)a3,
            a4);
    v13 = v12[1];
    v12[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(v15);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)&StartupAppMonitor::s_showNotificationMap,
                      (__int64)&v16,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    STARTUPAPPINFO::operator=(v8 + 64, a4);
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
