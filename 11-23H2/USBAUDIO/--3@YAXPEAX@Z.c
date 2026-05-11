/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C000B818
 * Callers:
 *     ??_GCSidebandDevice@@UEAAPEAXI@Z @ 0x1C000C070 (--_GCSidebandDevice@@UEAAPEAXI@Z.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00112C4 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ??_GCUnknown@@UEAAPEAXI@Z @ 0x1C00191E0 (--_GCUnknown@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePool(a1);
}
