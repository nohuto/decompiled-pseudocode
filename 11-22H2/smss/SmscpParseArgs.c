/*
 * XREFs of SmscpParseArgs @ 0x140006130
 * Callers:
 *     SmscMain @ 0x1400048D8 (SmscMain.c)
 * Callees:
 *     SmpGetFirstSessionId @ 0x1400063F4 (SmpGetFirstSessionId.c)
 *     SmscpSetupSharedSpace @ 0x140006428 (SmscpSetupSharedSpace.c)
 *     SmscpIsDebuggerPresent @ 0x14001B160 (SmscpIsDebuggerPresent.c)
 */

__int64 __fastcall SmscpParseArgs(unsigned int a1, __int64 a2, _DWORD *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 result; // rax
  int FirstSessionId; // eax
  int v13; // edx
  unsigned int v14; // r8d
  char v15; // cl
  ULONG v16; // ecx
  int v17; // eax
  int Length; // ecx
  PCWSTR *v19; // r14
  WCHAR *Heap; // rax
  NTSTATUS v21; // eax
  const UNICODE_STRING *v22; // rdx
  struct _UNICODE_STRING *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r15
  ULONG BufferSize; // ebx
  unsigned __int64 v30; // rcx
  WCHAR *v31; // rax
  int IsDebuggerPresent; // eax
  int v33; // eax
  ULONG v34; // r8d
  _DWORD SystemInformation[4]; // [rsp+30h] [rbp-10h] BYREF
  ULONG RetunedLength; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0LL;
  if ( a1 <= 2 )
    return 3221225711LL;
  *a3 = 0;
  v9 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v10 = wcstoul(*(const wchar_t **)(a2 + 16), 0LL, 16);
  result = SmscpSetupSharedSpace(v10, v9);
  if ( (int)result >= 0 )
  {
    FirstSessionId = SmpGetFirstSessionId();
    v13 = 0;
    if ( *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == FirstSessionId )
      v13 = 8;
    v14 = v13 | *a3 & 0xFFFFFFF7;
    *a3 = v14;
    v15 = v14 ^ (4 * *(_DWORD *)SmpMappedView);
    RetunedLength = 0;
    *a3 = v14 ^ v15 & 4;
    v16 = 0;
    if ( a1 > 3 )
    {
      v24 = (_QWORD *)(a2 + 24);
      v25 = a1 - 3;
      do
      {
        v26 = -1LL;
        do
          ++v26;
        while ( *(_WORD *)(*v24 + 2 * v26) );
        ++v24;
        v16 += 2 * v26 + 2;
        RetunedLength = v16;
        --v25;
      }
      while ( v25 );
      if ( v16 )
      {
LABEL_11:
        v19 = (PCWSTR *)(a2 + 24);
        Heap = (WCHAR *)RtlAllocateHeap(
                          *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                          SmBaseTag + 786432,
                          v16);
        a4->Buffer = Heap;
        if ( Heap )
        {
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          if ( (*(_BYTE *)a3 & 2) == 0 )
          {
            v27 = a1 - 1;
            if ( (unsigned int)v27 > 3 )
            {
              v28 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v19);
                RtlAppendUnicodeToString(a4, L" ");
                ++v19;
                --v28;
              }
              while ( v28 );
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v27));
            return 0LL;
          }
          if ( (*(_BYTE *)a3 & 1) == 0 )
          {
            v22 = &SmpS0InitCmd;
            v23 = a4;
            if ( (*(_BYTE *)a3 & 8) == 0 )
              v22 = (const UNICODE_STRING *)&SmscpInitExecuteCmd;
            goto LABEL_18;
          }
          v21 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v21 != -2147483643 )
          {
LABEL_15:
            if ( v21 >= 0 )
            {
              v34 = RetunedLength & 0xFFFFFFFE;
              RetunedLength = v34;
              if ( v34 > 2 && !a4->Buffer[((unsigned __int64)v34 >> 1) - 1] )
              {
                v34 -= 2;
                RetunedLength = v34;
              }
              a4->Length = v34;
              RtlAppendUnicodeToString(a4, L" ");
              goto LABEL_17;
            }
LABEL_16:
            if ( (*(_BYTE *)a3 & 8) != 0
              && NtQuerySystemInformation(SystemFlagsInformation, SystemInformation, 4u, 0LL) >= 0
              && (SystemInformation[0] & 0x4000004) != 0 )
            {
              IsDebuggerPresent = SmscpIsDebuggerPresent();
              if ( IsDebuggerPresent >= 0 )
              {
                RtlAppendUnicodeStringToString(a4, &stru_14001CD40);
                v33 = SystemInformation[0];
                if ( (SystemInformation[0] & 0x20000) != 0 )
                {
                  RtlAppendUnicodeStringToString(a4, &stru_14001CD30);
                  v33 = SystemInformation[0];
                }
                if ( (v33 & 0x4000000) != 0 )
                  RtlAppendUnicodeStringToString(a4, &stru_14001CD20);
              }
            }
LABEL_17:
            v22 = v8;
            v23 = a4;
LABEL_18:
            RtlAppendUnicodeStringToString(v23, v22);
            return 0LL;
          }
          BufferSize = RetunedLength;
          v30 = RetunedLength + v8->MaximumLength + 2LL;
          if ( v30 <= RetunedLength || v30 > 0xFFFE )
            goto LABEL_16;
          RetunedLength += v8->MaximumLength + 2;
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
          v31 = (WCHAR *)RtlAllocateHeap(
                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                           SmBaseTag + 786432,
                           RetunedLength);
          a4->Buffer = v31;
          if ( v31 )
          {
            a4->MaximumLength = RetunedLength;
            v21 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, v31, BufferSize, &RetunedLength);
            goto LABEL_15;
          }
        }
        return 3221225495LL;
      }
    }
    v17 = *a3;
    if ( (*a3 & 8) != 0 )
    {
      Length = SmpS0InitCmd.Length;
      if ( (v17 & 4) != 0 )
        goto LABEL_10;
      Length = SmpS0InitCmd.Length + 50;
      v8 = &SmpS0InitCmd;
    }
    else
    {
      Length = (unsigned __int16)SmscpInitExecuteCmd;
      if ( SmscpInitExecuteCmd )
      {
LABEL_10:
        v16 = Length + 2;
        *a3 = v17 | 2;
        RetunedLength = v16;
        goto LABEL_11;
      }
      Length = 74;
      v8 = (UNICODE_STRING *)&SmscpDefaultCmd;
    }
    v17 |= 1u;
    goto LABEL_10;
  }
  return result;
}
