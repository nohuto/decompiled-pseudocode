/*
 * XREFs of ?EventHandlerTimer@CAudioPump@@AEAAXPEA_K@Z @ 0x140022CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::EventHandlerTimer(CAudioPump *this, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  char v5; // al
  LARGE_INTEGER v6; // rax
  void *v7; // rcx
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 580);
  if ( !*((_QWORD *)this + 36) )
  {
    *((_BYTE *)this + 248) = 0;
    *((_QWORD *)this + 44) = v2;
    return;
  }
  v4 = *((_QWORD *)this + 35);
  if ( v4 > v2 )
  {
    v6.QuadPart = v2 - v4;
    v7 = (void *)*((_QWORD *)this + 34);
    DueTime = v6;
    SetWaitableTimer(v7, &DueTime, (int)((double)*((int *)this + 22) * 1.5 / 10000.0), 0LL, 0LL, 0);
    goto LABEL_9;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
  {
LABEL_9:
    *((_BYTE *)this + 248) = 1;
    return;
  }
  v5 = *((_BYTE *)this + 4657);
  *((_BYTE *)this + 4728) = 1;
  if ( v5 )
    ++*((_QWORD *)this + 588);
  else
    ++*((_QWORD *)this + 589);
  *((_BYTE *)this + 248) = 0;
  if ( v5 )
    *((_BYTE *)this + 4657) = 0;
}
