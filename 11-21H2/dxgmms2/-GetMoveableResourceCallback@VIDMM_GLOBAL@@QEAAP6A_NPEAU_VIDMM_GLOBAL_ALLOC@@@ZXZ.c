/*
 * XREFs of ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00D75E4
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00E8C60 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00EA548 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ECA28 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     <none>
 */

bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(struct _VIDMM_GLOBAL_ALLOC *)
{
  bool (__fastcall *result)(struct _VIDMM_GLOBAL_ALLOC *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2745LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL) + 152LL) != 1 )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  return result;
}
