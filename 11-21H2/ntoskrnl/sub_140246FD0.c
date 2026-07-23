/*
 * XREFs of sub_140246FD0 @ 0x140246FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     sub_140287574 @ 0x140287574 (sub_140287574.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140246FD0(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v13; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r8
  int v16; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v17 = 0;
  if ( !v1 )
    return 0;
  v3 = sub_14028494C(v1, 0LL, &v17);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v17;
      if ( v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = v17;
        v16 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v13 = v17;
    }
    __writecr8(v13);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    sub_140287A2C(v3);
    ++*(_QWORD *)(v4 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v7 = KeGetCurrentIrql(), v7 <= 0xFu) )
    {
      v6 = v17;
      if ( v17 <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = *((_QWORD *)v8 + 4375);
        v6 = v17;
        v10 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(v8);
      }
    }
    else
    {
      v6 = v17;
    }
    __writecr8(v6);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) >> 4;
    sub_140287574(v4, 1LL);
  }
  return v2;
}
