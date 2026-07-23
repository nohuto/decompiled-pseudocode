/*
 * XREFs of EtwpInitializeLoggerSecurityDescriptor @ 0x1407E5FAC
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpInitializeLoggerSecurityDescriptor(__int64 a1, __int16 *a2)
{
  int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v5, 0x10u);
  if ( v3 >= 0 )
  {
    if ( v5 )
      *(_QWORD *)(a1 + 784) = v5 + 15;
    else
      *(_QWORD *)(a1 + 784) = 0LL;
  }
  return (unsigned int)v3;
}
