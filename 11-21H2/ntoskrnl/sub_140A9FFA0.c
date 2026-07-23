/*
 * XREFs of sub_140A9FFA0 @ 0x140A9FFA0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 */

__int64 __fastcall sub_140A9FFA0(__int64 a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (qword_140D01450 & 0x400000) != 0 )
    sub_140A82EB0(a3, retaddr);
  return MmMapIoSpaceEx(a1, a2, a3);
}
