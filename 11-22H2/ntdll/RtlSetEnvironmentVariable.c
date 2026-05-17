/*
 * XREFs of RtlSetEnvironmentVariable @ 0x180058F90
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x180057B04 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x180058E4C (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 */

__int64 __fastcall RtlSetEnvironmentVariable(void **a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  const void *v3; // r9
  unsigned __int64 v4; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v3 = (const void *)*((_QWORD *)a3 + 1);
    v4 = (unsigned __int64)*a3 >> 1;
  }
  else
  {
    v4 = 0LL;
  }
  return RtlSetEnvironmentVar(a1, *((_WORD **)a2 + 1), (unsigned __int64)*a2 >> 1, v3, v4);
}
