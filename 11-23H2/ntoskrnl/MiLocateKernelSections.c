/*
 * XREFs of MiLocateKernelSections @ 0x140B5D2D4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140B5CCDC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 */

PIMAGE_NT_HEADERS __fastcall MiLocateKernelSections(__int64 a1)
{
  char *v1; // rbx
  PIMAGE_NT_HEADERS result; // rax
  int NumberOfSections; // r8d
  unsigned int *v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  char *v7; // rcx

  v1 = *(char **)(a1 + 48);
  result = RtlImageNtHeader(v1);
  NumberOfSections = result->FileHeader.NumberOfSections;
  v4 = (unsigned int *)((char *)&result->OptionalHeader.Magic + result->FileHeader.SizeOfOptionalHeader);
  if ( result->FileHeader.NumberOfSections )
  {
    do
    {
      result = (PIMAGE_NT_HEADERS)*v4;
      v5 = v4[4];
      v6 = v4[2];
      if ( (_DWORD)result == 1987011374 || (_DWORD)result == 1953655086 )
      {
        LODWORD(MiFlags) = MiFlags | 0x400;
      }
      else if ( (_DWORD)result == 1280266064 )
      {
        v7 = &v1[v4[3]];
        if ( v4[1] == 1162104643 )
        {
          ExPoolCodeStart = (__int64)&v1[v4[3]];
          if ( v5 < v6 )
            v5 = v6;
          result = (PIMAGE_NT_HEADERS)v5;
          ExPoolCodeEnd = ((unsigned __int64)&v7[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL) - 1;
        }
      }
      --NumberOfSections;
      v4 += 10;
    }
    while ( NumberOfSections > 0 );
  }
  return result;
}
