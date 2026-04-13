/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18005BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800630C4 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180063164 (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::EvaluateStateFlags(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 250) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  if ( *((_BYTE *)this + 98) )
  {
    v2 = 12LL;
    if ( *((_QWORD *)this + 3) )
      v2 = 4LL;
    if ( *((_QWORD *)this + 2) )
    {
      if ( !*((_DWORD *)this + 20) )
        v2 |= 0x20uLL;
    }
    else
    {
      v2 |= 0x10uLL;
    }
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      if ( *((_BYTE *)this + 97) )
        v2 |= 0x40uLL;
      if ( *((_BYTE *)this + 96) )
        goto LABEL_50;
    }
    v2 |= 0x80uLL;
    if ( v3 )
    {
LABEL_50:
      if ( !*((_DWORD *)this + 21) )
        v2 |= 0x100uLL;
    }
  }
  else
  {
    v2 = 2LL;
  }
  if ( *((_BYTE *)this + 98) )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( *((_BYTE *)this + 97) || (v2 & 0x10) != 0 )
    {
      if ( (v2 & 0x130) == 0 )
        return v2 | 1;
      v2 |= 2uLL;
      if ( (v2 & 0x130) == 0 )
        return v2 | 1;
    }
    else
    {
      if ( *((_QWORD *)this + 6) )
      {
        if ( (v2 & 0x80u) == 0LL )
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
          v8 = *((_QWORD *)this + 4) + 600000000LL;
          v9 = *((_QWORD *)this + 6);
          if ( v9 >= v8 || v8 >= v7 )
          {
            if ( v9 >= *((_QWORD *)this + 15) )
              return v2 | 2;
            v10 = *((_QWORD *)this + 16);
            if ( !v10 )
              v10 = *((_QWORD *)this + 15) + 10000000LL * *((unsigned int *)this + 34);
            v11 = v10 + 6000000000LL;
            if ( *((_QWORD *)this + 14) <= v11 || v7 <= v11 )
              return v2 | 2;
            return v2;
          }
          v2 |= 0x200uLL;
        }
      }
      else
      {
        if ( *((_QWORD *)this + 3) + 600000000LL > v4 || *((_QWORD *)this + 4) + 600000000LL > v4 )
        {
          v2 |= 2uLL;
          v5 = 0;
        }
        else
        {
          v5 = 1;
        }
        if ( !v5 )
          return v2;
      }
      v6 = *((_QWORD *)this + 19);
      if ( v6 && !*((_WORD *)this + 80) && v4 >= v6 + 36000000000LL )
        return v2 | 1;
    }
  }
  return v2;
}
