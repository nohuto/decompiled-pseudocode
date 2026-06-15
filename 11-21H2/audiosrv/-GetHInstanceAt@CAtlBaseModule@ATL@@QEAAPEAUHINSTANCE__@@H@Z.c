/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18015142C
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800D691C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_1801C2658);
  v3 = 0LL;
  if ( (int)v2 <= dword_1801C2688 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_1801C2688 )
    {
      v3 = qword_1801C2640;
    }
    else
    {
      if ( (int)v2 >= dword_1801C2688 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x1801514A2LL);
      }
      v3 = *(_QWORD *)(qword_1801C2680 + 8 * v2);
    }
  }
  LeaveCriticalSection(&stru_1801C2658);
  return v3;
}
