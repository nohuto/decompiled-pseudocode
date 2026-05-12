/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C001D970
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v3; // ebx
  unsigned int Options; // edi
  unsigned int Length; // esi
  unsigned int v8; // r15d
  _DWORD *Pool; // rax
  _DWORD *v10; // r14
  unsigned int v11; // edi
  unsigned int v13; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  if ( v8 >= 0xFFFFFFE4 )
  {
    v11 = -1073741675;
  }
  else
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, v8 + 28, 1918067026LL, *(_QWORD *)(a1 + 8));
    v10 = Pool;
    if ( Pool )
    {
      Pool[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      *Pool = 8;
      Pool[3] = *(_DWORD *)(a1 + 1320);
      Pool[6] = v8;
      if ( Options )
        memmove(Pool + 7, a2->AssociatedIrp.MasterIrp, Options);
      v11 = RaidUnitSendSrbIoControlSynchronously(a1, (_DWORD)a2, (_DWORD)v10, v8 + 28, 0LL);
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        if ( Length )
        {
          v13 = v10[6];
          if ( v13 )
          {
            if ( Length >= v13 )
              Length = v10[6];
            v3 = Length;
            memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, Length);
          }
        }
      }
      ExFreePoolWithTag(v10, 0x72536152u);
    }
    else
    {
      v11 = -1073741670;
    }
  }
  a2->IoStatus.Information = v3;
  return RaidCompleteRequestEx(a2, 0, v11);
}
