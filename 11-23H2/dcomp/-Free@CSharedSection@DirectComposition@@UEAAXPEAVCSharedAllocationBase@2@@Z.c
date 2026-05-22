/*
 * XREFs of ?Free@CSharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z @ 0x18007CBB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSharedSection::Free(
        DirectComposition::CSharedSection *this,
        struct DirectComposition::CSharedAllocationBase *a2,
        __int64 a3)
{
  void *v4; // rcx
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    RtlFreeHeap(v4, 0, a2);
    --*((_QWORD *)this + 5);
  }
  else
  {
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(v4, "1", a3, 1LL, v5);
}
