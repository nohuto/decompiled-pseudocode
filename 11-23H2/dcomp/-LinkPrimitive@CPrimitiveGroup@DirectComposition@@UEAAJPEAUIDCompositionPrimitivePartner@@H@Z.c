/*
 * XREFs of ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x18003BAC0
 * Callers:
 *     ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438 (-EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ.c)
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::LinkPrimitive(
        DirectComposition::CPrimitiveGroup *this,
        struct IDCompositionPrimitivePartner *a2,
        int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  DirectComposition::CDeviceLock *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 6) + 96LL);
  DirectComposition::CDeviceLock::Enter(v10);
  v6 = 0;
  if ( !a2
    || *((_QWORD *)a2 + 8)
    || *((_QWORD *)a2 + 6)
    || *((_QWORD *)a2 + 7)
    || *((_QWORD *)a2 + 5) != *((_QWORD *)this + 6) )
  {
    v6 = -2147024809;
    goto LABEL_12;
  }
  v7 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 8) = this;
  (*(void (__fastcall **)(struct IDCompositionPrimitivePartner *))(v7 + 8))(a2);
  v8 = *((_QWORD *)this + 8);
  if ( a3 )
  {
    if ( v8 )
      *(_QWORD *)(v8 + 48) = a2;
    *((_QWORD *)a2 + 7) = *((_QWORD *)this + 8);
  }
  else
  {
    if ( v8 )
    {
      while ( *(_QWORD *)(v8 + 56) )
        v8 = *(_QWORD *)(v8 + 56);
    }
    *((_QWORD *)a2 + 6) = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 56) = a2;
      goto LABEL_11;
    }
  }
  *((_QWORD *)this + 8) = a2;
LABEL_11:
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)this + 38) + 16LL))((char *)this + 304, (char *)a2 + 184);
  DirectComposition::CPrimitiveGroup::InvalidateRealization(this);
LABEL_12:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v10);
  return v6;
}
