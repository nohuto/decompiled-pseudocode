/*
 * XREFs of ?Free@CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z @ 0x1800ECBA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSection::Free(
        DirectComposition::CCrossContainerHostReadOnlySharedSection *this,
        DirectComposition::CCrossContainerHostReadOnlySharedSection **a2,
        __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 && a2[6] == this )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer((__int64)this, (const EVENT_DESCRIPTOR *)"1", a3, 1u, &v3);
  }
}
