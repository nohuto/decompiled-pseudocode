/*
 * XREFs of sub_1402D66F0 @ 0x1402D66F0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D2CE8 @ 0x1405D2CE8 (sub_1405D2CE8.c)
 */

__int64 sub_1402D66F0()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int v6; // r15d
  signed int v7; // esi
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int16 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+62h] [rbp-Eh]
  __int16 v23; // [rsp+66h] [rbp-Ah]

  v22 = 0;
  v23 = 0;
  v17 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = qword_140C22718;
  v3 = MEMORY[0xFFFFF78000000320];
  v18 = MEMORY[0xFFFFF78000000320];
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( byte_140C22715 )
  {
    v4 = v3 - v2;
    if ( (int)v3 - v2 <= 0 )
    {
      byte_140C22715 = 0;
      goto LABEL_22;
    }
    v20 = qword_140D06E48[0];
    v5 = 100;
    v21 = 0;
    v19 = (unsigned __int16 *)&dword_140D06E40;
    v6 = 0;
    v7 = 100;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
    {
      v9 = 100
         * (*(_DWORD *)(*(_QWORD *)(qword_140D088C0[v17] + 24) + 652LL) - *(_DWORD *)(qword_140D088C0[v17] + 33828))
         / v4;
      if ( v9 < v7 )
        v7 = 100
           * (*(_DWORD *)(*(_QWORD *)(qword_140D088C0[v17] + 24) + 652LL) - *(_DWORD *)(qword_140D088C0[v17] + 33828))
           / v4;
      v6 += v9;
    }
    if ( v7 > 100 )
    {
      v7 = 100;
    }
    else if ( v7 < 0 )
    {
      v7 = 0;
    }
    if ( v6 / ActiveProcessorCount <= 100 )
    {
      v5 = v6 / ActiveProcessorCount;
      if ( v6 / ActiveProcessorCount < 0 )
        v5 = 0;
    }
    v3 = v18;
    dword_140C226E4 = v7;
    dword_140C226E0 = v5;
    if ( !byte_140C5AC3C )
      sub_1402D6B0C((unsigned int)&unk_140CE2050, 24073380, 0, 0, (__int64)&qword_14000EFB0, 1);
    if ( dword_140C226EC )
    {
      dword_140C226E8 += dword_140C09830;
      sub_1405D2CE8(v8, (unsigned int)v7, v5);
      if ( !byte_140C5AC3C
        && dword_140C0C80C + 120 <= (unsigned int)dword_140C226EC
        && dword_140C226E8 + dword_140C0C80C >= (unsigned int)dword_140C226EC
        && !byte_140C1F248 )
      {
        byte_140C1F248 = 1;
        sub_14036AAC4(&qword_140C1F260, 1LL);
      }
    }
  }
  v20 = qword_140D06E48[0];
  v19 = (unsigned __int16 *)&dword_140D06E40;
  qword_140C22718 = v3;
  byte_140C22715 = 1;
  v21 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &v19) )
    *(_DWORD *)(qword_140D088C0[v17] + 33828) = *(_DWORD *)(*(_QWORD *)(qword_140D088C0[v17] + 24) + 652LL);
LABEL_22:
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((unsigned int)&unk_140CE2050, 24073380, 0, 0, (__int64)&qword_14000EFB0, 1);
  sub_1402D6254(128);
  return sub_1402D62A8();
}
