/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x14006DE60
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x14005448C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x140051790 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_1400C1398);
  v3 = 0LL;
  if ( (int)v2 <= dword_1400C13C8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_1400C13C8 )
    {
      v3 = qword_1400C1380;
    }
    else
    {
      if ( (int)v2 >= dword_1400C13C8 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x14006DED6LL);
      }
      v3 = *(_QWORD *)(qword_1400C13C0 + 8 * v2);
    }
  }
  LeaveCriticalSection(&stru_1400C1398);
  return v3;
}
