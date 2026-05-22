/*
 * XREFs of ?RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ @ 0x180003718
 * Callers:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::RemoveFromPrimitiveGroup(DirectComposition::CPrimitive *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  DirectComposition::CDeviceLock *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 5) + 96LL);
  DirectComposition::CDeviceLock::Enter(v8);
  v2 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v3 = *((_QWORD *)this + 7);
    v4 = (char *)this + 48;
    if ( v3 )
      *(_QWORD *)(v3 + 48) = *(_QWORD *)v4;
    v5 = *((_QWORD *)this + 7);
    if ( *(_QWORD *)v4 )
      *(_QWORD *)(*(_QWORD *)v4 + 56LL) = v5;
    else
      *(_QWORD *)(*((_QWORD *)this + 8) + 64LL) = v5;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 8) + 304LL) + 16LL))(
      *((_QWORD *)this + 8) + 304LL,
      (char *)this + 184);
    DirectComposition::CPrimitiveGroup::InvalidateRealization(*((DirectComposition::CPrimitiveGroup **)this + 8));
    v6 = *(_QWORD *)this;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(DirectComposition::CPrimitive *))(v6 + 16))(this);
  }
  else
  {
    v2 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  return v2;
}
