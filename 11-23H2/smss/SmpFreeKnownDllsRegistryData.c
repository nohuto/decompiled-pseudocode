/*
 * XREFs of SmpFreeKnownDllsRegistryData @ 0x1400119F0
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140008C00 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x140001200 (SmpFreeSavedRegistryEntry.c)
 */

__int64 SmpFreeKnownDllsRegistryData()
{
  __int64 *v0; // rbx
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rcx

  v0 = (__int64 *)SmpKnownDllsList;
  while ( v0 != &SmpKnownDllsList )
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    result = SmpFreeSavedRegistryEntry(v1);
  }
  v3 = (__int64 *)SmpExcludeKnownDllsList;
  while ( v3 != &SmpExcludeKnownDllsList )
  {
    v4 = v3;
    v3 = (__int64 *)*v3;
    result = SmpFreeSavedRegistryEntry(v4);
  }
  return result;
}
