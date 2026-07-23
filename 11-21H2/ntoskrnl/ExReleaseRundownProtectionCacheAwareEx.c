/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0
 * Callers:
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_1402D2B6C @ 0x1402D2B6C (sub_1402D2B6C.c)
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403860B0 @ 0x1403860B0 (sub_1403860B0.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_14063129C @ 0x14063129C (sub_14063129C.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_140631710 @ 0x140631710 (sub_140631710.c)
 *     sub_140631A30 @ 0x140631A30 (sub_140631A30.c)
 *     sub_140634F90 @ 0x140634F90 (sub_140634F90.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_14079488C @ 0x14079488C (sub_14079488C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796C40 @ 0x140796C40 (sub_140796C40.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  v2 = (signed __int64 *)(*(_QWORD *)RunRef
                        + (unsigned int)(*((_DWORD *)RunRef + 4)
                                       * (HIDWORD(KeGetPcr()[1].LockArray) % *((_DWORD *)RunRef + 5))));
  _m_prefetchw(v2);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *v2;
      if ( (*v2 & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64(v2, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    v2 = *(signed __int64 **)RunRef;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
