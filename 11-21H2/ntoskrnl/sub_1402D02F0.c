/*
 * XREFs of sub_1402D02F0 @ 0x1402D02F0
 * Callers:
 *     sub_1405FBF80 @ 0x1405FBF80 (sub_1405FBF80.c)
 *     sub_1405FC2D0 @ 0x1405FC2D0 (sub_1405FC2D0.c)
 *     sub_1406B48F0 @ 0x1406B48F0 (sub_1406B48F0.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 */

__int64 __fastcall sub_1402D02F0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v10; // rbp
  unsigned __int8 v11; // dl
  char v12; // al

  *a6 = 0;
  v10 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v11 = sub_1402CF4F0(v10);
  *a1 = *(_QWORD *)(v10 + 160) << 12;
  *a2 = *(_QWORD *)(v10 + 128) << 12;
  *a3 = *(_QWORD *)(v10 + 136) << 12;
  *a4 = *(_QWORD *)(v10 + 112) << 12;
  *a5 = *(_QWORD *)(v10 + 120) << 12;
  v12 = *(_BYTE *)(v10 + 184);
  if ( v12 < 0 )
  {
    *a6 |= 4u;
    v12 = *(_BYTE *)(v10 + 184);
  }
  if ( (v12 & 0x40) != 0 )
    *a6 |= 1u;
  sub_1402B0CE0(v10, v11);
  return 0LL;
}
