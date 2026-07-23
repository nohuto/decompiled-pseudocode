/*
 * XREFs of PspInitializeSystemDlls @ 0x140B6735C
 * Callers:
 *     PspInitPhase2 @ 0x140B67208 (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD420 (RtlFindExportedRoutineByName.c)
 *     PsQuerySystemDllInfo @ 0x14076F3A4 (PsQuerySystemDllInfo.c)
 *     PspWow64GetSharedInformation @ 0x14084D438 (PspWow64GetSharedInformation.c)
 */

char *PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rsi
  __int64 v4; // r15
  unsigned int i; // ebp
  char *ExportedRoutineByName; // rax
  char **v7; // rcx

  v0 = 0;
  v1 = &qword_140B9E418;
  do
  {
    result = (char *)PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0; i < *(_DWORD *)v1; *v7 = result )
      {
        ExportedRoutineByName = (char *)RtlFindExportedRoutineByName(*((PVOID *)v3 + 4), *(PCSTR *)(v4 + 16LL * i));
        if ( !ExportedRoutineByName )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        result = &ExportedRoutineByName[*((_QWORD *)v3 + 3) - *((_QWORD *)v3 + 4)];
        v7 = *(char ***)(v4 + 16LL * i++ + 8);
      }
      if ( v0 == 1 )
      {
        result = (char *)PspWow64GetSharedInformation(1);
        *((_QWORD *)result + 6) = *((_QWORD *)v3 + 3);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 7 );
  return result;
}
