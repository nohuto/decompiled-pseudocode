/*
 * XREFs of ?Release@CCompFrameStats@@UEAAKXZ @ 0x180006A30
 * Callers:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 *     ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180006A20 (-Release@CAnimationFrameStats@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18010A8B0 (--1-$com_ptr_t@VCAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x1800027E0 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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
      v4 = (char *)*((_QWORD *)this + 4);
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
