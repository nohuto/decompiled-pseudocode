/*
 * XREFs of sub_180018DFC @ 0x180018DFC
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 *     sub_180028BE0 @ 0x180028BE0 (sub_180028BE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 */

__int64 __fastcall sub_180018DFC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  if ( a1 + 48 != a2 + 48 )
    sub_18001CB90();
  v4 = *(_QWORD *)(a2 + 80);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a2 + 80);
  }
  v7[0] = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v4;
  v7[1] = v5;
  sub_180010910((__int64)v7);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return a1;
}
