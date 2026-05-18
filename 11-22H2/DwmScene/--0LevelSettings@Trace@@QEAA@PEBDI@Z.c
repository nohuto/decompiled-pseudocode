/*
 * XREFs of ??0LevelSettings@Trace@@QEAA@PEBDI@Z @ 0x18001D114
 * Callers:
 *     std::call_once__lambda_c15493341c6340c7048e00ce76563f22___ @ 0x18001CDE0 (std--call_once__lambda_c15493341c6340c7048e00ce76563f22___.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Try_emplace@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18001CD0C (--$_Try_emplace@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$$V@-$map@V-$basic.c)
 *     ?GetAreaList@Trace@@YAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@@std@@XZ @ 0x18001D3E4 (-GetAreaList@Trace@@YAAEAV-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PE.c)
 *     ?GetAreaListCriticalLock@Trace@@YAAEAVmutex@std@@XZ @ 0x18001D470 (-GetAreaListCriticalLock@Trace@@YAAEAVmutex@std@@XZ.c)
 *     ?ResetLevels@LevelSettings@Trace@@QEAAXXZ @ 0x18001DB24 (-ResetLevels@LevelSettings@Trace@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
Trace::LevelSettings *__fastcall Trace::LevelSettings::LevelSettings(Trace::LevelSettings *this, const char *a2)
{
  unsigned int v4; // r8d
  Trace *v5; // rcx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 v8; // rcx
  __int64 *AreaList; // rdi
  std::_Mutex_base *AreaListCriticalLock; // [rsp+20h] [rbp-58h]
  _BYTE v12[16]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-40h] BYREF

  *((_QWORD *)this + 2) = a2;
  Trace::LevelSettings::ResetLevels(this);
  v5 = (Trace *)(HIBYTE(v4) & 0xF);
  if ( (v4 & 0xF000000) == 0 )
    v5 = (Trace *)*(unsigned int *)this;
  *(_DWORD *)this = (_DWORD)v5;
  v6 = HIWORD(v4) & 0xF;
  if ( !v6 )
    v6 = *((_DWORD *)this + 1);
  if ( v6 <= (unsigned int)v5 )
    v5 = (Trace *)v6;
  *((_DWORD *)this + 1) = (_DWORD)v5;
  v7 = (v4 >> 8) & 0xF;
  if ( !v7 )
    v7 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v7;
  *((_DWORD *)this + 3) = 6;
  AreaListCriticalLock = Trace::GetAreaListCriticalLock(v5);
  std::_Mutex_base::lock(AreaListCriticalLock);
  AreaList = (__int64 *)Trace::GetAreaList(v8);
  std::string::string(v13, (__int64)a2);
  *(_QWORD *)(*(_QWORD *)std::map<std::string,Trace::LevelSettings *>::_Try_emplace<std::string,>(
                           AreaList,
                           (__int64)v12,
                           v13)
            + 64LL) = this;
  std::string::_Tidy_deallocate((__int64)v13);
  _Mtx_unlock(AreaListCriticalLock);
  return this;
}
