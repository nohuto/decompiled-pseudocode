/*
 * XREFs of PspInitializeSystemDlls @ 0x140B24D94
 * Callers:
 *     PspInitPhase2 @ 0x140B24C44 (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspWow64GetSharedInformation @ 0x140672A64 (PspWow64GetSharedInformation.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 */

unsigned __int64 PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int i; // ebp
  unsigned __int64 ExportedRoutineByName; // rax
  _QWORD *v7; // rcx

  v0 = 0;
  v1 = &qword_140B57E88;
  do
  {
    result = (unsigned __int64)PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0; i < *(_DWORD *)v1; *v7 = *(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 32) + ExportedRoutineByName )
      {
        ExportedRoutineByName = RtlFindExportedRoutineByName(*(_QWORD *)(v3 + 32), *(char **)(v4 + 16LL * i));
        if ( !ExportedRoutineByName )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        v7 = *(_QWORD **)(v4 + 16LL * i++ + 8);
      }
      result = (unsigned int)(v0 - 1);
      if ( (unsigned int)result <= 1 )
      {
        result = (unsigned __int64)PspWow64GetSharedInformation(v0);
        *(_QWORD *)(result + 48) = *(_QWORD *)(v3 + 24);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 6 );
  return result;
}
