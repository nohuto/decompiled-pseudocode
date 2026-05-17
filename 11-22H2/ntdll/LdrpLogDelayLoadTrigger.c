/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x1800161B8
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001626C (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C450 (RtlInitAnsiString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpGetDelayloadAPIInfo @ 0x180086498 (LdrpGetDelayloadAPIInfo.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     sprintf_s @ 0x18009A220 (sprintf_s.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     LdrpEventAddAnsiString @ 0x1800AD2CA (LdrpEventAddAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800AD32E (LdrpEventAddUnicodeString.c)
 */

struct _PEB *__fastcall LdrpLogDelayLoadTrigger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct _PEB *result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r13
  unsigned int v21; // esi
  unsigned int v22; // r15d
  struct _PEB *v23; // r14
  unsigned int v24; // esi
  __int64 v25; // rbx
  unsigned int v26; // esi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // [rsp+30h] [rbp-39h] BYREF
  int v33; // [rsp+34h] [rbp-35h] BYREF
  char *v34; // [rsp+38h] [rbp-31h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  STRING v36; // [rsp+50h] [rbp-19h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-9h] BYREF

  v4 = a4;
  v11 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v12 = 2147353476LL;
  v13 = 2147353477LL;
  if ( *(_BYTE *)v12 )
  {
    v12 = (unsigned int)RtlGetCurrentServiceSessionId(v12, v8, v9, v10)
        ? (__int64)NtCurrentPeb()->SharedData + 555
        : 2147353477LL;
    if ( (*(_BYTE *)v12 & 0x10) != 0 )
      goto LABEL_19;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v12, v8, v9, v10);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v18 = (__int64)result->SharedData + 554;
  }
  else
  {
    v18 = 2147353476LL;
  }
  if ( *(_BYTE *)v18 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v18, v15, v16, v17);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v13 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v13 & 0x20) != 0 )
      {
LABEL_19:
        v34 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitAnsiString(&DestinationString, v34);
        LdrpGetDelayloadAPIInfo(a1, a2, v4, (unsigned int)&v34, (__int64)&v33);
        v19 = v34;
        if ( !v34 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v33);
          v19 = Buffer;
        }
        RtlInitAnsiString(&v36, v19);
        v20 = a1 + 72;
        v21 = *(unsigned __int16 *)(a1 + 72)
            + *(unsigned __int16 *)(a3 + 72)
            + 2 * (DestinationString.Length + v36.Length + 4);
        v22 = v21 + 36;
        result = (struct _PEB *)RtlAllocateHeap(
                                  NtCurrentPeb()->ProcessHeap,
                                  (unsigned int)(NtdllBaseTag + 1572864),
                                  v21 + 36);
        v23 = result;
        if ( result )
        {
          LODWORD(result->ProcessParameters) = 3;
          *(_WORD *)&result->Padding0[2] = 5334;
          LdrpEventAddUnicodeString(v20, (char *)&result->ProcessParameters + 4, v21, &v32);
          v24 = v21 - v32;
          v25 = (__int64)&v23->ProcessParameters + v32 + 4;
          LdrpEventAddUnicodeString(a3 + 72, v25, v24, &v32);
          v26 = v24 - v32;
          v27 = v32 + v25;
          LdrpEventAddAnsiString(&DestinationString, v27, v26, &v32);
          LdrpEventAddAnsiString(&v36, v27 + v32, v26 - v32, &v32);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28, v30, v31) )
            v11 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v11, 1026LL, v22 - 32, v23);
          return (struct _PEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v23);
        }
      }
    }
  }
  return result;
}
