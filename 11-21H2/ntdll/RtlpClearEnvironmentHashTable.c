/*
 * XREFs of RtlpClearEnvironmentHashTable @ 0x180025C30
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x18008A170 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180093280 (RtlSetCurrentEnvironment.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 RtlpClearEnvironmentHashTable()
{
  __int64 *v0; // rbx
  __int64 *i; // rdi
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  void *v4; // r8

  v0 = (__int64 *)qword_18017A868;
  qword_18017A878 = 0LL;
  i = (__int64 *)qword_18017A868;
  byte_18017A870 = 0;
  while ( 1 )
  {
    if ( !i )
      goto LABEL_6;
    result = *i;
    if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      result = *i;
    if ( (result & 1) != 0 )
    {
LABEL_6:
      ++v0;
      result = qword_18017A868;
      v3 = qword_18017A868 + 8 * ((unsigned __int64)(unsigned int)dword_18017A864 >> 5);
      if ( (unsigned __int64)v0 >= v3 )
        return result;
      while ( 1 )
      {
        result = *v0;
        if ( (*v0 & 1) == 0 )
          break;
        if ( (unsigned __int64)++v0 >= v3 )
          return result;
      }
    }
    if ( !result )
      return result;
    for ( i = v0; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( *i == result )
      {
        v4 = (void *)result;
        *i = *(_QWORD *)result;
        --RtlpEnvironmentHashTable;
        *(_QWORD *)result |= 0x8000000000000002uLL;
        goto LABEL_13;
      }
    }
    v4 = 0LL;
    i = (__int64 *)result;
LABEL_13:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
}
