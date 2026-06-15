/*
 * XREFs of wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___ @ 0x180126EE4
 * Callers:
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128C20 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128E10 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___(
        __int64 a1)
{
  CVolumeUnit *v2; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v2 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)(*(_QWORD *)a1 + 80LL),
                          **(unsigned int **)(a1 + 8));
    CVolumeUnit::SetDB(v2, **(float **)(a1 + 16));
  }
}
