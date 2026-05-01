/*
 * XREFs of SdbpCheckBackupApplicationAttributes @ 0x180052B40
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052568 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 */

__int64 __fastcall SdbpCheckBackupApplicationAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( !(unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
    return 1LL;
  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(ULONGLONG **)(a6 + 96));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
