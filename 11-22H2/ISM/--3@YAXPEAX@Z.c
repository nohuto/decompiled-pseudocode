/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180057AE4
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180057780 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180058464 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x1800DBA10 (_lambda_31685d6d76905a19580e009ac071d915_--_lambda_invoker_cdecl_.c)
 *     ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800DBEF0 (-FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800F5044 (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
