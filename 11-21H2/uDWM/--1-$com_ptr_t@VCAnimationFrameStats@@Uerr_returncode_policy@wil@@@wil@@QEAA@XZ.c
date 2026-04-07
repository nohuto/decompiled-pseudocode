/*
 * XREFs of ??1?$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18010A8B0
 * Callers:
 *     _CAnimationFrameStats::Create_::_1_::dtor$0 @ 0x180064982 (_CAnimationFrameStats--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180006A30 (-Release@CCompFrameStats@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>::~com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>(
        CCompFrameStats **a1)
{
  CCompFrameStats *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CCompFrameStats::Release(v1);
  return result;
}
