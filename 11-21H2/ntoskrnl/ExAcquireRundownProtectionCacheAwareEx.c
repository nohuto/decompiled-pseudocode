/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0
 * Callers:
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402D2BA0 @ 0x1402D2BA0 (sub_1402D2BA0.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_140631710 @ 0x140631710 (sub_140631710.c)
 *     sub_140634F40 @ 0x140634F40 (sub_140634F40.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 *     sub_1409EC2D0 @ 0x1409EC2D0 (sub_1409EC2D0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)(*(_QWORD *)RunRefCacheAware
                        + (unsigned int)(*((_DWORD *)RunRefCacheAware + 4)
                                       * (HIDWORD(KeGetPcr()[1].LockArray) % *((_DWORD *)RunRefCacheAware + 5))));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
