/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800D5228
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5364 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D6588 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D6E58 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D7168 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180058D40 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006E450 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@@Z @ 0x1800D4C40 (--$_Buynode@U-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@@std@@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@@Z @ 0x1800D4F7C (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800D4F7C.c)
 */

__int64 __fastcall std::map<std::wstring,std::wstring>::operator[](__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-49h] BYREF
  void *v10[3]; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-29h]
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v13[4]; // [rsp+80h] [rbp+7h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *a1;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::less<std::wstring>::operator()((__int64)a1, (_QWORD *)(v5 + 32), a2) )
      {
        v5 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v4 = v5;
        v5 = *(_QWORD *)v5;
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
    v6 = *a1;
  }
  if ( v4 == v6 || (unsigned __int8)std::less<std::wstring>::operator()((__int64)a1, a2, (_QWORD *)(v4 + 32)) )
  {
    v11 = 7LL;
    v10[2] = 0LL;
    LOWORD(v10[0]) = 0;
    v12[3] = 7LL;
    v12[2] = 0LL;
    LOWORD(v12[0]) = 0;
    std::wstring::_Assign_rv(v12, a2);
    v13[3] = 7LL;
    v13[2] = 0LL;
    LOWORD(v13[0]) = 0;
    std::wstring::_Assign_rv(v13, v10);
    v7 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
           a1,
           v12);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_hint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      (__int64 **)a1,
      &v9,
      v4,
      v7 + 4,
      v7);
    v4 = v9;
    std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>((__int64)v12);
    if ( v11 >= 8 )
      operator delete(v10[0]);
  }
  return v4 + 64;
}
