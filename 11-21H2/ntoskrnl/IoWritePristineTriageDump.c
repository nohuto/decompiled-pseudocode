/*
 * XREFs of IoWritePristineTriageDump @ 0x140553968
 * Callers:
 *     KiCaptureDumpPreRecovery @ 0x140579060 (KiCaptureDumpPreRecovery.c)
 * Callees:
 *     IoFillDumpHeader @ 0x140551F78 (IoFillDumpHeader.c)
 *     IopCollectTriageDumpData @ 0x1405540DC (IopCollectTriageDumpData.c)
 */

__int64 __fastcall IoWritePristineTriageDump(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // ebp

  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( KiPristineTriageDump )
    IoFillDumpHeader((_DWORD *)KiPristineTriageDump, 4, a1, a2, a3, a4, a5, a7);
  return IopCollectTriageDumpData(a1, v10, v9, v8, a5, a6, a7, a8);
}
