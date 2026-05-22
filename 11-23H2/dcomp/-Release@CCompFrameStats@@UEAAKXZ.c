/*
 * XREFs of ?Release@CCompFrameStats@@UEAAKXZ @ 0x180003D50
 * Callers:
 *     ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180003D10 (-Release@CAnimationFrameStats@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCInteractionFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51AC (--1-$com_ptr_t@VCInteractionFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z @ 0x1801A55D4 (-Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z.c)
 *     ?Release@CInteractionFrameStats@@UEAAKXZ @ 0x1801A59D0 (-Release@CInteractionFrameStats@@UEAAKXZ.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x180006644 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::Release(CCompFrameStats *this)
{
  unsigned __int32 v2; // esi
  char *v4; // rcx
  DWORD ThreadId; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 == 1 )
  {
    if ( !*((_BYTE *)this + 13) )
    {
      v4 = (char *)*((_QWORD *)this + 7);
      if ( (unsigned __int64)(v4 - 1) > 0xFFFFFFFFFFFFFFFDuLL
        || (ThreadId = GetThreadId(v4), ThreadId != GetCurrentThreadId()) )
      {
        CCompFrameStats::Shutdown(this);
      }
    }
  }
  else if ( !v2 && this )
  {
    (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 200LL))(this);
  }
  return v2;
}
