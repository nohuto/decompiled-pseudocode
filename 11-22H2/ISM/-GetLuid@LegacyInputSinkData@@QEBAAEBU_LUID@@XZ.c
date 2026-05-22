/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x1800716FC
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180070C3C (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180071148 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x18010F190 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801C64E4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800717D4 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  void *WeakInputSinkHandle; // rax
  __int64 v3; // r8
  bool v4; // zf
  const struct _LUID *result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v6 = 0LL;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(this);
    NtQueryCompositionInputSinkLuid(WeakInputSinkHandle, &v6, v3);
    v4 = *((_BYTE *)this + 36) == 0;
    *(_QWORD *)((char *)this + 28) = v6;
    if ( v4 )
      *((_BYTE *)this + 36) = 1;
  }
  result = (const struct _LUID *)((char *)this + 28);
  if ( !*((_BYTE *)this + 36) )
    std::_Throw_bad_optional_access();
  return result;
}
