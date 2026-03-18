/*
 * XREFs of HalpDispatchWmi @ 0x1408660B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x14038F0E4 (HalpPassIrpFromFdoToPdo.c)
 */

__int64 __fastcall HalpDispatchWmi(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  if ( **(_DWORD **)(a1 + 64) == 193 )
  {
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  else
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  return Status;
}
