/*
 * XREFs of sub_140850D98 @ 0x140850D98
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     sub_140994C10 @ 0x140994C10 (sub_140994C10.c)
 *     sub_140994DA0 @ 0x140994DA0 (sub_140994DA0.c)
 *     sub_140994E28 @ 0x140994E28 (sub_140994E28.c)
 *     sub_140994FAC @ 0x140994FAC (sub_140994FAC.c)
 *     sub_140995414 @ 0x140995414 (sub_140995414.c)
 *     sub_140999A80 @ 0x140999A80 (sub_140999A80.c)
 * Callees:
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 */

__int64 __fastcall sub_140850D98(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
