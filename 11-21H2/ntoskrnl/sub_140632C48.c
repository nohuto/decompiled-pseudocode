/*
 * XREFs of sub_140632C48 @ 0x140632C48
 * Callers:
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14045A1CC @ 0x14045A1CC (sub_14045A1CC.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_140461C46 @ 0x140461C46 (sub_140461C46.c)
 *     sub_140461CD0 @ 0x140461CD0 (sub_140461CD0.c)
 *     sub_14056E8F8 @ 0x14056E8F8 (sub_14056E8F8.c)
 *     sub_14063D914 @ 0x14063D914 (sub_14063D914.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140632C48(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *((_QWORD *)CurrentPrcb + 4309);
  v9 = *(unsigned __int8 *)(v8 + 272);
  if ( (unsigned __int8)v9 < 8u )
  {
    *(_BYTE *)(v8 + 272) = v9 + 1;
    v10 = 32 * v9;
    *(_DWORD *)(v10 + v8 + 40) = a5;
    LOBYTE(CurrentPrcb) = a6;
    *(_BYTE *)(v10 + v8 + 44) = a6;
    *(_QWORD *)(v10 + v8 + 16) = a2;
    *(_DWORD *)(v10 + v8 + 36) = a4;
    *(_QWORD *)(v10 + v8 + 24) = a1;
    *(_DWORD *)(v10 + v8 + 32) = a3;
  }
  else
  {
    ++*(_DWORD *)(v8 + 276);
  }
  return (char)CurrentPrcb;
}
