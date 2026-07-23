/*
 * XREFs of sub_14050A324 @ 0x14050A324
 * Callers:
 *     sub_1405063D0 @ 0x1405063D0 (sub_1405063D0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheaInitializeRecordHeader @ 0x140645400 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall sub_14050A324(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ecx

  v8 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  v10 = v9;
  v11 = v9 + 192;
  *(_WORD *)(a3 + 10) = 3;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  *(_OWORD *)(a3 + 80) = xmmword_14003A620;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  sub_14042A5E0(a3 + 128, a3 + v10);
  *(_DWORD *)(a3 + 212) |= 1u;
  *(_DWORD *)(a3 + 128) = v10;
  *(_DWORD *)(a3 + 200) = v11;
  *(_WORD *)(a3 + 208) = 768;
  *(_DWORD *)(a3 + 204) = 12;
  v12 = v11;
  v13 = v11 + 12;
  *(_OWORD *)(a3 + 216) = xmmword_14003A5E0;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v13 > a4 )
    return (unsigned int)-1073741789;
  *(_QWORD *)(v12 + a3) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(v12 + a3 + 8) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a3 + 272) = v13;
  v14 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a3 + 276) = v14;
  *(_WORD *)(a3 + 280) = 768;
  *(_OWORD *)(a3 + 288) = xmmword_14003A5A0;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v14 + v13 > a4 )
    return (unsigned int)-1073741789;
  else
    memmove((void *)(a3 + v13), (const void *)a2, *(unsigned int *)(a2 + 8));
  return v8;
}
