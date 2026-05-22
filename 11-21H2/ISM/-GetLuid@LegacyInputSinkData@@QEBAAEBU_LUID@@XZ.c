/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18004E090
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800E7880 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180124160 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800024AC (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  void *WeakInputSinkHandle; // rax
  bool v3; // zf
  const struct _LUID *result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v5 = 0LL;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(this);
    NtQueryCompositionInputSinkLuid(WeakInputSinkHandle, &v5);
    v3 = *((_BYTE *)this + 36) == 0;
    *(_QWORD *)((char *)this + 28) = v5;
    if ( v3 )
      *((_BYTE *)this + 36) = 1;
  }
  result = (const struct _LUID *)((char *)this + 28);
  if ( !*((_BYTE *)this + 36) )
    std::_Throw_bad_optional_access();
  return result;
}
