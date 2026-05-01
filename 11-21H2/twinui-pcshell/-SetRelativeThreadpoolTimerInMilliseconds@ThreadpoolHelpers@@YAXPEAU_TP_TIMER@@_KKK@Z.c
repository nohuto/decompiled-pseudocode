/*
 * XREFs of ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x18034F7C0
 * Callers:
 *     ?TrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x1803A46B0 (-TrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXV-$function@$$A6AXXZ@std.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        ThreadpoolHelpers *this,
        struct _TP_TIMER *a2,
        DWORD a3)
{
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  pftDueTime = (struct _FILETIME)(-10000LL * (_QWORD)a2);
  SetThreadpoolTimer(this, &pftDueTime, a3, 0);
}
