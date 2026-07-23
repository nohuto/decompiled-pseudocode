/*
 * XREFs of IoWMIAllocateInstanceIds @ 0x1409DB760
 * Callers:
 *     sub_1406115F0 @ 0x1406115F0 (sub_1406115F0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIAllocateInstanceIds(LPCGUID Guid, ULONG InstanceCount, ULONG *FirstInstanceId)
{
  _QWORD *v3; // rdi
  _QWORD *v8; // rdx
  unsigned int v9; // r9d
  _QWORD *v10; // rcx
  ULONG v11; // r10d
  __int64 v12; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  GUID v15; // xmm0

  v3 = 0LL;
  if ( !qword_140C164D8 )
    return -1073741823;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v8 = (_QWORD *)qword_140C16668;
LABEL_11:
  if ( v8 )
  {
    v9 = 0;
    v10 = v8 + 1;
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 4);
      if ( v11 == -1 )
        break;
      v12 = *(_QWORD *)&Guid->Data1 - *v10;
      if ( *(_QWORD *)&Guid->Data1 == *v10 )
        v12 = *(_QWORD *)Guid->Data4 - v10[1];
      if ( !v12 )
      {
        *FirstInstanceId = v11;
        *((_DWORD *)v10 + 4) += InstanceCount;
        KeReleaseMutex(&Object, 0);
        return 0;
      }
      ++v9;
      v10 = (_QWORD *)((char *)v10 + 20);
      if ( v9 >= 8 )
      {
        v3 = v8;
        v8 = (_QWORD *)*v8;
        goto LABEL_11;
      }
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x69696D57u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      KeReleaseMutex(&Object, 0);
      return -1073741670;
    }
    memset(PoolWithTag + 1, 255, 0xA0uLL);
    *v14 = 0LL;
    if ( v3 )
      *v3 = v14;
    else
      qword_140C16668 = (__int64)v14;
    v10 = v14 + 1;
  }
  v15 = *Guid;
  *((_DWORD *)v10 + 4) = InstanceCount;
  *(GUID *)v10 = v15;
  KeReleaseMutex(&Object, 0);
  *FirstInstanceId = 0;
  return 0;
}
