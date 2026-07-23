/*
 * XREFs of MmMapIoSpaceEx @ 0x140215340
 * Callers:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     MmMapVideoDisplay @ 0x140215300 (MmMapVideoDisplay.c)
 *     sub_140396A68 @ 0x140396A68 (sub_140396A68.c)
 *     sub_1403AA8D8 @ 0x1403AA8D8 (sub_1403AA8D8.c)
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D9B80 @ 0x1403D9B80 (sub_1403D9B80.c)
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_140506DF0 @ 0x140506DF0 (sub_140506DF0.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 *     sub_14051BEFC @ 0x14051BEFC (sub_14051BEFC.c)
 *     sub_14054445C @ 0x14054445C (sub_14054445C.c)
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_1405514D0 @ 0x1405514D0 (sub_1405514D0.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_14064D6B0 @ 0x14064D6B0 (sub_14064D6B0.c)
 *     sub_1406529D4 @ 0x1406529D4 (sub_1406529D4.c)
 *     sub_14065445C @ 0x14065445C (sub_14065445C.c)
 *     sub_140693800 @ 0x140693800 (sub_140693800.c)
 *     sub_14085FAA4 @ 0x14085FAA4 (sub_14085FAA4.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_1409DC350 @ 0x1409DC350 (sub_1409DC350.c)
 *     sub_1409DC494 @ 0x1409DC494 (sub_1409DC494.c)
 *     sub_1409DC58C @ 0x1409DC58C (sub_1409DC58C.c)
 *     sub_1409DCAD0 @ 0x1409DCAD0 (sub_1409DCAD0.c)
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 *     sub_140A52AD8 @ 0x140A52AD8 (sub_140A52AD8.c)
 *     sub_140A52CF4 @ 0x140A52CF4 (sub_140A52CF4.c)
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 *     sub_140A5AEB0 @ 0x140A5AEB0 (sub_140A5AEB0.c)
 *     sub_140A61D50 @ 0x140A61D50 (sub_140A61D50.c)
 *     sub_140A9FE70 @ 0x140A9FE70 (sub_140A9FE70.c)
 *     sub_140A9FFA0 @ 0x140A9FFA0 (sub_140A9FFA0.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140AF8D68 @ 0x140AF8D68 (sub_140AF8D68.c)
 *     sub_140AF8F6C @ 0x140AF8F6C (sub_140AF8F6C.c)
 *     sub_140AF910C @ 0x140AF910C (sub_140AF910C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 *     sub_140B2388C @ 0x140B2388C (sub_140B2388C.c)
 * Callees:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  int v4; // r10d
  int v5; // r11d

  v3 = sub_14032BCC0(a3);
  if ( (v3 & 2) != 0 && (v3 & 0xFFFFFFF8) == 0x18 && (v3 & 7) != 0 )
    return 0LL;
  else
    return sub_14021538C(v4, v5, v5, v3, 0);
}
