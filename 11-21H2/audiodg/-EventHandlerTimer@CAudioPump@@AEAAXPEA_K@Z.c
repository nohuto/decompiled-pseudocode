/*
 * XREFs of ?EventHandlerTimer@CAudioPump@@AEAAXPEA_K@Z @ 0x1400032C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::EventHandlerTimer(CAudioPump *this, unsigned __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  LARGE_INTEGER v5; // rax
  void *v6; // rcx
  char v7; // al
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 36) )
  {
    *((_QWORD *)this + 44) = *((_QWORD *)this + 579);
    *((_BYTE *)this + 248) = 0;
    return;
  }
  v3 = *((_QWORD *)this + 35);
  v4 = *((_QWORD *)this + 579);
  if ( v3 > v4 )
  {
    v5.QuadPart = v4 - v3;
    v6 = (void *)*((_QWORD *)this + 34);
    DueTime = v5;
    SetWaitableTimer(v6, &DueTime, (int)((double)*((int *)this + 22) * 1.5 / 10000.0), 0LL, 0LL, 0);
LABEL_4:
    *((_BYTE *)this + 248) = 1;
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
    goto LABEL_4;
  v7 = *((_BYTE *)this + 4649);
  *((_BYTE *)this + 4720) = 1;
  if ( v7 )
    ++*((_QWORD *)this + 587);
  else
    ++*((_QWORD *)this + 588);
  *((_BYTE *)this + 248) = 0;
  if ( v7 )
    *((_BYTE *)this + 4649) = 0;
}
