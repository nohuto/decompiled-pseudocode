/*
 * XREFs of ?GetAllocationSection@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00D7414
 * Callers:
 *     ?VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002CDC0 (-VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_GLOBAL::GetAllocationSection(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  __int64 v2; // rbx
  void *result; // rax

  v2 = **(_QWORD **)a2;
  result = *(void **)(v2 + 376);
  if ( result )
  {
    ObfReferenceObject(*(PVOID *)(v2 + 376));
    return *(void **)(v2 + 376);
  }
  return result;
}
