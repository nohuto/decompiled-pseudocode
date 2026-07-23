/*
 * XREFs of PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099BB98
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 > 6 )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( !v1 && *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PopAcquireAdaptiveLock(1);
    qword_140D53298 = ((unsigned __int8)qword_140D53298 ^ (unsigned __int8)*(_DWORD *)(a1 + 12)) & 7 ^ (unsigned __int64)qword_140D53298;
    qword_140D53298 = qword_140D53298 & 0xFFFFFFFFFFFFFFF7uLL | (*(_BYTE *)(a1 + 8) != 0 ? 8 : 0);
    PopReleaseAdaptiveLock();
  }
  return v3;
}
