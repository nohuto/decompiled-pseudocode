/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x1800563F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x180055CCC (-EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ.c)
 *     ?EnsureTrackingInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x180055DCC (-EnsureTrackingInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ.c)
 */

struct _FILETIME __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::EvaluateStateFlags(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  struct _FILETIME v2; // rbx
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

  CreativeFramework::Health::details::BaseScenarioEvents::EnsureTrackingInfoRead(this);
  CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(this);
  if ( !*((_BYTE *)this + 98) )
  {
    v2 = (struct _FILETIME)2LL;
    goto LABEL_17;
  }
  v2 = (struct _FILETIME)12LL;
  if ( *((_QWORD *)this + 3) )
    v2 = (struct _FILETIME)4LL;
  if ( *((_QWORD *)this + 2) )
  {
    if ( !*((_DWORD *)this + 20) )
      v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x20);
  }
  else
  {
    v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x10);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 && *((_BYTE *)this + 97) )
  {
    v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x40);
  }
  else
  {
    SystemTimeAsFileTime = v2;
    if ( !v3 )
      goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 96) )
  {
LABEL_13:
    v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x80);
    SystemTimeAsFileTime = v2;
    if ( !v3 )
      goto LABEL_17;
  }
  if ( !*((_DWORD *)this + 21) )
    v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x100);
LABEL_17:
  if ( !*((_BYTE *)this + 98) )
    return v2;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( *((_BYTE *)this + 97) || (v2.dwLowDateTime & 0x10) != 0 )
  {
    if ( (v2.dwLowDateTime & 0x130) == 0 )
      return (struct _FILETIME)(*(unsigned __int64 *)&v2 | 1);
    v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 2);
    if ( (v2.dwLowDateTime & 0x130) == 0 )
      return (struct _FILETIME)(*(unsigned __int64 *)&v2 | 1);
  }
  else
  {
    if ( *((_QWORD *)this + 6) )
    {
      if ( SLOBYTE(v2.dwLowDateTime) >= 0 )
      {
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
        v8 = *((_QWORD *)this + 4) + 600000000LL;
        v9 = *((_QWORD *)this + 6);
        if ( v9 >= v8 || v8 >= v7 )
        {
          if ( v9 >= *((_QWORD *)this + 15) )
            return (struct _FILETIME)(*(unsigned __int64 *)&v2 | 2);
          v10 = *((_QWORD *)this + 16);
          if ( !v10 )
            v10 = *((_QWORD *)this + 15) + 10000000LL * *((unsigned int *)this + 34);
          v11 = v10 + 6000000000LL;
          if ( *((_QWORD *)this + 14) <= v11 || v7 <= v11 )
            return (struct _FILETIME)(*(unsigned __int64 *)&v2 | 2);
          return v2;
        }
        v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 0x200);
      }
    }
    else
    {
      if ( *((_QWORD *)this + 3) + 600000000LL > v4 || *((_QWORD *)this + 4) + 600000000LL > v4 )
      {
        v2 = (struct _FILETIME)(*(unsigned __int64 *)&v2 | 2);
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
      return (struct _FILETIME)(*(unsigned __int64 *)&v2 | 1);
  }
  return v2;
}
