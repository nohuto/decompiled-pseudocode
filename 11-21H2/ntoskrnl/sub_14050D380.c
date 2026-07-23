/*
 * XREFs of sub_14050D380 @ 0x14050D380
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 */

__int64 __fastcall sub_14050D380(__int64 *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v7; // r14
  int v8; // esi
  __int64 *v9; // rcx
  __int64 **v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  int *v13; // rax
  int *i; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  LARGE_INTEGER v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL) == 2 )
    v3 = sub_1403A572C(a3, *(_QWORD *)(*(_QWORD *)&qword_140C4C7E0 + 192LL), 10000000LL);
  byte_140C4C7D8 = sub_140252344(&qword_140C4C7D0);
  if ( *(int **)&qword_140C4C7A0 == &qword_140C4C7A0 )
  {
    v7 = 0LL;
    v8 = -1;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)&qword_140C4C7A0 + 32LL);
    v8 = *(_DWORD *)(*(_QWORD *)&qword_140C4C7A0 + 16LL);
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      goto LABEL_19;
    *v10 = v9;
    v9[1] = (__int64)v10;
  }
  v22.QuadPart = 0LL;
  v11 = KeQueryInterruptTimePrecise(&v22) + v3;
  v12 = 0LL;
  a1[4] = v11;
  if ( a2 != 3 )
    v12 = v3;
  a1[5] = v12;
  v13 = &qword_140C4C7A0;
  for ( i = *(int **)&qword_140C4C7A0; i != &qword_140C4C7A0 && v11 >= *((_QWORD *)i + 4); i = *(int **)i )
    v13 = i;
  v15 = *(_QWORD *)v13;
  if ( *(int **)(*(_QWORD *)v13 + 8LL) != v13 )
LABEL_19:
    __fastfail(3u);
  *a1 = v15;
  a1[1] = (__int64)v13;
  *(_QWORD *)(v15 + 8) = a1;
  *(_QWORD *)v13 = a1;
  if ( *(_QWORD *)(*(_QWORD *)&qword_140C4C7A0 + 32LL) != v7 || *(_DWORD *)(*(_QWORD *)&qword_140C4C7A0 + 16LL) != v8 )
    sub_14050D91C();
  *((_DWORD *)a1 + 5) = 2;
  *((_BYTE *)a1 + 24) = 1;
  v16 = (unsigned __int8)byte_140C4C7D8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4C7D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  return 0LL;
}
