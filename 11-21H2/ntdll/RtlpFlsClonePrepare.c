/*
 * XREFs of RtlpFlsClonePrepare @ 0x180117F9C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFlsClonePrepare(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 result; // rax

  v4 = qword_18017ABE8;
  v5 = 1;
  while ( 1 )
  {
    if ( v5 <= v4 )
    {
      v6 = v5 + 16;
      v7 = v4 - v5 + 1;
      v5 = v4 + 1;
      do
      {
        _BitScanReverse(&v8, v6);
        v9 = v6 ^ (1 << v8);
        v10 = *((_QWORD *)&RtlpFlsContext + v8 - 3);
        if ( v10 )
          v11 = v10 + 8 * ((unsigned int)v9 + 2 * v9 + 1);
        else
          v11 = 0LL;
        RtlAcquireSRWLockExclusive(v11, v9, v10, a4);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, a2, a3, a4);
    result = qword_18017ABE8;
    if ( (unsigned int)qword_18017ABE8 <= v4 )
      break;
    v4 = qword_18017ABE8;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  return result;
}
