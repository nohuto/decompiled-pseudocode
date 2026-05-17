/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18000D0B0
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x18000B5E4 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18000CD80 (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 */

__int64 __fastcall RtlSetEnvironmentVariable(int a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax

  LODWORD(v3) = 0;
  if ( a3 )
  {
    v3 = *((_QWORD *)a3 + 1);
    v4 = (unsigned __int64)*a3 >> 1;
  }
  else
  {
    v4 = 0LL;
  }
  return RtlSetEnvironmentVar(a1, *((_QWORD *)a2 + 1), (unsigned __int64)*a2 >> 1, v3, v4);
}
