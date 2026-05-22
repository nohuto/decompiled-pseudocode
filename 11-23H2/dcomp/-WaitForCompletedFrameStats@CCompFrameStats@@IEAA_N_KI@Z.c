/*
 * XREFs of ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002B84
 * Callers:
 *     ?CollectStats@CCompFrameStats@@MEAAX_K@Z @ 0x1800026F0 (-CollectStats@CCompFrameStats@@MEAAX_K@Z.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 */

char __fastcall CCompFrameStats::WaitForCompletedFrameStats(CCompFrameStats *this, unsigned __int64 a2)
{
  unsigned int v4; // edi
  int FrameId; // eax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > *((_QWORD *)this + 16) )
  {
    v4 = 0;
    while ( 1 )
    {
      FrameId = NtDCompositionGetFrameId(2LL, &v6);
      if ( (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameId) >= 0 && v6 >= a2 )
        break;
      v4 += 5;
      if ( v4 > 0x32 )
        return 0;
      Sleep(5u);
    }
  }
  return 1;
}
