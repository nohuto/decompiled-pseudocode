/*
 * XREFs of LdrCreateEnclave @ 0x1800D8270
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1800A55C0 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D88EC (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800DC144 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int Enclave; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  Enclave = ZwCreateEnclave();
  if ( Enclave >= 0 )
  {
    if ( a6 - 16 > 1 || (Enclave = LdrpCreateSoftwareEnclave(v10, a4, a6), Enclave >= 0) )
      *a2 = v10;
    else
      ZwFreeVirtualMemory();
  }
  if ( a6 == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)Enclave);
  return (unsigned int)Enclave;
}
