/*
 * XREFs of MmFreeContiguousMemory @ 0x140213DA0
 * Callers:
 *     MmFreeContiguousMemorySpecifyCache @ 0x140213380 (MmFreeContiguousMemorySpecifyCache.c)
 *     HalFreeCommonBuffer @ 0x1403993C0 (HalFreeCommonBuffer.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140514920 @ 0x140514920 (sub_140514920.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140515B80 @ 0x140515B80 (sub_140515B80.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_1405226CC @ 0x1405226CC (sub_1405226CC.c)
 *     sub_140543EB0 @ 0x140543EB0 (sub_140543EB0.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     sub_140616DB0 @ 0x140616DB0 (sub_140616DB0.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 *     sub_140B4D2C4 @ 0x140B4D2C4 (sub_140B4D2C4.c)
 * Callees:
 *     sub_140213F3C @ 0x140213F3C (sub_140213F3C.c)
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1402166FC @ 0x1402166FC (sub_1402166FC.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405852C0 @ 0x1405852C0 (sub_1405852C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A81748 @ 0x140A81748 (sub_140A81748.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // [rsp+30h] [rbp-30h]
  _OWORD v5[2]; // [rsp+38h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = sub_14027B080();
  if ( v2 != 5 )
  {
    if ( v2 )
    {
      sub_140352E50(BaseAddress, v5);
      v3 = 4;
      do
        v4 = sub_140317A10(*((_QWORD *)v5 + (unsigned int)--v3));
      while ( (v4 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        sub_1402166FC((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  sub_140213F3C(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}
