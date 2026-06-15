/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x14007A9B0
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400560FC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14005258C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A980 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  LPCRITICAL_SECTION v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v5 = &stru_1400CF468;
  EnterCriticalSection(&stru_1400CF468);
  v6 = 1;
  if ( (int)v2 > dword_1400CF498 || (int)v2 < 0 )
  {
    ATL::CCritSecLock::~CCritSecLock(&v5);
    return 0LL;
  }
  else
  {
    if ( (_DWORD)v2 == dword_1400CF498 )
    {
      v3 = qword_1400CF450;
      ATL::CCritSecLock::~CCritSecLock(&v5);
    }
    else
    {
      if ( (int)v2 >= dword_1400CF498 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        __debugbreak();
      }
      v3 = *(_QWORD *)(qword_1400CF490 + 8 * v2);
      LeaveCriticalSection(&stru_1400CF468);
    }
    return v3;
  }
}
