/*
 * XREFs of RaidInitializeInquirySrb @ 0x1C00868E4
 * Callers:
 *     RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C001BC4C (RaidBusEnumeratorBuildVitalProductInquiry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeInquirySrb(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // rax
  _BYTE *v8; // rax

  if ( a6 < 0x24 )
    return 3221225716LL;
  if ( a7 == 1 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_WORD *)a1 = 8;
    *(_WORD *)(a1 + 36) = 2;
    *(_QWORD *)(a1 + 64) = a5;
    *(_BYTE *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 16) = 184;
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_DWORD *)(a1 + 52) = 128;
    *(_DWORD *)(a1 + 24) = 72;
    *(_DWORD *)(a1 + 60) = a6;
    *(_DWORD *)(a1 + 40) = 10;
    *(_DWORD *)(a1 + 56) = 1;
    *(_WORD *)(a1 + 128) = 1;
    *(_DWORD *)(a1 + 132) = 4;
    *(_BYTE *)(a1 + 136) = a2;
    *(_BYTE *)(a1 + 137) = a3;
    *(_BYTE *)(a1 + 138) = a4;
    v7 = a1 + *(unsigned int *)(a1 + 120);
    *(_DWORD *)v7 = 64;
    *(_DWORD *)(v7 + 4) = 32;
    *(_BYTE *)(v7 + 10) = 6;
    v8 = (_BYTE *)(v7 + 24);
  }
  else
  {
    *(_BYTE *)(a1 + 2) = 0;
    *(_WORD *)a1 = 88;
    *(_QWORD *)(a1 + 24) = a5;
    v8 = (_BYTE *)(a1 + 72);
    *(_BYTE *)(a1 + 5) = a2;
    *(_BYTE *)(a1 + 6) = a3;
    *(_BYTE *)(a1 + 7) = a4;
    *(_DWORD *)(a1 + 12) = 72;
    *(_DWORD *)(a1 + 16) = a6;
    *(_DWORD *)(a1 + 20) = 10;
    *(_BYTE *)(a1 + 10) = 6;
  }
  v8[4] = a6;
  v8[3] = BYTE1(a6);
  *v8 = 18;
  return 0LL;
}
