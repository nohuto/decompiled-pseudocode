/*
 * XREFs of MmAddPhysicalMemory @ 0x140969D30
 * Callers:
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 * Callees:
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  bool v2; // zf
  bool v3; // r8
  LONGLONG QuadPart; // [rsp+40h] [rbp+8h] BYREF

  v2 = (StartAddress->QuadPart & 0xFFF) == 0;
  QuadPart = StartAddress->QuadPart;
  v3 = (QuadPart & 1) != 0 && !v2;
  if ( v3 )
    LODWORD(QuadPart) = QuadPart & 0xFFFFFFFE;
  return sub_140968AF4(
           &StartContext,
           (unsigned __int64 *)&QuadPart,
           (unsigned __int64 *)&NumberOfBytes->QuadPart,
           (unsigned __int8)v3 << 9,
           0);
}
