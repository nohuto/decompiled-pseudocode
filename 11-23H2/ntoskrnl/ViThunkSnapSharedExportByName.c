/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x140ABD184
 * Callers:
 *     ViThunkSnapSharedExports @ 0x140ABD0D4 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x1403D9930 (_stricmp.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(char *BaseOfImage, const char **a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // r12
  const char *v10; // rdi
  __int64 *v11; // r14
  char *v12; // rdi
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)(a3 + 8) = -1;
  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 1u, &Size);
  v8 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, &Size);
  v9 = v8;
  if ( v7 && v8 )
  {
    while ( v7[3] && *v7 )
    {
      v10 = &BaseOfImage[v7[3]];
      if ( !stricmp(v10, "ntoskrnl.exe") || !stricmp(v10, "hal.dll") )
      {
        v11 = (__int64 *)&BaseOfImage[*v7];
        v12 = &BaseOfImage[v7[4]];
        while ( *v11 )
        {
          if ( *v11 >= 0 && !stricmp(&BaseOfImage[*v11 + 2], *a2) )
          {
            *(_QWORD *)a3 = v12;
            v3 = 1;
            *(_QWORD *)(a3 + 16) = a2;
            *(_DWORD *)(a3 + 8) = (unsigned __int64)(v12 - v9) >> 3;
            return v3;
          }
          ++v11;
          v12 += 8;
        }
      }
      v7 += 5;
    }
  }
  return v3;
}
