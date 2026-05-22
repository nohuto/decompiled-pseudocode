/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180115954
 * Callers:
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x18011213C (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 *     ?CustomCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x1801140A0 (-CustomCursor@SystemCursorService2@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *((_DWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1);
    if ( v2 == v1 )
    {
      LOBYTE(v1) = 1;
      return v1;
    }
  }
  return v1;
}
