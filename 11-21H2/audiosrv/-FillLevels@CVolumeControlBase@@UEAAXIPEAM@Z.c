/*
 * XREFs of ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x1800CBC40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001156C (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rdi
  CVolumeUnit *v6; // rax

  if ( a2 == *((_DWORD *)this + 29) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            (unsigned int)i);
      a3[i] = CVolumeUnit::GetWiper(v6);
    }
  }
}
