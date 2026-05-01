/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18074006C
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18073FE4C (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801542E4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  NTSTATUS v7; // esi
  unsigned int v8; // edi
  unsigned __int16 *v9; // rbp
  int v10; // r14d
  HANDLE v11; // r15
  signed int LastError; // eax
  int v13; // ebx
  __int16 v14; // r8
  __int64 v15; // rcx
  _WORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // eax
  ULONG ProcessInformationLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ProcessInformationLength = 512;
  v7 = -1073741820;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v10 = 1;
  v11 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v11 )
    goto LABEL_8;
  LastError = GetLastError();
  v13 = LastError;
  if ( LastError > 0 )
    v13 = (unsigned __int16)LastError | 0x80070000;
  if ( v13 >= 0 )
  {
    v4 = 0;
    while ( 1 )
    {
LABEL_8:
      if ( v4 >= 2 )
        goto LABEL_15;
      if ( ProcessInformationLength > 0x10000 )
        goto LABEL_12;
      operator delete[](v9);
      v9 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v9 )
        break;
      ++v4;
      v7 = NtQueryInformationProcess(
             v11,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v9,
             ProcessInformationLength,
             &ProcessInformationLength);
      if ( v7 != -1073741820 )
      {
LABEL_12:
        if ( v7 >= 0 )
        {
          v13 = 0;
          v14 = 34;
          v15 = *v9 >> 1;
          v9[v15 + 8] = 0;
          if ( v9[8] != 34 )
            v14 = 32;
          if ( (unsigned int)v15 > 1 )
          {
            v16 = v9 + 9;
            while ( 1 )
            {
              v17 = (unsigned int)(v10 + 1);
              if ( *v16 == v14 )
                break;
              ++v16;
              ++v10;
              if ( (unsigned int)v17 >= (unsigned int)v15 )
                goto LABEL_30;
            }
            v8 = v15 - v10;
            v18 = (char *)&v9[v17 + 8];
            if ( v18 && v8 )
            {
              do
              {
                if ( *(_WORD *)v18 != 32 )
                  break;
                v18 += 2;
                --v8;
              }
              while ( v8 );
              v19 = *(unsigned int *)a3;
              v20 = v19 - 1;
              if ( v8 < (int)v19 - 1 )
                v20 = v8;
              v8 = v20;
              v13 = StringCchCopyNW(a2, v19, v18, v20);
            }
          }
LABEL_30:
          *(_DWORD *)a3 = v8;
          goto LABEL_31;
        }
LABEL_15:
        v13 = v7 | 0x10000000;
        goto LABEL_31;
      }
    }
    v7 = -1073741801;
    goto LABEL_15;
  }
LABEL_31:
  operator delete[](v9);
  if ( v11 )
    CloseHandle(v11);
  return (unsigned int)v13;
}
