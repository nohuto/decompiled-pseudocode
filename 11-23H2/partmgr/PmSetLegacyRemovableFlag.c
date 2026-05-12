/*
 * XREFs of PmSetLegacyRemovableFlag @ 0x1C0002E64
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     ?IsContainer@SC_PART_ENTRY@@QEAAEXZ @ 0x1C000CBE8 (-IsContainer@SC_PART_ENTRY@@QEAAEXZ.c)
 */

__int64 __fastcall PmSetLegacyRemovableFlag(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  KSPIN_LOCK *v8; // rdi
  int v9; // ebp
  KIRQL v10; // r11
  SC_PART_ENTRY *v11; // r9
  SC_PART_ENTRY *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r10
  KIRQL v15; // al
  __int64 **v16; // rbx
  __int64 *i; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rdx

  v3 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 1) != 0 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 112);
    v9 = *(_DWORD *)(a1 + 512) & 0x800;
    *(_DWORD *)(a1 + 512) &= ~0x800u;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
    if ( *(_DWORD *)(a2 + 4) )
    {
      v11 = (SC_PART_ENTRY *)(a2 + 48);
      do
      {
        if ( !SC_PART_ENTRY::IsUnused(v11) && !SC_PART_ENTRY::IsContainer(v12) )
          ++v3;
        v11 = (SC_PART_ENTRY *)(v13 + 144);
      }
      while ( v14 != 1 );
    }
    KeReleaseSpinLock(v8, v10);
    if ( v3 == 1 )
    {
      if ( !a3 && !v9 )
        goto LABEL_12;
    }
    else if ( v3 )
    {
      goto LABEL_16;
    }
    *(_DWORD *)(a1 + 512) |= 0x800u;
LABEL_16:
    if ( v9 )
    {
      if ( (*(_DWORD *)(a1 + 512) & 0x800) != 0 )
        return 0LL;
      v18 = (__int64 *)(a1 + 896);
      if ( (__int64 *)*v18 == v18 )
        return 0LL;
      v15 = KeAcquireSpinLockRaiseToDpc(v8);
      v19 = (__int64 *)*v18;
      if ( !*(_QWORD *)(*v18 + 40) )
      {
        *((_DWORD *)v19 - 26) |= 4u;
        *((_DWORD *)v19 + 4) = 0;
      }
LABEL_23:
      KeReleaseSpinLock(v8, v15);
      return 0LL;
    }
LABEL_12:
    if ( (*(_DWORD *)(a1 + 512) & 0x800) == 0 )
      return 0LL;
    v15 = KeAcquireSpinLockRaiseToDpc(v8);
    v16 = (__int64 **)(a1 + 896);
    for ( i = *v16; i != (__int64 *)v16; i = (__int64 *)*i )
    {
      *((_DWORD *)i - 26) |= 4u;
      *((_DWORD *)i + 4) = 0;
    }
    goto LABEL_23;
  }
  return 0LL;
}
