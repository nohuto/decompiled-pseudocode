/*
 * XREFs of sub_140A1B1B8 @ 0x140A1B1B8
 * Callers:
 *     sub_140A1BC24 @ 0x140A1BC24 (sub_140A1BC24.c)
 * Callees:
 *     RtlEthernetAddressToStringW @ 0x1403DE770 (RtlEthernetAddressToStringW.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1B1B8(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // edi

  if ( *(_WORD *)a1 != 33 )
  {
    v7 = -1073741503;
    if ( !a3 )
      return v7;
    goto LABEL_9;
  }
  if ( !a2 || !a3 )
    return 0;
  *(_WORD *)(a2 + 2) = 36;
  Pool2 = ExAllocatePool2(256LL, 36LL, 1799447891LL);
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( Pool2 )
  {
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlEthernetAddressToStringW((const DL_EUI48 *)(a1 + 2), *(PWSTR *)(a2 + 8))
                            - *(_DWORD *)(a2 + 8)) >> 1);
    return 0;
  }
  v7 = -1073741801;
LABEL_9:
  if ( *a3 )
  {
    *a3 = 0;
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
  return v7;
}
