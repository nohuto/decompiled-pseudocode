/*
 * XREFs of MiProbeLeafFrame @ 0x140247F34
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140385584 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x14023C9F8 (MiFaultInProbeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageLeafPageTable @ 0x14031BF80 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x14031C5D0 (MiSetProbePagesAhead.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = (_QWORD *)(a1 + 48);
  v3 = ((__int64 (*)(void))MiLockPageLeafPageTable)();
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v5);
    if ( (int)result < 0 )
      break;
    if ( !v5 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v5 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C52A74;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
