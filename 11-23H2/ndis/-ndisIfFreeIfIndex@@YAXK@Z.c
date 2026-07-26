/*
 * XREFs of ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017CE0
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000DB10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FE40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfFreeIfIndex(unsigned int a1)
{
  int v1; // eax
  _RTL_BITMAP_EX *v2; // rbx
  ULONG64 SizeOfBitMap; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // edi

  if ( a1 < *(_DWORD *)dword_1C00F5B64 )
  {
    v1 = dword_1C00F5650;
    v2 = (_RTL_BITMAP_EX *)&xmmword_1C00F5658;
    SizeOfBitMap = xmmword_1C00F5658;
  }
  else
  {
    v1 = dword_1C00F5668;
    v2 = &BitMapHeader;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  }
  v4 = a1 - v1;
  v5 = v4;
  if ( v4 < SizeOfBitMap )
  {
    if ( RtlTestBitEx(v2, v4) )
      RtlClearBitEx(v2, v5);
  }
}
