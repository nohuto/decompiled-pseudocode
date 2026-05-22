/*
 * XREFs of ??1?$com_ptr_t@VCInteractionFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51AC
 * Callers:
 *     _CInteractionFrameStats::Create_::_1_::dtor$0 @ 0x1801A5688 (_CInteractionFrameStats--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180003D50 (-Release@CCompFrameStats@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CInteractionFrameStats,wil::err_returncode_policy>::~com_ptr_t<CInteractionFrameStats,wil::err_returncode_policy>(
        CCompFrameStats **a1)
{
  CCompFrameStats *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CCompFrameStats::Release(v1);
  return result;
}
