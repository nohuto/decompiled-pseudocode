/*
 * XREFs of NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400018A0
 * Callers:
 *     NtProcessStartupW @ 0x140001880 (NtProcessStartupW.c)
 * Callees:
 *     wmain @ 0x140001BC0 (wmain.c)
 */

NTSTATUS __fastcall NtProcessStartupW_AfterSecurityCookieInitialized(__int64 a1)
{
  NTSTATUS v2; // ebx
  struct _RTL_USER_PROCESS_PARAMETERS *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  PRTL_USER_PROCESS_PARAMETERS v6; // r12
  int v7; // eax
  unsigned int v8; // edi
  UNICODE_STRING *p_CommandLine; // r14
  wint_t *Buffer; // r15
  int Length; // ebp
  wint_t *v12; // rbx
  PWSTR Environment; // rcx
  int v14; // edx
  __int64 v16; // rcx
  __int64 v17; // rbx
  SIZE_T v18; // rsi
  char **Heap; // rax
  char **v20; // r14
  char *v21; // rbx
  char *v22; // rdi
  unsigned int v23; // r12d
  char *v24; // rsi
  _QWORD *v25; // r14
  PWSTR v26; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *v29; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+80h] [rbp+8h]
  ULONG DebugFlags; // [rsp+88h] [rbp+10h]
  __int64 *v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(struct _RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v33 = 0LL;
  DebugFlags = 0;
  v4 = 0LL;
  v6 = RtlNormalizeProcessParams(v3);
  v29 = v6;
  v30 = 0;
  v32 = &v33;
  v7 = 1;
  v8 = 1;
  p_CommandLine = 0LL;
  Buffer = 0LL;
  Length = 0;
  if ( v6 )
  {
    p_CommandLine = &v6->CommandLine;
    DebugFlags = v6->DebugFlags;
    if ( v6->CommandLine.Buffer && p_CommandLine->Length
      || (p_CommandLine = &v6->ImagePathName, v6->ImagePathName.Buffer) )
    {
      Length = p_CommandLine->Length;
      Buffer = p_CommandLine->Buffer;
      if ( p_CommandLine->Length )
      {
        do
        {
          if ( !*Buffer || !Length )
            break;
          while ( *Buffer )
          {
            if ( iswspace(*Buffer) )
            {
              ++Buffer;
              Length -= 2;
              if ( Length )
                continue;
            }
            if ( !Length )
              goto LABEL_16;
            break;
          }
          if ( *Buffer )
          {
            ++v8;
            v12 = Buffer;
            do
            {
              ++Buffer;
              Length -= 2;
            }
            while ( Length && !iswspace(*Buffer) );
            v4 += 2 * (Buffer - v12) + 2;
          }
        }
        while ( Length );
LABEL_16:
        v2 = 0;
      }
    }
    Environment = v6->Environment;
    v14 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v14;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v7 = v14 + 1;
  }
  v16 = v8 + v7;
  if ( (unsigned int)v16 > 2 )
  {
    if ( v8 > 1 )
    {
      Buffer = p_CommandLine->Buffer;
      Length = p_CommandLine->Length;
    }
    v17 = v16;
    v18 = 8 * v16 + v4;
    Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v18);
    v20 = Heap;
    if ( Heap )
    {
      v32 = (__int64 *)Heap;
      if ( v8 > 1 )
      {
        v21 = (char *)&Heap[v17];
        v22 = (char *)Heap + v18;
        if ( Length )
        {
          v23 = 0;
          do
          {
            if ( v21 >= v22 || !*Buffer )
              break;
            while ( *Buffer )
            {
              if ( iswspace(*Buffer) )
              {
                ++Buffer;
                Length -= 2;
                if ( Length )
                  continue;
              }
              if ( !Length )
                goto LABEL_43;
              break;
            }
            if ( *Buffer )
            {
              *v20++ = v21;
              ++v23;
              do
              {
                v24 = v21;
                *(_WORD *)v21 = *Buffer++;
                v21 += 2;
                Length -= 2;
                if ( !Length )
                  break;
                if ( v21 >= v22 )
                  goto LABEL_62;
              }
              while ( !iswspace(*Buffer) );
              if ( v21 < v22 )
              {
                *(_WORD *)v21 = 0;
                v21 += 2;
                continue;
              }
LABEL_62:
              v21 = v24;
              *(_WORD *)v24 = 0;
            }
          }
          while ( Length );
LABEL_43:
          v30 = v23;
          v6 = v29;
        }
      }
      v2 = 0;
      *v20 = 0LL;
      v25 = v20 + 1;
      v26 = v6->Environment;
      if ( v26 && *v26 )
      {
        do
        {
          *v25++ = v26++;
          while ( *v26++ )
            ;
        }
        while ( *v26 );
      }
      *v25 = 0LL;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  if ( DebugFlags )
    __debugbreak();
  if ( v2 >= 0 )
    v2 = wmain(v30, v32, v5, DebugFlags);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2);
}
