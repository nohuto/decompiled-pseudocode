/*
 * XREFs of ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x180006644
 * Callers:
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180003D50 (-Release@CCompFrameStats@@UEAAKXZ.c)
 *     ?StopCollection@CCompFrameStats@@UEAAX_K@Z @ 0x1800064E0 (-StopCollection@CCompFrameStats@@UEAAX_K@Z.c)
 *     ?Invalidate@CCompFrameStats@@MEAAXXZ @ 0x1801A4060 (-Invalidate@CCompFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompFrameStats::Shutdown(CCompFrameStats *this)
{
  unsigned __int64 v1; // rax
  void *v2; // rcx
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 13) )
  {
    v1 = *((_QWORD *)this + 7) - 1LL;
    *((_BYTE *)this + 13) = 1;
    if ( v1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v2 = (void *)*((_QWORD *)this + 8);
      DueTime.QuadPart = 0LL;
      SetWaitableTimer(v2, &DueTime, 0, 0LL, 0LL, 0);
    }
  }
}
