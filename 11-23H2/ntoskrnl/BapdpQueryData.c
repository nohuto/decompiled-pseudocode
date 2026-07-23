/*
 * XREFs of BapdpQueryData @ 0x140B4FC2C
 * Callers:
 *     BapdpProcessSpacesBootInformation @ 0x140383CD8 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x140383DA0 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B4D960 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B4D9F0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B4DA80 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B4DB68 (BapdpProcessBootMetadata.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessResumeInformation @ 0x140B4F684 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B4F758 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessHSTIResults @ 0x140B4F82C (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B4F900 (BapdpRegisterWbclData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // rdx
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140D160F0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_140D160F0 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v12 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    return 0LL;
  }
  else
  {
    *a5 = v12;
    return 3221225507LL;
  }
}
