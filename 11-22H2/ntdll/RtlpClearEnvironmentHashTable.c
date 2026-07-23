/*
 * XREFs of RtlpClearEnvironmentHashTable @ 0x18006C27C
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x18008DF50 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 RtlpClearEnvironmentHashTable()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx
  __int64 result; // rax
  void *v3; // r8
  __int64 *i; // rcx

  v0 = (__int64 *)qword_180184AA8;
  qword_180184AB8 = 0LL;
  v1 = qword_180184AA8;
  byte_180184AB0 = 0;
  while ( v1 )
  {
    v1 = *(_QWORD *)v1;
    if ( (v1 & 1) != 0 )
      break;
LABEL_4:
    result = v1;
    if ( !v1 )
      return result;
    v3 = (void *)v1;
    for ( i = v0; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( *i == v1 )
      {
        *i = *(_QWORD *)v1;
        --RtlpEnvironmentHashTable;
        *(_QWORD *)v1 |= 0x8000000000000002uLL;
        v1 = (__int64)i;
        goto LABEL_9;
      }
    }
    v3 = 0LL;
LABEL_9:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  ++v0;
  result = qword_180184AA8;
  while ( (unsigned __int64)v0 < qword_180184AA8 + 8 * ((unsigned __int64)(unsigned int)dword_180184AA4 >> 5) )
  {
    v1 = *v0;
    if ( (*v0 & 1) == 0 )
      goto LABEL_4;
    ++v0;
  }
  return result;
}
