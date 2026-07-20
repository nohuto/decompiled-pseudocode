/*
 * XREFs of SmpFreeSavedRegistryEntry @ 0x140001200
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpFreeKnownDllsRegistryData @ 0x1400119F0 (SmpFreeKnownDllsRegistryData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpFreeSavedRegistryEntry(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  return SmpDeallocSavedRegistryEntry(a1);
}
