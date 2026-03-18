/*
 * XREFs of ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x1C036EA90
 * Callers:
 *     ??_EDXGK_VIRTUAL_GPU_PARAV@@EEAAPEAXI@Z @ 0x1C005B580 (--_EDXGK_VIRTUAL_GPU_PARAV@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C005B54C (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(DXGK_VIRTUAL_GPU_PARAV *this)
{
  CDriverStoreCopy *v2; // rcx

  *(_QWORD *)this = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 2));
  v2 = (CDriverStoreCopy *)*((_QWORD *)this + 42);
  if ( v2 )
    CDriverStoreCopy::`scalar deleting destructor'(v2);
  operator delete(*((void **)this + 29));
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
}
