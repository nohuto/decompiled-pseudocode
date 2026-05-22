/*
 * XREFs of ??1?$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A3E94
 * Callers:
 *     _CAnimationFrameStats::Create_::_1_::dtor$0 @ 0x1800B1DB6 (_CAnimationFrameStats--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180003D10 (-Release@CAnimationFrameStats@@UEAAKXZ.c)
 */

signed __int32 __fastcall wil::com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>::~com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>(
        CAnimationFrameStats **a1)
{
  CAnimationFrameStats *v1; // rcx
  signed __int32 result; // eax

  v1 = *a1;
  if ( v1 )
    return CAnimationFrameStats::Release(v1);
  return result;
}
