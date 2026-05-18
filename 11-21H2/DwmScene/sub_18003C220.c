/*
 * XREFs of sub_18003C220 @ 0x18003C220
 * Callers:
 *     sub_180016640 @ 0x180016640 (sub_180016640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C220(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 92);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 4);
  v2 = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = 45312LL;
  *(_DWORD *)(a1 + 76) = v2;
  v3 = *(_DWORD *)(a2 + 76);
  *(_QWORD *)(a1 + 80) = 1LL;
  *(_DWORD *)(a1 + 80) = v3;
  v4 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 60) = v4;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 44);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 68);
  v5 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = 40960;
  *(_DWORD *)(a1 + 68) = v5;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 24);
  result = a1;
  *(_QWORD *)(a1 + 20) = 1LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  return result;
}
