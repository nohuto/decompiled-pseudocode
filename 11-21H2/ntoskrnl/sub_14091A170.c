/*
 * XREFs of sub_14091A170 @ 0x14091A170
 * Callers:
 *     sub_14091972C @ 0x14091972C (sub_14091972C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14068D6C4 @ 0x14068D6C4 (sub_14068D6C4.c)
 */

NTSTATUS __fastcall sub_14091A170(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rax
  NTSTATUS result; // eax
  char v7; // cl

  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v3 = a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  v4 = *(unsigned int *)(a2 + 132);
  LOBYTE(a2) = 1;
  *(_DWORD *)(a1 + 132) = v4;
  v5 = (void *)sub_14042A5E0(v4, a2);
  *(_QWORD *)(a1 + 64) = v5;
  if ( !v5 )
    return -1073741670;
  memmove(v5, *(const void **)(v3 + 64), *(unsigned int *)(a1 + 132));
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) = -1;
  v7 = *(_BYTE *)(a1 + 140);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(v3 + 136);
  *(_BYTE *)(a1 + 140) ^= (*(_BYTE *)(v3 + 140) ^ v7) & 1;
  *(_BYTE *)(a1 + 140) ^= (*(_BYTE *)(v3 + 140) ^ *(_BYTE *)(a1 + 140)) & 2;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(v3 + 160) & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(v3 + 168);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(v3 + 172);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(v3 + 176);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(v3 + 180);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(v3 + 184);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v3 + 188);
  *(_WORD *)(a1 + 192) = *(_WORD *)(v3 + 192);
  *(_BYTE *)(a1 + 194) = *(_BYTE *)(v3 + 194);
  *(_BYTE *)(a1 + 195) = *(_BYTE *)(v3 + 195);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(v3 + 200);
  *(_WORD *)(a1 + 208) = *(_WORD *)(v3 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(v3 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(v3 + 216);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(v3 + 220);
  if ( (*(_DWORD *)(v3 + 160) & 0x20000) == 0 )
    return 0;
  result = sub_14068D6C4(a1 + 224, *(void **)(a1 + 1544), 0, *(_QWORD *)(v3 + 248), *(_DWORD *)(v3 + 256));
  if ( result >= 0 )
    return 0;
  return result;
}
