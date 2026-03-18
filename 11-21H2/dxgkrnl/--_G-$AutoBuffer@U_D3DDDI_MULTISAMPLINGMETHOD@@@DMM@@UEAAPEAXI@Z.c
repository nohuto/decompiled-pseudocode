/*
 * XREFs of ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0068270
 * Callers:
 *     ??_E?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C002D1C0 (--_E-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0011C28 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
