/*
 * XREFs of SdbpCheckMatchingDevice @ 0x1800947C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // edi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 1744);
  v7 = 0;
  *a1 = 0;
  if ( v6 )
  {
    FirstTag = SdbFindFirstTag(a3, a5, 24577LL, a4);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
      if ( StringTagPtr )
      {
        v7 = 1;
        *a1 = v6(StringTagPtr);
        if ( a6 )
          *(_DWORD *)(a6 + 80) = 1;
      }
      else
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", 2263, (unsigned int)"Failed to get HWID");
      }
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", 2257, (unsigned int)"Failed to read HWID attribute");
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingDevice",
      2251,
      (unsigned int)"No device query callback specified");
  }
  return v7;
}
