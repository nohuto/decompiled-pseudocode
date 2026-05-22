/*
 * XREFs of ?Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x1800B57C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::Link(
        DirectComposition::CPrimitive *this,
        struct IDCompositionPrimitivePartner *a2,
        int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DirectComposition::CDeviceLock *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 5) + 96LL);
  DirectComposition::CDeviceLock::Enter(v13);
  v6 = 0;
  if ( !*((_QWORD *)this + 8) && a2 && (v7 = *((_QWORD *)a2 + 8)) != 0 && *((_QWORD *)a2 + 5) == *((_QWORD *)this + 5) )
  {
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 8) = v7;
    (*(void (__fastcall **)(DirectComposition::CPrimitive *))(v8 + 8))(this);
    if ( a3 )
    {
      *((_QWORD *)this + 6) = a2;
      *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
    }
    else
    {
      *((_QWORD *)this + 7) = a2;
      *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
      v9 = *((_QWORD *)this + 8);
      if ( *(struct IDCompositionPrimitivePartner **)(v9 + 64) == a2 )
        *(_QWORD *)(v9 + 64) = this;
    }
    v10 = *((_QWORD *)this + 6);
    if ( v10 )
      *(_QWORD *)(v10 + 56) = this;
    v11 = *((_QWORD *)this + 7);
    if ( v11 )
      *(_QWORD *)(v11 + 48) = this;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 8) + 304LL) + 16LL))(
      *((_QWORD *)this + 8) + 304LL,
      (char *)this + 184);
    DirectComposition::CPrimitiveGroup::InvalidateRealization(*((DirectComposition::CDevice ***)this + 8));
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v13);
  return v6;
}
