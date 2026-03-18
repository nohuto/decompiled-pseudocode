/*
 * XREFs of CmpCopyCompressedName @ 0x140718AE8
 * Callers:
 *     CmpInitializeValueNameString @ 0x14065DBC8 (CmpInitializeValueNameString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpMarkIndexDirty @ 0x140715A2C (CmpMarkIndexDirty.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x1407185B4 (CmpAddSubKeyToList.c)
 *     CmpQueryKeyValueData @ 0x1407C5730 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407C8830 (CmpConstructNameFromKeyNodes.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpInitializeKeyNameString @ 0x14091F960 (CmpInitializeKeyNameString.c)
 *     CmpPopulateKeyBasicInformation @ 0x140924594 (CmpPopulateKeyBasicInformation.c)
 *     CmpGetNodeName @ 0x140B14558 (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
