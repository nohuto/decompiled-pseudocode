/*
 * XREFs of ?LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@H@Z @ 0x1800FA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::LinkPrimitives(
        DirectComposition::CPrimitiveGroup *this,
        struct IDCompositionPrimitiveGroupPartner *a2,
        int a3)
{
  unsigned int v6; // edi
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *i; // rcx
  DirectComposition::CDeviceLock *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 6) + 96LL);
  DirectComposition::CDeviceLock::Enter(v15);
  v6 = 0;
  if ( a2 && *((_QWORD *)this + 6) == *((_QWORD *)a2 + 6) && a2 != this )
  {
    v7 = (char *)a2 + 64;
    v8 = *((_QWORD *)a2 + 8);
    if ( v8 )
    {
      do
      {
        (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 38) + 16LL))((char *)this + 304, v8 + 184);
        (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)a2 + 38) + 16LL))((char *)a2 + 304, v8 + 184);
        *(_QWORD *)(v8 + 64) = this;
        v8 = *(_QWORD *)(v8 + 56);
      }
      while ( v8 );
      v7 = (char *)a2 + 64;
    }
    v9 = 0LL;
    if ( a3 )
    {
      v10 = *(_QWORD *)v7;
      v11 = v7;
      while ( v10 )
      {
        v11 = (_QWORD *)(v10 + 56);
        v9 = v10;
        v10 = *(_QWORD *)(v10 + 56);
      }
      *v11 = *((_QWORD *)this + 8);
      v12 = *((_QWORD *)this + 8);
      if ( v12 )
        *(_QWORD *)(v12 + 48) = v9;
      if ( *(_QWORD *)v7 )
        *((_QWORD *)this + 8) = *(_QWORD *)v7;
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 64); *i; i = (_QWORD *)(*i + 56LL) )
        v9 = *i;
      *i = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 )
        *(_QWORD *)(*(_QWORD *)v7 + 48LL) = v9;
    }
    *(_QWORD *)v7 = 0LL;
    DirectComposition::CPrimitiveGroup::InvalidateRealization((DirectComposition::CDevice **)this);
    DirectComposition::CPrimitiveGroup::InvalidateRealization((DirectComposition::CDevice **)a2);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v15);
  return v6;
}
