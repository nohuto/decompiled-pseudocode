/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800379C8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x1800358A0 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180037B90 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800D8CDC (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int128 v7; // [rsp+20h] [rbp-18h]
  struct CSecondaryWindowRepresentation *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = *((_OWORD *)a2 + 4);
  v6 = v7;
  if ( (CWindowData *)v7 != this )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pp_EtwEventWriteTransfer(this, &RemoveSecondaryWindowRepresentation_WR, a2, *((_QWORD *)this + 5), v7);
    DynArray<CSecondaryWindowRepresentation *,0>::Remove((char *)this + 496, &v8);
  }
  LOBYTE(a4) = 1;
  CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, DWORD2(v7), a4);
}
