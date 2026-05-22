/*
 * XREFs of ?RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z @ 0x1800F3FD0
 * Callers:
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ @ 0x18002E8C4 (-UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 */

void __fastcall DirectComposition::CDevice::RemoveDeadSurfaces(
        DirectComposition::CDevice *this,
        struct DirectComposition::SurfaceRequestStruct *a2)
{
  int v4; // eax
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  char *v8; // rbp
  bool v9; // si
  DirectComposition::CSurfaceFactory *Next; // rbx

  if ( (int)DirectComposition::CDevice::UpdateLastConfirmedBatchId(this) >= 0 )
  {
    v4 = *((_DWORD *)this + 105);
    v5 = *((_DWORD *)this + 106);
    v6 = v4 == v5;
    if ( v4 == v5 )
    {
      if ( a2 )
        return;
      v6 = v4 == v5;
    }
    *((_DWORD *)this + 106) = v4;
    v7 = *((_QWORD *)this + 77);
    v8 = (char *)this + 608;
    v9 = !v6;
    v6 = v7 == (_QWORD)this + 616;
    Next = (DirectComposition::CSurfaceFactory *)(v7 - 288);
    if ( v6 )
      Next = 0LL;
    for ( ;
          Next;
          Next = (DirectComposition::CSurfaceFactory *)CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                                                         (__int64)v8,
                                                         (__int64)Next) )
    {
      DirectComposition::CSurfaceFactory::RemoveDeadSurfaces(Next, a2, v9);
    }
  }
}
