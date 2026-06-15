/*
 * XREFs of ?Pause@CAudioPump@@UEAAJXZ @ 0x14000A270
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140003004 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CAudioPump::Pause(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  char v3; // bp
  void *v4; // rdx
  wil::details **v5; // rsi
  void *v7; // rdx
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 1, 2) == 2 )
  {
    if ( *((_BYTE *)this + 4656)
      && CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
    {
      v5 = (wil::details **)((char *)this + 392);
      if ( *((_QWORD *)this + 49) )
      {
        v3 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v5 = (wil::details **)((char *)this + 392);
    }
    *((_DWORD *)this + 79) = 40;
LABEL_6:
    if ( v1 )
      LeaveCriticalSection(v1);
    if ( v3 )
    {
      wil::details::ResetEvent(*((wil::details **)this + 51), v4);
      wil::details::SetEvent(*v5, v7);
      Handles[0] = *((HANDLE *)this + 32);
      Handles[1] = *((HANDLE *)this + 51);
      WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    }
    return 0LL;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
