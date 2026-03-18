/*
 * XREFs of ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x1C026FC40
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026F4AC (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z @ 0x1C026E7C0 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(
        __int64 a1,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  int v4; // eax
  unsigned int v6; // r8d
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r10

  if ( a3 < 3 )
    return 3223192968LL;
  v4 = a2[2];
  if ( !(_BYTE)v4 )
    return 3223192969LL;
  if ( (unsigned __int8)v4 > 3u && (_BYTE)v4 != 7 && (_BYTE)v4 != 12 )
  {
    if ( (_BYTE)v4 == 78 )
    {
      v6 = 9;
      goto LABEL_12;
    }
    if ( (_BYTE)v4 != 0xE3 && (_BYTE)v4 != 0xF3 )
      return 3223192969LL;
  }
  v6 = (a2[1] & 0x7F) + 3;
  if ( (a2[1] & 0x7F) == 0xFFFFFFFD )
    return 3223192970LL;
LABEL_12:
  if ( a3 < v6 )
    return 3223192970LL;
  switch ( v4 )
  {
    case 1:
      goto LABEL_27;
    case 2:
      if ( v6 == 11 )
        goto LABEL_27;
      return 3223192970LL;
    case 3:
    case 7:
    case 12:
      goto LABEL_27;
    case 78:
      if ( v6 == 9 )
        goto LABEL_27;
      return 3223192970LL;
  }
  if ( v4 == 227 && v6 - 6 > 0x20 )
    return 3223192970LL;
LABEL_27:
  v7 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(111, a2, v6 - 1);
  return v7 != *(_BYTE *)(v8 + v9) ? 0xC01E058B : 0;
}
