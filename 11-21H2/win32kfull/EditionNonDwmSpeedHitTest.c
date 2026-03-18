/*
 * XREFs of EditionNonDwmSpeedHitTest @ 0x1C010AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010B030 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

_DWORD *__fastcall EditionNonDwmSpeedHitTest(_DWORD *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3, _DWORD *a4)
{
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  struct tagWND *v10; // rax

  *a4 = 0;
  v7 = TopLevelSpeedHitTest(grpdeskRitInput, a2, a3);
  if ( v7 && (v10 = ClassicChildTreeSpeedHitTest(v7, *a2)) != 0LL )
  {
    *a4 = 1;
    v8 = (__int64)v10;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  }
  INPUTDEST_FROM_PWND(a1, v8);
  return a1;
}
