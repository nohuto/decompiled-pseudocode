/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1800456CC
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x18003DAE0 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 * Callees:
 *     ??1?$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAA@XZ @ 0x180045670 (--1-$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAA@XZ.c)
 *     ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x1800456A0 (--A-$CSimpleArray@PEAUHINSTANCE__@@V-$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAA.c)
 *     ?Lock@?$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ @ 0x180045748 (-Lock@-$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v3; // rbx
  _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v5 = &stru_180061748;
  if ( (int)ATL::CComCritSecLock<ATL::CComCriticalSection>::Lock(&v5) < 0 || a2 > (int)qword_180061778 || a2 < 0 )
  {
    ATL::CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>((__int64)&v5);
    return 0LL;
  }
  else
  {
    if ( a2 == (_DWORD)qword_180061778 )
      v3 = qword_180061730;
    else
      v3 = *(_QWORD *)ATL::CSimpleArray<HINSTANCE__ *,ATL::CSimpleArrayEqualHelper<HINSTANCE__ *>>::operator[](
                        (__int64)&qword_180061770,
                        a2);
    ATL::CComCritSecLock<ATL::CComCriticalSection>::~CComCritSecLock<ATL::CComCriticalSection>((__int64)&v5);
    return v3;
  }
}
