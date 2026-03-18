/*
 * XREFs of IommupHvAttachPasidSubDeviceDomain @ 0x14052476C
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14050DE00 (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvAttachPasidSubDeviceDomain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v5; // ebx

  v2 = *(_QWORD *)(a1 + 16);
  v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62690)(*(_QWORD *)(v2 + 32), *(unsigned int *)(a1 + 48));
  if ( v5 >= 0 )
  {
    v5 = qword_140C62670(0LL, *(unsigned int *)(a1 + 48), a2 | 1);
    if ( v5 < 0 )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_140C62698)(*(_QWORD *)(v2 + 32), *(unsigned int *)(a1 + 48));
  }
  return (unsigned int)v5;
}
