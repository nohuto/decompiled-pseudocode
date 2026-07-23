/*
 * XREFs of sub_1403031F0 @ 0x1403031F0
 * Callers:
 *     sub_14021BD70 @ 0x14021BD70 (sub_14021BD70.c)
 *     sub_14021FD60 @ 0x14021FD60 (sub_14021FD60.c)
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403025F0 @ 0x1403025F0 (sub_1403025F0.c)
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
 *     sub_14062EA90 @ 0x14062EA90 (sub_14062EA90.c)
 *     EtwWriteString @ 0x1406305E0 (EtwWriteString.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403031F0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  bool result; // al

  result = *(_DWORD *)a1
        && ((v3 = *(_BYTE *)(a1 + 4), a2 <= v3) || !v3)
        && ((*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3
         || (a3 & *(_QWORD *)(a1 + 16)) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24));
  return result;
}
