/*
 * XREFs of sub_1406460E0 @ 0x1406460E0
 * Callers:
 *     sub_140642F78 @ 0x140642F78 (sub_140642F78.c)
 *     sub_140643064 @ 0x140643064 (sub_140643064.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140646180 @ 0x140646180 (sub_140646180.c)
 */

__int64 __fastcall sub_1406460E0(void *Src, size_t Size, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters )
  {
    memset((char *)&stru_140C0E9A8.DeviceQueue.DeviceListHead.Flink + 4, 0, 0xFECuLL);
    stru_140C0E9A8.AlignmentRequirement = 1381192527;
    *(&stru_140C0E9A8.AlignmentRequirement + 1) = 1;
    v6 = 4075;
    *(_DWORD *)(&stru_140C0E9A8.DeviceQueue.Size + 1) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(stru_140C0E9A8.DeviceQueue.DeviceListHead.Flink) = v6;
    *(_DWORD *)&stru_140C0E9A8.DeviceQueue.Type = v6 + 20;
    memmove((char *)&stru_140C0E9A8.DeviceQueue.DeviceListHead.Flink + 4, Src, v6);
    return sub_140646180();
  }
  return result;
}
