/*
 * XREFs of IoWMIQuerySingleInstance @ 0x1407849E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WmipQuerySetExecuteSI @ 0x14078362C (WmipQuerySetExecuteSI.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS SetExecuteSI; // edi
  int v12; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  PoolWithTag = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x70696D57u);
    v5 = v6;
    if ( !PoolWithTag )
      return -1073741670;
  }
  memset(PoolWithTag, 0, 0x40uLL);
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[3] = 0;
  PoolWithTag[11] = 2;
  *PoolWithTag = v6;
  PoolWithTag[12] = 64;
  PoolWithTag[14] = v6;
  *((_WORD *)PoolWithTag + 32) = InstanceName->Length;
  memmove((char *)PoolWithTag + 66, InstanceName->Buffer, InstanceName->Length);
  LODWORD(v14) = *PoolWithTag;
  SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 1u, (__int64)PoolWithTag, v5, (unsigned int *)&v14);
  if ( SetExecuteSI < 0 )
  {
LABEL_10:
    if ( PoolWithTag == OutBuffer )
      return SetExecuteSI;
LABEL_11:
    ExFreePoolWithTag(PoolWithTag, 0);
    return SetExecuteSI;
  }
  v12 = PoolWithTag[11];
  if ( (v12 & 0x100) != 0 )
  {
    SetExecuteSI = -1073741637;
    goto LABEL_10;
  }
  if ( (v12 & 0x20) != 0 )
  {
    SetExecuteSI = -1073741789;
    *InOutBufferSize = PoolWithTag[12];
    goto LABEL_10;
  }
  *InOutBufferSize = v14;
  if ( PoolWithTag != OutBuffer )
  {
    SetExecuteSI = -1073741789;
    goto LABEL_11;
  }
  return SetExecuteSI;
}
