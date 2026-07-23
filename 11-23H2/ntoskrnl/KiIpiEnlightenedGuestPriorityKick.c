/*
 * XREFs of KiIpiEnlightenedGuestPriorityKick @ 0x140254700
 * Callers:
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 */

_UNKNOWN **__fastcall KiIpiEnlightenedGuestPriorityKick(__int64 a1)
{
  _UNKNOWN **result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+32h] [rbp-16h]
  __int16 v9; // [rsp+36h] [rbp-12h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v9 = 0;
  v11 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    result = (_UNKNOWN **)KeIsEmptyAffinityEx(a1);
    if ( !(_DWORD)result )
    {
      v6[1] = *(_QWORD *)(a1 + 8);
      v7 = 0;
      v6[0] = a1;
      while ( 1 )
      {
        result = (_UNKNOWN **)KeEnumerateNextProcessor(&v11, v6);
        if ( (_DWORD)result )
          break;
        v5 = KiProcessorBlock[v11];
        if ( (struct _KPRCB *)v5 != CurrentPrcb )
          KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v5, (unsigned int)KiVpThreadSystemWorkPriority, v4);
      }
    }
  }
  return result;
}
