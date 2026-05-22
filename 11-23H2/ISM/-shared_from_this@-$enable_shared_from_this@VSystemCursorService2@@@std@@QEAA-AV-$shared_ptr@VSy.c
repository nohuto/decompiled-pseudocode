/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18005BCB8
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180104E90 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1801052D4 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x1801035FC (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180106E34 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

__int64 __fastcall std::enable_shared_from_this<SystemCursorService2>::shared_from_this(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !(unsigned __int8)std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(a2, a1) )
    std::_Throw_bad_weak_ptr();
  return v2;
}
