/*
 * XREFs of ?Unlink@CPrimitive@DirectComposition@@UEAAJXZ @ 0x18003C2B0
 * Callers:
 *     ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ @ 0x18003C1F8 (-RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::Unlink(DirectComposition::CPrimitive *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  DirectComposition::CDeviceLock *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 5) + 96LL);
  DirectComposition::CDeviceLock::Enter(v9);
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
    *(_QWORD *)v4 = 0LL;
    v6 = *((_QWORD *)this + 8) + 304LL;
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 16LL))(v6, (char *)this + 184);
    DirectComposition::CPrimitiveGroup::InvalidateRealization(*((DirectComposition::CDevice ***)this + 8));
    v7 = *(_QWORD *)this;
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(DirectComposition::CPrimitive *))(v7 + 16))(this);
  }
  else
  {
    v2 = -2147467259;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return v2;
}
