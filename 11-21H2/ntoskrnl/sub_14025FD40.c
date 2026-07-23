/*
 * XREFs of sub_14025FD40 @ 0x14025FD40
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_14025FE60 @ 0x14025FE60 (sub_14025FE60.c)
 *     sub_14025FF40 @ 0x14025FF40 (sub_14025FF40.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025FD40(__int64 a1)
{
  volatile LONG *v1; // rbp
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 i; // rdx
  unsigned int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  v1 = (volatile LONG *)(a1 + 232);
  v3 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v5 = *(_QWORD *)(a1 + 144);
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v5 )
    v5 ^= a1 + 144;
  v6 = 0LL;
  while ( v5 )
  {
    if ( *(_DWORD *)(v5 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v5 + 48) )
        goto LABEL_13;
      v7 = *(_QWORD *)v5;
      v6 = v5;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
    }
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  v5 = v6;
LABEL_13:
  v8 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    for ( ; *(_QWORD *)(v8 + 8); v8 = *(_QWORD *)(v8 + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v5 + 16); ; i = *(_QWORD *)(v8 + 16) )
    {
      v8 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(_QWORD *)(v8 + 8) == v5 )
        break;
      v5 = v8;
    }
  }
  if ( v8 )
    v3 = *(_DWORD *)(v8 + 52);
  v10 = *(_DWORD *)(a1 + 140);
  if ( v3 > v10 )
    v10 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v10;
}
