/*
 * XREFs of IommupHvFlushDeviceDomainVaList @ 0x14052504C
 * Callers:
 *     IommuFlushDomainVaList @ 0x140935920 (IommuFlushDomainVaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvFlushDeviceDomainVaList(int a1, char a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  LODWORD(v5) = a1;
  BYTE4(v5) = a2;
  return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64))qword_140C626A8)(&v5, a3, a4);
}
