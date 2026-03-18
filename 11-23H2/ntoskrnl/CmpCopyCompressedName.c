/*
 * XREFs of CmpCopyCompressedName @ 0x140708CB0
 * Callers:
 *     CmpQueryKeyValueData @ 0x1406DCDD0 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD5C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpPopulateKeyNodeInformation @ 0x140707448 (CmpPopulateKeyNodeInformation.c)
 *     CmAddLogForAction @ 0x140707948 (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x140708464 (CmpInitializeValueNameString.c)
 *     CmpAddSubKeyToList @ 0x1407087D4 (CmpAddSubKeyToList.c)
 *     CmpMarkIndexDirty @ 0x14070C058 (CmpMarkIndexDirty.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A16F68 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x140A21F54 (CmpInitializeKeyNameString.c)
 *     CmpPopulateKeyBasicInformation @ 0x140A2A094 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140B5AC84 (CmpGetNodeName.c)
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
