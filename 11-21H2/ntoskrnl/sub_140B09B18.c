/*
 * XREFs of sub_140B09B18 @ 0x140B09B18
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B098F0 @ 0x140B098F0 (sub_140B098F0.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 sub_140B09B18()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  char v4; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v8; // edx
  __int64 v9; // r9
  bool v10; // zf

  sub_14026A784((__int64)&StartContext, 1LL, 0LL, 1u);
  v0 = sub_1403250B0((__int64)&StartContext, 0, 0x208u);
  if ( v0 == -1 )
    KeBugCheckEx(0x7Du, qword_140C590D0, qword_140C590C0, qword_140C590C8, 0x102uLL);
  v1 = 48 * v0 - 0x220000000000LL;
  sub_14033C33C(v1, 0, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  v2 = (unsigned __int8)sub_1402F2700(v1);
  v3 = sub_1402CCC50(128LL);
  v4 = *(_BYTE *)(v1 + 34);
  *(_QWORD *)(v1 + 16) = v3;
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) = v4 | 7;
  *(_BYTE *)(v1 + 34) = v4 | 0x27;
  *(_BYTE *)(v1 + 34) |= 8u;
  *(_QWORD *)(v1 + 40) &= ~0x8000000000000000uLL;
  sub_14033C3E0(v1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = (v8 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v8;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v1;
}
