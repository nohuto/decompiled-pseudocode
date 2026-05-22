/*
 * XREFs of ?WaitForBatchConfirmation@CTouchFrameStats@@IEAA_KKI@Z @ 0x1801A9590
 * Callers:
 *     ?CollectStats@CTouchFrameStats@@MEAAX_K@Z @ 0x1801A8350 (-CollectStats@CTouchFrameStats@@MEAAX_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchFrameStats::WaitForBatchConfirmation(CTouchFrameStats *this, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 21) )
    return 0LL;
  v6 = 0LL;
  v4 = 0;
  while ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 21) + 64LL))(
            *((_QWORD *)this + 21),
            a2,
            &v6) < 0 )
  {
    v4 += 5;
    if ( v4 > 0x32 )
      return 0LL;
    Sleep(5u);
  }
  return v6;
}
