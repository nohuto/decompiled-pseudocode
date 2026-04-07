/*
 * XREFs of ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x1800027E0
 * Callers:
 *     ?StopCollection@CCompFrameStats@@UEAAXXZ @ 0x180002760 (-StopCollection@CCompFrameStats@@UEAAXXZ.c)
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180006A30 (-Release@CCompFrameStats@@UEAAKXZ.c)
 *     ?Invalidate@CCompFrameStats@@IEAAXXZ @ 0x18010AB50 (-Invalidate@CCompFrameStats@@IEAAXXZ.c)
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
    v1 = *((_QWORD *)this + 4) - 1LL;
    *((_BYTE *)this + 13) = 1;
    if ( v1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v2 = (void *)*((_QWORD *)this + 5);
      DueTime.QuadPart = 0LL;
      SetWaitableTimer(v2, &DueTime, 0, 0LL, 0LL, 0);
    }
  }
}
