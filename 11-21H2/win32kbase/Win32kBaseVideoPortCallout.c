/*
 * XREFs of Win32kBaseVideoPortCallout @ 0x1C00D4DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     VideoPortCallout @ 0x1C00D4DF0 (VideoPortCallout.c)
 */

__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v5);
  VideoPortCallout(a1);
  CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v5, v2, v3);
  return 0LL;
}
