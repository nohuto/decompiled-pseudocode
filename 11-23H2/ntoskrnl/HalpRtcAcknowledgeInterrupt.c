/*
 * XREFs of HalpRtcAcknowledgeInterrupt @ 0x14051FF10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpRtcStop @ 0x140520160 (HalpRtcStop.c)
 */

__int64 __fastcall HalpRtcAcknowledgeInterrupt(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rax
  __int64 result; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = (*a1)-- == 1LL;
  v4 = 0;
  if ( v1 )
  {
    v2 = a1[1];
    if ( v2 )
      *a1 = v2;
    else
      HalpRtcStop();
  }
  else
  {
    LOBYTE(a1) = 1;
    ((void (__fastcall *)(_QWORD *))qword_140D0E068)(a1);
  }
  do
    result = ((__int64 (__fastcall *)(_QWORD, __int64, char *))HalpTimerRtcApi)(0LL, 12LL, &v4);
  while ( v4 < 0 );
  return result;
}
