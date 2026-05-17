/*
 * XREFs of LdrpLogNewDllLoad @ 0x18002D05C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800AD39E (LdrpLogNewDllLoadInternal.c)
 */

struct _PEB *__fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdi
  struct _PEB *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v9 = 0LL;
  v10 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v11 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v11 = 2147353476LL;
  v12 = 2147353477LL;
  if ( *(_BYTE *)v11 )
  {
    v7 = (unsigned int)RtlGetCurrentServiceSessionId(v7, v6, v11, v8)
       ? (char *)NtCurrentPeb()->SharedData + 555
       : (char *)2147353477;
    if ( (*v7 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v7, v6, v11, v8);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->SharedData + 554;
  }
  if ( *(_BYTE *)v10 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v15, v14, v16, v17);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v12 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v12 & 0x20) != 0 )
      {
LABEL_18:
        if ( a1 )
          v9 = *(_QWORD *)(a1 + 48);
        return (struct _PEB *)LdrpLogNewDllLoadInternal(
                                *(_QWORD *)(a2 + 48),
                                v9,
                                *(unsigned int *)(a2 + 268),
                                *(unsigned __int16 *)(a2 + 72),
                                *(_QWORD *)(a2 + 80));
      }
    }
  }
  return result;
}
