/*
 * XREFs of LdrLogNewDataDllLoad @ 0x180008C28
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800AD39E (LdrpLogNewDllLoadInternal.c)
 */

struct _PEB *__fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rbx
  struct _PEB *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8

  v9 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v10 = 2147353476LL;
  v11 = 2147353477LL;
  if ( *(_BYTE *)v10 )
  {
    v7 = (unsigned int)RtlGetCurrentServiceSessionId(v7, v6, v10, v8)
       ? (char *)NtCurrentPeb()->SharedData + 555
       : (char *)2147353477;
    if ( (*v7 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v7, v6, v10, v8);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v9 = (__int64)result->SharedData + 554;
  }
  if ( *(_BYTE *)v9 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v14, v13, v15, v16);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v11 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v11 & 0x20) != 0 )
      {
LABEL_18:
        v17 = -1LL;
        do
          ++v17;
        while ( *(_WORD *)(a2 + 2 * v17) );
        v18 = 2 * v17;
        v19 = 0xFFFFFFFFLL;
        if ( (a1 & 2) != 0 )
        {
          v19 = 5LL;
        }
        else if ( (a1 & 1) != 0 )
        {
          v19 = 6LL;
        }
        return (struct _PEB *)LdrpLogNewDllLoadInternal(a1, 0LL, v19, v18, a2);
      }
    }
  }
  return result;
}
