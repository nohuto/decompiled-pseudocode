/*
 * XREFs of sub_1402829D0 @ 0x1402829D0
 * Callers:
 *     sub_140216B04 @ 0x140216B04 (sub_140216B04.c)
 *     sub_14024E9E0 @ 0x14024E9E0 (sub_14024E9E0.c)
 *     sub_1402ED0C4 @ 0x1402ED0C4 (sub_1402ED0C4.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_1403D2280 @ 0x1403D2280 (sub_1403D2280.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402829D0(__int64 a1)
{
  _QWORD *v1; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  v1 = &unk_140C53D28;
  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result != 2 )
    v1 = (_QWORD *)(a1 + 232);
  if ( *v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v5 = sub_140282AD0(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
    if ( *v1 )
    {
      sub_140334400(*v1, v6);
      *v1 = 0LL;
    }
    v7 = sub_140282AD0(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
