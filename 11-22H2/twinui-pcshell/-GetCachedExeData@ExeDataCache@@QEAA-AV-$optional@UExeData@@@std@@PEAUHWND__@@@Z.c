/*
 * XREFs of ?GetCachedExeData@ExeDataCache@@QEAA?AV?$optional@UExeData@@@std@@PEAUHWND__@@@Z @ 0x18062584C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1806249D8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x180624CC0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ExeData *__fastcall ExeDataCache::GetCachedExeData(PSRWLOCK SRWLock, ExeData *this, unsigned __int64 a3)
{
  _BYTE v7[16]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  AcquireSRWLockShared(SRWLock);
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    (__int64 *)&SRWLock[1],
    (__int64)v7,
    &v9);
  if ( *(_BYTE *)(v8 + 25) || a3 < *(_QWORD *)(v8 + 32) || (PVOID)v8 == SRWLock[1].Ptr )
  {
    *((_BYTE *)this + 72) = 0;
  }
  else
  {
    ExeData::ExeData(this, (const struct ExeData *)(v8 + 40));
    *((_BYTE *)this + 72) = 1;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return this;
}
