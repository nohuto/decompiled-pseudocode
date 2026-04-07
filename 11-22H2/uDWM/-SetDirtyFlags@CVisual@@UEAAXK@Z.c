/*
 * XREFs of ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18004FAE0
 * Callers:
 *     _lambda_6990cc1065daf1bb2b53d774e458881b_::operator() @ 0x180065200 (_lambda_6990cc1065daf1bb2b53d774e458881b_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetDirtyFlags(CVisual *this, int a2)
{
  __int64 v2; // rbx

  if ( (a2 & *((_DWORD *)this + 22)) != a2 )
  {
    v2 = *((_QWORD *)this + 3);
    for ( *((_DWORD *)this + 22) |= a2; v2; v2 = *(_QWORD *)(v2 + 24) )
    {
      if ( (*(_BYTE *)(v2 + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    }
  }
}
