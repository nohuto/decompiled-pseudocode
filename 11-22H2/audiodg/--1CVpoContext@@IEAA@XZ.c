/*
 * XREFs of ??1CVpoContext@@IEAA@XZ @ 0x140066250
 * Callers:
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400661AC (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400661F8 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140066674 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140066BD0 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 */

void __fastcall CVpoContext::~CVpoContext(CVpoContext *this)
{
  __int64 v2; // rcx
  unsigned int Key; // eax
  __int64 v4; // rcx

  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          v2,
          (char *)this + 88);
  if ( Key != -1 )
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
      v4,
      Key);
  LeaveCriticalSection(&CVpoContext::s_csMapVpoContext);
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}
