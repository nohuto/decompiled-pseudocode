/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18015825C
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800DF24C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0F78 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  LPCRITICAL_SECTION v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v5 = &stru_1801CFB18;
  EnterCriticalSection(&stru_1801CFB18);
  v6 = 1;
  if ( (int)v2 > dword_1801CFB48 || (int)v2 < 0 )
  {
    ATL::CCritSecLock::~CCritSecLock(&v5);
    return 0LL;
  }
  else
  {
    if ( (_DWORD)v2 == dword_1801CFB48 )
    {
      v3 = qword_1801CFB00;
      ATL::CCritSecLock::~CCritSecLock(&v5);
    }
    else
    {
      if ( (int)v2 >= dword_1801CFB48 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        __debugbreak();
      }
      v3 = *(_QWORD *)(qword_1801CFB40 + 8 * v2);
      LeaveCriticalSection(&stru_1801CFB18);
    }
    return v3;
  }
}
