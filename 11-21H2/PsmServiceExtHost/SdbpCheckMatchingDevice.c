/*
 * XREFs of SdbpCheckMatchingDevice @ 0x180099A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // edi
  const char *v10; // r9
  int v11; // r8d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 1480);
  v7 = 0;
  *a1 = 0;
  if ( !v6 )
  {
    v10 = "No device query callback specified";
    v11 = 2045;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", v11, (_DWORD)v10);
    return v7;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
  {
    v10 = "Failed to read HWID attribute";
    v11 = 2051;
    goto LABEL_3;
  }
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v10 = "Failed to get HWID";
    v11 = 2057;
    goto LABEL_3;
  }
  v7 = 1;
  *a1 = v6(StringTagPtr);
  if ( a6 )
    *(_DWORD *)(a6 + 80) = 1;
  return v7;
}
