/*
 * XREFs of sub_14037E43C @ 0x14037E43C
 * Callers:
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14037E43C(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char v8; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 248LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 17576), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 17584) = a5;
  v8 = *((_BYTE *)KeGetCurrentThread() + 195);
  *(_BYTE *)(v7 + v6 + 17592) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 17590) = v8;
  *(_BYTE *)(v7 + v6 + 17591) = a3;
  *(_QWORD *)(v7 + v6 + 17600) = *a2;
  *(_WORD *)(v7 + v6 + 17588) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 17608) = *(_QWORD *)(v6 + 16896);
  *(_QWORD *)(v7 + v6 + 17616) = *(_QWORD *)(v6 + 17280);
  *(_QWORD *)(v7 + v6 + 17624) = *(_QWORD *)(v6 + 17504);
  *(_QWORD *)(v7 + v6 + 17632) = *(_QWORD *)(v6 + 17408);
  result = *(_QWORD *)(v6 + 3584);
  *(_QWORD *)(v7 + v6 + 17640) = result;
  *(_OWORD *)(v7 + v6 + 17648) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 17664) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 17680) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 17696) = *(_QWORD *)(a1 + 256);
  return result;
}
