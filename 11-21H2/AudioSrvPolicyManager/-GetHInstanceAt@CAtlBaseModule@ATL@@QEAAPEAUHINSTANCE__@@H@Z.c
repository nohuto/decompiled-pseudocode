/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180041034
 * Callers:
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001D210 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int16 *__fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int16 *v3; // rbx

  v2 = a2;
  EnterCriticalSection(&stru_18005B0F8);
  if ( (int)v2 > dword_18005B128 || (int)v2 < 0 )
  {
    LeaveCriticalSection(&stru_18005B0F8);
    return 0LL;
  }
  else
  {
    if ( (_DWORD)v2 == dword_18005B128 )
    {
      v3 = off_18005B0E0;
    }
    else
    {
      if ( (int)v2 >= dword_18005B128 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x1800410B1LL);
      }
      v3 = *(__int16 **)(qword_18005B120 + 8 * v2);
    }
    LeaveCriticalSection(&stru_18005B0F8);
    return v3;
  }
}
