/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C0021128
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v3; // ebx
  size_t Options; // r15
  unsigned int Length; // esi
  ULONG v8; // edx
  signed int v9; // r14d
  ULONG v10; // r14d
  _DWORD *Pool; // rax
  _DWORD *v12; // rdi
  unsigned int v13; // eax
  int v15; // [rsp+80h] [rbp+8h]
  ULONG v16; // [rsp+88h] [rbp+10h] BYREF

  v15 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v16 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( (unsigned int)Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  v9 = RtlULongAdd(0x1Cu, v8, &v16);
  if ( v9 >= 0 )
  {
    v10 = v16;
    Pool = (_DWORD *)RaidAllocatePool(64LL, v16, 1918067026LL, *(_QWORD *)(a1 + 8));
    v12 = Pool;
    if ( Pool )
    {
      Pool[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      *Pool = 8;
      Pool[3] = *(_DWORD *)(a1 + 1264);
      Pool[6] = v10 - 28;
      if ( (_DWORD)Options )
        memmove(Pool + 7, a2->AssociatedIrp.MasterIrp, Options);
      v9 = RaidUnitSendSrbIoControlSynchronously(v15, (_DWORD)a2, (_DWORD)v12, v10, 0LL);
      if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      {
        if ( Length )
        {
          v13 = v12[6];
          if ( v13 )
          {
            if ( Length >= v13 )
              Length = v12[6];
            v3 = Length;
            memmove(a2->AssociatedIrp.MasterIrp, v12 + 7, Length);
          }
        }
      }
      ExFreePoolWithTag(v12, 0x72536152u);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  a2->IoStatus.Information = v3;
  return RaidCompleteRequestEx(a2, 0, v9);
}
