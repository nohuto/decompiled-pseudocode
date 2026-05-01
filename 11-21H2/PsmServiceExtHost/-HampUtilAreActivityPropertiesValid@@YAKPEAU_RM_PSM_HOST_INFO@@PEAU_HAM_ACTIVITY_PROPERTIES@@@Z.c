/*
 * XREFs of ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180023470
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x180023614 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800237C4 (-HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HampUtilAreActivityPropertiesValid(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // edx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *((_DWORD *)a1 + 134) == 2 )
  {
    v4 = v3 >> 23;
  }
  else
  {
    if ( (v3 & 0x400) != 0 )
      return 0LL;
    v4 = v3 >> 23;
    if ( ((v3 >> 23) & 3) > 1 )
      return 0LL;
  }
  if ( (v4 & 3) == 0 || (v3 & 0x2000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 68);
    if ( *((_DWORD *)a2 + 67) == 5 )
    {
      if ( v7 )
        return 0LL;
    }
    else if ( (unsigned int)(v7 - 10) > 0x122 || (v5 & 0x404) != 0 || (v6 & 0x20C) != 0 )
    {
      return 0LL;
    }
    if ( ((v6 & 0x200) == 0 || (v3 & 0x2000000) != 0)
      && ((v6 & 0xC) == 0 || (v3 & 0x2000000) == 0)
      && (v3 & 0x7F) <= 0x40
      && (v3 & 0x180) < 0x180
      && (v3 & 0x2400) != 0x400
      && ((v3 & 0x180) == 0 || (v5 & 0x200) == 0)
      && (v3 & 0x1400) != 0x1400
      && (v3 & 0xC00) != 0xC00
      && (v3 & 0x100400) != 0x100000 )
    {
      if ( HampUtilCheckStartAndRevokeFlags(a2) )
      {
        RtlInitializeBitMap(&BitMapHeader, (PULONG)a2 + 96, 0x2Fu);
        if ( !RtlNumberOfSetBits(&BitMapHeader) )
        {
          if ( (unsigned int)RmpResourceSetPropertyOverridesAreSupported((char *)a2 + 280) )
            return 1LL;
        }
      }
    }
  }
  return 0LL;
}
