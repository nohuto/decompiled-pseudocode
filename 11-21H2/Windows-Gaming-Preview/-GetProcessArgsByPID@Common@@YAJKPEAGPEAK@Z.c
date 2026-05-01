/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x180044A00
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047218 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  char *v5; // rdi
  NTSTATUS v6; // ebp
  unsigned int v7; // esi
  unsigned __int16 *v8; // r14
  HANDLE v9; // r15
  signed int LastError; // eax
  signed int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int16 v14; // r9
  int v15; // ecx
  _WORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r8
  signed __int64 v22; // rdx
  __int16 v23; // ax
  char *v24; // rax
  ULONG ProcessInformationLength; // [rsp+68h] [rbp+10h] BYREF

  ProcessInformationLength = 512;
  v5 = a2;
  v6 = -1073741820;
  v7 = 0;
  v8 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v9 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v9 )
    goto LABEL_16;
  LastError = GetLastError();
  v11 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v11 = LastError;
  if ( v11 >= 0 )
  {
LABEL_16:
    v12 = 0;
    while ( v12 < 2 && ProcessInformationLength <= 0x10000 )
    {
      operator delete[](v8);
      v8 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v8 )
      {
        v6 = -1073741801;
        break;
      }
      ++v12;
      v6 = NtQueryInformationProcess(
             v9,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v8,
             ProcessInformationLength,
             &ProcessInformationLength);
      if ( v6 != -1073741820 )
        break;
    }
    v11 = 0;
    if ( v6 < 0 )
      v11 = v6 | 0x10000000;
    if ( v11 >= 0 )
    {
      v13 = *v8 >> 1;
      v14 = 32;
      v8[v13 + 8] = 0;
      v15 = 1;
      if ( v8[8] == 34 )
        v14 = 34;
      if ( (unsigned int)v13 <= 1 )
        goto LABEL_42;
      v16 = v8 + 9;
      while ( 1 )
      {
        v17 = (unsigned int)(v15 + 1);
        if ( *v16 == v14 )
          break;
        ++v16;
        ++v15;
        if ( (unsigned int)v17 >= (unsigned int)v13 )
          goto LABEL_42;
      }
      v7 = v13 - v15;
      v18 = (char *)&v8[v17 + 8];
      if ( !v18 || !v7 )
        goto LABEL_42;
      do
      {
        if ( *(_WORD *)v18 != 32 )
          break;
        v18 += 2;
        --v7;
      }
      while ( v7 );
      v19 = *(unsigned int *)a3;
      v20 = v19 - 1;
      if ( v7 < (int)v19 - 1 )
        v20 = v7;
      v7 = v20;
      if ( (unsigned __int64)(v19 - 1) > 0x7FFFFFFE )
      {
        v11 = -2147024809;
        if ( !*(_DWORD *)a3 )
        {
LABEL_42:
          *(_DWORD *)a3 = v7;
          goto LABEL_43;
        }
      }
      else
      {
        if ( v20 <= 0x7FFFFFFEuLL )
        {
          v21 = v20 - v19;
          v22 = v18 - v5;
          do
          {
            if ( !(v21 + v19) )
              break;
            v23 = *(_WORD *)&v5[v22];
            if ( !v23 )
              break;
            *(_WORD *)v5 = v23;
            v5 += 2;
            --v19;
          }
          while ( v19 );
          v24 = v5 - 2;
          if ( v19 )
            v24 = v5;
          v11 = v19 == 0 ? 0x8007007A : 0;
          *(_WORD *)v24 = 0;
          goto LABEL_42;
        }
        v11 = -2147024809;
      }
      *(_WORD *)v5 = 0;
      goto LABEL_42;
    }
  }
LABEL_43:
  operator delete[](v8);
  if ( v9 )
    CloseHandle(v9);
  return (unsigned int)v11;
}
