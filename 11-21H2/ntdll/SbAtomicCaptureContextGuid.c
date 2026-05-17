/*
 * XREFs of SbAtomicCaptureContextGuid @ 0x180052308
 * Callers:
 *     SbpUpdateCache @ 0x1800523C0 (SbpUpdateCache.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall SbAtomicCaptureContextGuid(int a1, _OWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  char *v6; // rbx
  _DWORD *pShimData; // rdx
  __int128 v8; // xmm0
  __int128 v10; // xmm0

  v3 = 0;
  v6 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v6 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v6 = 0LL;
  }
  if ( a2 && a3 && v6 )
  {
    if ( !a1 )
    {
      v10 = *((_OWORD *)v6 + 3);
      *a3 = *(_QWORD *)v6;
      *a2 = v10;
      return 1;
    }
    if ( a1 == 1 )
    {
      RtlAcquireSRWLockShared(&SbpContextLock);
      v8 = *((_OWORD *)v6 + 4);
      *a3 = *(_QWORD *)v6;
      *a2 = v8;
      RtlReleaseSRWLockShared(&SbpContextLock);
      return 1;
    }
  }
  return v3;
}
