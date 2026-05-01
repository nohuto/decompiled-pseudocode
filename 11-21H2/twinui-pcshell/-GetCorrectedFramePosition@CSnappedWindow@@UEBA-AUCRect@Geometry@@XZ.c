/*
 * XREFs of ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x1805AB400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x1805A2900 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1805A3814 (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A71E8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

_OWORD *__fastcall CSnappedWindow::GetCorrectedFramePosition(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)*(unsigned int *)(a1 + 40), v4, v5, v6) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 88LL))(v7, &v14) >= 0 )
    {
      v11 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(*(_DWORD *)(a1 + 40), v8, v9, v10);
      *a2 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer((__int64)v13, &v14, a2, v11);
    }
  }
  return a2;
}
