/*
 * XREFs of KeCancelTimer2 @ 0x1402D3FB0
 * Callers:
 *     ExCancelTimer @ 0x1402D3E10 (ExCancelTimer.c)
 *     sub_1402D3E44 @ 0x1402D3E44 (sub_1402D3E44.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     sub_14038B744 @ 0x14038B744 (sub_14038B744.c)
 *     sub_140399104 @ 0x140399104 (sub_140399104.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1405C9E88 @ 0x1405C9E88 (sub_1405C9E88.c)
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 *     sub_140752ECC @ 0x140752ECC (sub_140752ECC.c)
 *     sub_14081B21C @ 0x14081B21C (sub_14081B21C.c)
 *     sub_1408630F0 @ 0x1408630F0 (sub_1408630F0.c)
 *     sub_140989CF0 @ 0x140989CF0 (sub_140989CF0.c)
 *     sub_140996B90 @ 0x140996B90 (sub_140996B90.c)
 *     sub_140998940 @ 0x140998940 (sub_140998940.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402D4358 @ 0x1402D4358 (sub_1402D4358.c)
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     sub_1403542DC @ 0x1403542DC (sub_1403542DC.c)
 *     sub_14035432C @ 0x14035432C (sub_14035432C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057AA60 @ 0x14057AA60 (sub_14057AA60.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r14d
  char v3; // si
  unsigned int v4; // ebp
  char v5; // r15
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  v1 = 0;
  v3 = 0;
  v4 = 2;
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !(unsigned __int8)sub_14035432C(a1) )
  {
    if ( (unsigned __int8)sub_1403542DC(a1) )
    {
      sub_1402F2AD0(a1);
      KeReleaseSpinLockFromDpcLevel(&qword_140D31380);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_8;
      v1 = 4;
    }
    v4 = 0;
    v3 = 1;
LABEL_8:
    sub_1402D4358(a1, v1, v4);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v5 && v3 )
    sub_14057AA60(a1, qword_140D06E28 ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ qword_140D06CC8, qword_140D06CC8)));
  return v3;
}
