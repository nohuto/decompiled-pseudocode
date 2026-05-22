/*
 * XREFs of ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180003D10
 * Callers:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z @ 0x180003E78 (-Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z.c)
 *     ?Release@CAnimationFrameStats@@WKA@EAAKXZ @ 0x1800B1720 (-Release@CAnimationFrameStats@@WKA@EAAKXZ.c)
 *     ??1?$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A3E94 (--1-$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??_ECAnimationFrameStats@@MEAAPEAXI@Z @ 0x180004020 (--_ECAnimationFrameStats@@MEAAPEAXI@Z.c)
 */

signed __int32 __fastcall CAnimationFrameStats::Release(CAnimationFrameStats *this)
{
  signed __int32 v2; // ebx

  if ( !*((_BYTE *)this + 2805) )
    return CCompFrameStats::Release(this);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
    CAnimationFrameStats::`vector deleting destructor'(this, 1u);
  return v2;
}
