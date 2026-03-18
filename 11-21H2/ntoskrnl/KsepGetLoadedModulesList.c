/*
 * XREFs of KsepGetLoadedModulesList @ 0x140825DCC
 * Callers:
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1409646B4 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1402D84BC (KsepPoolAllocatePaged.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(int **a1)
{
  unsigned int i; // edi
  int *Paged; // rax
  int *v4; // rbx
  int SystemInformation; // eax
  int v6; // ebp
  unsigned int v7; // edi

  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v6 + 8 )
  {
    Paged = (int *)KsepPoolAllocatePaged(i);
    v4 = Paged;
    if ( !Paged )
      break;
    SystemInformation = ZwQuerySystemInformation(11LL, (__int64)Paged);
    v6 = *v4;
    v7 = SystemInformation;
    if ( SystemInformation >= 0 )
    {
      *a1 = v4;
      return v7;
    }
    if ( SystemInformation != -1073741820 )
    {
      KsepPoolFreePaged(v4);
      return v7;
    }
    KsepPoolFreePaged(v4);
  }
  return (unsigned int)-1073741670;
}
