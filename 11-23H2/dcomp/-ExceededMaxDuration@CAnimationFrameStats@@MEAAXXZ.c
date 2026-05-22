/*
 * XREFs of ?ExceededMaxDuration@CAnimationFrameStats@@MEAAXXZ @ 0x180006570
 * Callers:
 *     <none>
 * Callees:
 *     ?FrameIdFromTime@CCompFrameStats@@IEBA_K_K@Z @ 0x180006614 (-FrameIdFromTime@CCompFrameStats@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationFrameStats::ExceededMaxDuration(CAnimationFrameStats *this, __int64 a2, __int64 a3)
{
  CAnimationFrameStats *v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // rax

  v3 = this;
  if ( *((_BYTE *)this + 2805) )
  {
    v4 = *((unsigned int *)this + 700);
    if ( (_DWORD)v4 )
    {
      v7 = CCompFrameStats::FrameIdFromTime(this, *((_QWORD *)this + 4) + *((_QWORD *)this + 2) * v4 / 0x3E8uLL);
      *((_QWORD *)v3 + 14) = v7;
    }
    v5 = CCompFrameStats::FrameIdFromTime(
           v3,
           *((_QWORD *)v3 + 4) + *((_QWORD *)v3 + 2) * (unsigned __int64)*((unsigned int *)v3 + 10) / 0x3E8);
    v6[15] = v5;
    if ( v5 < v6[14] )
      (*(void (**)(void))(*v6 + 216LL))();
  }
  else
  {
    (*(void (__fastcall **)(CAnimationFrameStats *, __int64, __int64, CAnimationFrameStats *))(*(_QWORD *)this + 216LL))(
      this,
      a2,
      a3,
      this);
  }
}
