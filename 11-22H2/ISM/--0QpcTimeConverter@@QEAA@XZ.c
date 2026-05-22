/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x18004B4FC
 * Callers:
 *     _dynamic_initializer_for__GameControllerRawInputProvider::s_qpcTime__ @ 0x1800020B0 (_dynamic_initializer_for__GameControllerRawInputProvider--s_qpcTime__.c)
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18004AFB0 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180178490 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 *     ??0ShellGesturesRecognizer@@QEAA@XZ @ 0x18017CB24 (--0ShellGesturesRecognizer@@QEAA@XZ.c)
 *     ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801D5A0C (--0EdgyLegacyProcessor@@QEAA@XZ.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801DAFC0 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  for ( *(_QWORD *)this = v3; v3 > 0x10C6F7A0B5EDLL; *((_QWORD *)this + 1) = v5 )
  {
    if ( *((_QWORD *)this + 1) < 0xAuLL )
      break;
    v3 /= 0xAuLL;
    v5 = *((_QWORD *)this + 1) / 0xAuLL;
    *(_QWORD *)this = v3;
  }
  return this;
}
