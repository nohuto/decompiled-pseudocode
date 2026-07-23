/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140864DC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x140870A60 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( *a2 == 1 )
    {
      if ( !byte_140C3D9B4 )
      {
        v5 = 1;
        byte_140C3D9B4 = 1;
      }
    }
    else if ( !*a2 && byte_140C3D9B4 )
    {
      v5 = 1;
      byte_140C3D9B4 = 0;
    }
    PopReleaseRwLock(&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
