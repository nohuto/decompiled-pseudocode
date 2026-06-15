/*
 * XREFs of ??1CConnectionNode@@UEAA@XZ @ 0x1400101BC
 * Callers:
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x140010170 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CSharedHandle@@AEAAXXZ @ 0x14000DC50 (-Release@CSharedHandle@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CConnectionNode::~CConnectionNode(CConnectionNode *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CConnectionNode::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  CSharedHandle::Release((CConnectionNode *)((char *)this + 160));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 14);
}
