/*
 * XREFs of ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x180105EC0
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800CA624 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualGroupProxy::Update(CVisualGroupProxy *this, struct CVisualProxy **a2, unsigned int a3)
{
  __int64 v3; // r9
  _DWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  _BYTE v8[112]; // [rsp+30h] [rbp-88h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v4 = v8;
    v5 = (unsigned int)v3;
    do
    {
      v6 = (__int64)*a2++;
      *v4++ = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
      --v5;
    }
    while ( v5 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                     + 552LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v8,
           v3);
}
