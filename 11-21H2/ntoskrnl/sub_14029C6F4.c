/*
 * XREFs of sub_14029C6F4 @ 0x14029C6F4
 * Callers:
 *     sub_140392084 @ 0x140392084 (sub_140392084.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall sub_14029C6F4(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // eax
  bool v7; // zf

  --*(_WORD *)(a1 + 486);
  v2 = *(unsigned __int8 *)(a1 + 1385);
  v3 = *(_DWORD *)(a1 + 1384);
  v4 = a2 << 9;
  if ( (v2 & 1) != 0 )
  {
    v5 = (v2 >> 1) & 7;
    v6 = v3 & 0xFFFFF1FF;
  }
  else
  {
    v5 = -1;
    v6 = v3 | 0x100;
  }
  *(_DWORD *)(a1 + 1384) = v4 | v6;
  v7 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v7 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
