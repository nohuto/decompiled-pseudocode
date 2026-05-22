/*
 * XREFs of ?HandleSurfaceHidden@CYCbCrBitmapInfo@DirectComposition@@UEAAJXZ @ 0x1800FEEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CYCbCrBitmapInfo::HandleSurfaceHidden(DirectComposition::CYCbCrBitmapInfo *this)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *((_BYTE *)this + 68) &= ~1u;
  return result;
}
