/*
 * XREFs of LdrpLogNewDllLoad @ 0x18004CF3C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800B05A0 (LdrpLogNewDllLoadInternal.c)
 */

unsigned int *__fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned int *result; // rax
  char *v9; // rcx

  v4 = 0LL;
  v5 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476LL;
  v7 = 2147353477LL;
  if ( *(_BYTE *)v6 )
  {
    v9 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v9 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v5 = *((_QWORD *)result + 18) + 554LL;
  }
  if ( *(_BYTE *)v5 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v7 = *((_QWORD *)result + 18) + 555LL;
      }
      if ( (*(_BYTE *)v7 & 0x20) != 0 )
      {
LABEL_18:
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        return (unsigned int *)LdrpLogNewDllLoadInternal(
                                 *(_QWORD *)(a2 + 48),
                                 v4,
                                 *(unsigned int *)(a2 + 268),
                                 *(unsigned __int16 *)(a2 + 72),
                                 *(_QWORD *)(a2 + 80));
      }
    }
  }
  return result;
}
