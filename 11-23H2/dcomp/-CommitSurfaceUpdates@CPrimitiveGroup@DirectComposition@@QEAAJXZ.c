/*
 * XREFs of ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ @ 0x1800F9AD8
 * Callers:
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 * Callees:
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ @ 0x1800FBA18 (-FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::CommitSurfaceUpdates(DirectComposition::CPrimitiveGroup *this)
{
  int v2; // ebx
  _QWORD *v3; // rdi
  DirectComposition::CBitmapInfoFront *v4; // rax
  DirectComposition::CBitmapInfoFront *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  DirectComposition::CSurfaceFactory *Next; // rdi

  v2 = 0;
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 8);
    while ( v3 )
    {
      v4 = (DirectComposition::CBitmapInfoFront *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 80LL))(v3);
      v5 = (DirectComposition::CBitmapInfoFront *)v3[13];
      if ( v4 )
        v2 = DirectComposition::CBitmapInfoFront::CommitUpdate(v4);
      if ( v2 >= 0 && v5 )
        v2 = DirectComposition::CBitmapInfoFront::CommitUpdate(v5);
      v3 = (_QWORD *)v3[7];
      if ( v2 < 0 )
        return (unsigned int)v2;
    }
    v6 = *((_QWORD *)this + 6);
    v2 = 0;
    v7 = v6 + 616;
    v8 = v6 + 608;
    v9 = *(_QWORD *)(v6 + 616);
    Next = (DirectComposition::CSurfaceFactory *)(v9 - 288);
    if ( v9 == v7 )
      Next = 0LL;
    do
    {
      if ( !Next )
        break;
      v2 = DirectComposition::CSurfaceFactory::FlushGutterExtensions(Next);
      Next = (DirectComposition::CSurfaceFactory *)CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                                                     v8,
                                                     (__int64)Next);
    }
    while ( v2 >= 0 );
  }
  return (unsigned int)v2;
}
