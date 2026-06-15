/*
 * XREFs of ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x180005C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
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
                            (char *)this + 80,
                            (unsigned int)i);
      a3[i] = CVolumeUnit::GetWiper(v6);
    }
  }
}
