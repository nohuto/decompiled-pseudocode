/*
 * XREFs of ?SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z @ 0x1800F9690
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::SplitGroup(
        DirectComposition::CPrimitive *this,
        int a2,
        struct IDCompositionPrimitiveGroupPartner **a3)
{
  __int64 v6; // rcx
  int v7; // r14d
  DirectComposition::CPrimitiveGroup *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rbp
  DirectComposition::CPrimitiveGroup *v13; // [rsp+50h] [rbp+8h] BYREF
  DirectComposition::CDeviceLock *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 5) + 96LL);
  DirectComposition::CDeviceLock::Enter(v14);
  if ( *((_QWORD *)this + 8) && a3 )
  {
    v6 = *((_QWORD *)this + 5);
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CPrimitiveGroup **))(*(_QWORD *)(v6 + 24) + 96LL))(
           v6 + 24,
           &v13);
    if ( v7 >= 0 )
    {
      v8 = v13;
      if ( a2 )
      {
        *((_QWORD *)v13 + 8) = *((_QWORD *)this + 7);
        v9 = *((_QWORD *)this + 7);
        if ( v9 )
          *(_QWORD *)(v9 + 48) = 0LL;
        *((_QWORD *)this + 7) = 0LL;
      }
      else
      {
        *((_QWORD *)v13 + 8) = this;
        v10 = *((_QWORD *)this + 6);
        if ( v10 )
        {
          *(_QWORD *)(v10 + 56) = 0LL;
          *((_QWORD *)this + 6) = 0LL;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 8) + 64LL) = 0LL;
        }
      }
      for ( i = *((_QWORD *)v8 + 8); i; i = *(_QWORD *)(i + 56) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(i + 64) + 304LL) + 16LL))(
          *(_QWORD *)(i + 64) + 304LL,
          i + 184);
        *(_QWORD *)(i + 64) = v8;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 38) + 16LL))((__int64)v8 + 304, i + 184);
      }
      DirectComposition::CPrimitiveGroup::InvalidateRealization(*((DirectComposition::CDevice ***)this + 8));
      DirectComposition::CPrimitiveGroup::InvalidateRealization((DirectComposition::CDevice **)v8);
      *a3 = v8;
    }
  }
  else
  {
    v7 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v14);
  return (unsigned int)v7;
}
