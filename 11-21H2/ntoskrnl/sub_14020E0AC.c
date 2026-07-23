/*
 * XREFs of sub_14020E0AC @ 0x14020E0AC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140B2EDD8 @ 0x140B2EDD8 (sub_140B2EDD8.c)
 * Callees:
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

__int64 __fastcall sub_14020E0AC(unsigned int a1, char *a2, int a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // r10d
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // r14d
  int v9; // esi
  __int64 v10; // r8
  signed __int64 v11; // r10
  signed __int64 v12; // r11
  __int64 *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9

  v3 = a2;
  v4 = a3;
  result = sub_14020F30C(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v17 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    v8 = 32;
    if ( v6 < 0x20 )
      v8 = v6;
    v9 = 0;
    KeAcquireSpinLockAtDpcLevel(&qword_140C2B8A0);
    sub_14020F26C(&qword_140D06A00);
    LODWORD(v10) = 0;
    v11 = (char *)&qword_140D06E48 - v3;
    v12 = &unk_140D08290 - (_UNKNOWN *)v3;
    v13 = &qword_140D08090[v4];
    do
    {
      v14 = *(_QWORD *)&v3[v11];
      if ( (unsigned int)v10 < v8 )
      {
        v15 = *(_QWORD *)v3;
      }
      else
      {
        v15 = 0LL;
        if ( !(_DWORD)v4 )
          v15 = *(_QWORD *)&v3[v11];
      }
      v16 = ~*(_QWORD *)&v3[v12] & v15;
      *v13 = v16;
      if ( (v14 & v16) != v14 )
        v9 = 1;
      v10 = (unsigned int)(v10 + 1);
      v3 += 8;
      v13 += 2;
    }
    while ( (unsigned int)v10 < 0x20 );
    if ( !(_DWORD)v4 )
      dword_140D06C28 = v9;
    LOBYTE(v14) = CurrentIrql;
    ++qword_140D06A00;
    sub_14020E1DC(0LL, v14, v10, v13);
    return 0LL;
  }
  return result;
}
