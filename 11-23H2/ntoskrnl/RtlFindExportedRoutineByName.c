/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1406AD420
 * Callers:
 *     HalpMcResolveMicrocodeOperation @ 0x14051C16C (HalpMcResolveMicrocodeOperation.c)
 *     PrExtControlOperations @ 0x140615AD8 (PrExtControlOperations.c)
 *     MmGetSystemRoutineAddress @ 0x140756A60 (MmGetSystemRoutineAddress.c)
 *     MiCompactServiceTable @ 0x1407BCB74 (MiCompactServiceTable.c)
 *     MiCallDllInitialize @ 0x1408112CC (MiCallDllInitialize.c)
 *     KsepResolveShimHooks @ 0x14085BC18 (KsepResolveShimHooks.c)
 *     MiCallDllUnload @ 0x140865490 (MiCallDllUnload.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     PspInitializeSystemDlls @ 0x140B6735C (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MmDecodeExportSection @ 0x14034BC6C (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BE08 (MmEncodeExportSection.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v4; // rax
  char *v5; // r8
  char *v6; // rbx
  int v7; // r9d
  char *v8; // rbp
  char *v9; // r11
  int v10; // eax
  PCSTR v11; // rcx
  int v12; // edx
  signed __int64 v13; // rsi
  CHAR v14; // r10
  int v15; // ecx
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  Size = 0;
  if ( BaseOfImage == PsNtosImageBase )
    MmDecodeExportSection();
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = (char *)BaseOfImage + *((unsigned int *)v4 + 8);
    v9 = (char *)BaseOfImage + *((unsigned int *)v4 + 9);
    v10 = *((_DWORD *)v4 + 6) - 1;
    if ( v10 >= 0 )
    {
      do
      {
        v11 = RoutineName;
        v12 = (v7 + v10) >> 1;
        v13 = (_BYTE *)BaseOfImage + *(unsigned int *)&v8[4 * v12] - RoutineName;
        while ( 1 )
        {
          v14 = *v11;
          if ( *v11 != v11[v13] )
            break;
          ++v11;
          if ( !v14 )
          {
            v15 = 0;
            goto LABEL_9;
          }
        }
        v15 = *v11 < (unsigned int)v11[v13] ? -1 : 1;
LABEL_9:
        if ( v15 < 0 )
        {
          if ( !v12 )
            break;
          v10 = v12 - 1;
        }
        else
        {
          if ( v15 <= 0 )
          {
            if ( v10 >= v7 && (unsigned int)*(unsigned __int16 *)&v9[2 * v12] < *((_DWORD *)v5 + 5) )
            {
              v6 = (char *)BaseOfImage
                 + *(unsigned int *)((char *)BaseOfImage
                                   + 4 * *(unsigned __int16 *)&v9[2 * v12]
                                   + *((unsigned int *)v5 + 7));
              if ( v6 > v5 && v6 < &v5[Size] )
                v6 = 0LL;
            }
            break;
          }
          v7 = v12 + 1;
        }
      }
      while ( v10 >= v7 );
    }
  }
  if ( BaseOfImage == PsNtosImageBase )
    MmEncodeExportSection();
  return v6;
}
