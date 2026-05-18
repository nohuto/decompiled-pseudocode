/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18000258C
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180002248 (--3@YAXPEAX_K@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800030E0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180003350 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
