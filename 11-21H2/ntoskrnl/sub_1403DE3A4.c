/*
 * XREFs of sub_1403DE3A4 @ 0x1403DE3A4
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403DE3A4(void *a1, size_t Size, unsigned int *a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  unsigned int v8; // edi
  unsigned int v10; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf

  v5 = Size;
  v6 = 0;
  v7 = ExAcquireSpinLockShared(&dword_140C4ACC0);
  v8 = 16 * (dword_140C4ACE0 + 1);
  if ( a3 )
  {
    if ( dword_140C4ACE0 )
    {
      v10 = 16 * (dword_140C4ACE0 + 1);
      if ( v8 > v5 )
        v10 = v5;
      if ( v5 )
        memmove(a1, Base, v10);
    }
    else
    {
      v8 = 0;
    }
    *a3 = v8;
  }
  else if ( Base )
  {
    if ( v5 >= 8 )
      v5 = 8;
    memmove(a1, &Base, v5);
  }
  else
  {
    v6 = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4ACC0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v6;
}
