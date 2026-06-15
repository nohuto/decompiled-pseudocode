/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x180019C30
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v7; // ebx
  float *v8; // rax

  v7 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_10;
  if ( a2 == -1 )
    a2 = *((_DWORD *)this + 28);
  if ( a2 >= *((_DWORD *)this + 29) )
  {
    v7 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeRange", 0x106u, v7);
    return v7;
  }
  v8 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, a2);
  v7 = 0;
  *a3 = v8[2];
  *a4 = v8[3];
  *a5 = v8[4];
  return v7;
}
