/*
 * XREFs of PfSnAddProcessTrace @ 0x1402F60A8
 * Callers:
 *     PfSnActivateTrace @ 0x1402F5FE8 (PfSnActivateTrace.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x1402F5F70 (ExAcquireRundownProtectionEx.c)
 */

__int64 __fastcall PfSnAddProcessTrace(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN v4; // al
  unsigned int v5; // r8d

  if ( (*(_QWORD *)(a1 + 1536) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    return (unsigned int)-1073741791;
  }
  else
  {
    v4 = ExAcquireRundownProtectionEx(a2 + 45, 0x10u);
    v5 = 0;
    if ( v4 )
      *(_QWORD *)(a1 + 1536) = ((unsigned __int64)&a2[1].Ptr + 7) & -(__int64)(a2 != 0LL);
    else
      return (unsigned int)-1073741431;
  }
  return v5;
}
