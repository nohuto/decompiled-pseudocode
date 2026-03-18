/*
 * XREFs of ACPIGetConvertToHardwareID @ 0x1C005616C
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x1C001C598 (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC (ACPIGetConvertToHardwareIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareID(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  int v6; // edi
  unsigned int v7; // ebx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = ACPIGetConvertToHardwareIDWide(a1, a2, a3, a4, a5, (int *)v9);
  if ( v6 >= 0 )
  {
    v7 = v9[0];
    ACPIWideStringToAnsiHelper(*a5, v9[0]);
    if ( a6 )
      *a6 = v7 >> 1;
  }
  return (unsigned int)v6;
}
