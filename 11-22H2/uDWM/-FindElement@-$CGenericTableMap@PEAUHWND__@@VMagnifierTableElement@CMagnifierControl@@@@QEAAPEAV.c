/*
 * XREFs of ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18006D23E
 * Callers:
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x1800CB3D4 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800CBA14 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800CBBDC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18006D214 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

PVOID __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  PVOID v2; // rbx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = a2;
  v2 = RtlLookupElementGenericTable(a1, Buffer);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
  return v2;
}
