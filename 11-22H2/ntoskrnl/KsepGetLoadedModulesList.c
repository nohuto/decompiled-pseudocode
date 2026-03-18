/*
 * XREFs of KsepGetLoadedModulesList @ 0x14080AEDC
 * Callers:
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085BCB0 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140209EA8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140209ED0 (KsepPoolAllocatePaged.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
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
