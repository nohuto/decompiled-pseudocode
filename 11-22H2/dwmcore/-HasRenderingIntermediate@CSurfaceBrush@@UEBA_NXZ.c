/*
 * XREFs of ?HasRenderingIntermediate@CSurfaceBrush@@UEBA_NXZ @ 0x180252B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::HasRenderingIntermediate(CSurfaceBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, 202LL) != 0;
  return v2;
}
