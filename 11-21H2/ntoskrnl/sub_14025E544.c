/*
 * XREFs of sub_14025E544 @ 0x14025E544
 * Callers:
 *     sub_140205E40 @ 0x140205E40 (sub_140205E40.c)
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 *     sub_140246E70 @ 0x140246E70 (sub_140246E70.c)
 * Callees:
 *     sub_140226844 @ 0x140226844 (sub_140226844.c)
 *     sub_14025CE80 @ 0x14025CE80 (sub_14025CE80.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B2914 @ 0x1405B2914 (sub_1405B2914.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14025E544(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 **v9; // rcx
  ULONG_PTR v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  struct _KPRCB *v16; // rcx
  ULONG_PTR v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r11
  __int64 v20; // r9
  int v21; // eax

  v3 = (*(_DWORD *)(a2 + 324))-- == 1;
  if ( !v3 )
    return;
  v7 = (__int64 *)(a2 + 80);
  v8 = *v7;
  if ( *v7 )
  {
    v9 = (__int64 **)v7[1];
    if ( *(__int64 **)(v8 + 8) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( *(_DWORD *)(a2 + 328) != 512 )
    {
      if ( *(_BYTE *)(a2 + 70) )
        goto LABEL_31;
      if ( *(_BYTE *)(a2 + 68) )
      {
        v10 = *(_QWORD *)(a2 + 24);
        if ( !v10 )
          goto LABEL_31;
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 22848));
        sub_140226844(v10, 1uLL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
        if ( !dword_140D06B08 )
          goto LABEL_30;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_30;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 0xFu )
          goto LABEL_30;
        if ( (unsigned __int8)v11 > 0xFu )
          goto LABEL_30;
        if ( CurrentIrql < 2u )
          goto LABEL_30;
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v3 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( !v3 )
          goto LABEL_30;
        v16 = CurrentPrcb;
      }
      else
      {
        v17 = *(_QWORD *)(a2 + 24);
        if ( !v17 )
          goto LABEL_31;
        v11 = (unsigned __int8)sub_1402F2700(*(_QWORD *)(a2 + 24));
        sub_140226844(v17, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !dword_140D06B08
          || (dword_140D06B08 & 1) == 0
          || (v18 = KeGetCurrentIrql(), v18 > 0xFu)
          || (unsigned __int8)v11 > 0xFu
          || v18 < 2u
          || (v19 = KeGetCurrentPrcb(),
              v20 = *((_QWORD *)v19 + 4375),
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1)),
              v3 = (v21 & *(_DWORD *)(v20 + 20)) == 0,
              *(_DWORD *)(v20 + 20) &= v21,
              !v3) )
        {
LABEL_30:
          __writecr8(v11);
LABEL_31:
          if ( a3 )
            sub_1405B2914(a3, 1LL);
          goto LABEL_7;
        }
        v16 = v19;
      }
      sub_140418E4C(v16);
      goto LABEL_30;
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 69) )
    sub_14025CE80(a2);
  ExFreePoolWithTag((PVOID)a2, 0);
}
