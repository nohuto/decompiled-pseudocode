/*
 * XREFs of sub_1C001F9A4 @ 0x1C001F9A4
 * Callers:
 *     sub_1C001F7CC @ 0x1C001F7CC (sub_1C001F7CC.c)
 *     sub_1C0036360 @ 0x1C0036360 (sub_1C0036360.c)
 *     sub_1C0036528 @ 0x1C0036528 (sub_1C0036528.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C001F9A4(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v8 = *(_QWORD *)(v4 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  v9 = sub_1C0007CF4(64LL, 272LL, 1918067026LL, a1);
  if ( v9 )
  {
    *(_DWORD *)v9 = 28;
    *(_DWORD *)(v9 + 16) = 1771392;
    *(_QWORD *)(v9 + 4) = 0x455241574D524946LL;
    if ( v4 )
      v10 = *(_DWORD *)(v4 + 1320);
    else
      v10 = *(_DWORD *)(v8 + 4060);
    *(_DWORD *)(v9 + 12) = v10;
    *(_DWORD *)(v9 + 24) = 244;
    *(_DWORD *)(v9 + 28) = 1;
    *(_DWORD *)(v9 + 36) = 1;
    *(_DWORD *)(v9 + 44) = 56;
    *(_DWORD *)(v9 + 48) = 216;
    *(_DWORD *)(v9 + 32) = 24;
    *(_DWORD *)(v9 + 40) = v4 == 0;
    *(_DWORD *)(v9 + 56) = 2;
    *(_DWORD *)(v9 + 60) = 24;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = v9;
  result = v5;
  *a4 = 272;
  return result;
}
