/*
 * XREFs of ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x180686B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1802E96F8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x180670E10 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1806714F4 (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 */

_OWORD *__fastcall CSnappedWindow::GetCorrectedFramePosition(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  char v5; // al
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)*(unsigned int *)(a1 + 40)) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v8) >= 0 )
    {
      v5 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(*(_DWORD *)(a1 + 40));
      *a2 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer((__int64)v7, &v8, a2, v5);
    }
  }
  return a2;
}
