/*
 * XREFs of ?InsertChild@CVisualProxy@@QEAAJPEAV1@0_N@Z @ 0x180055084
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800361DC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualProxy::InsertChild(
        CVisualProxy *this,
        struct CVisualProxy *a2,
        struct CVisualProxy *a3,
        char a4)
{
  unsigned int v4; // eax

  v4 = 0;
  if ( a3 )
    v4 = *(_DWORD *)(*((_QWORD *)a3 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 400LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL),
           v4,
           a4);
}
