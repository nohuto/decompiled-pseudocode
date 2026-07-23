/*
 * XREFs of sub_1409465D0 @ 0x1409465D0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1409465D0(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  struct _DEVICE_OBJECT *v8; // rbp
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-28h]

  if ( (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                             + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType
    && (v8 = *(struct _DEVICE_OBJECT **)a4,
        IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48)) == v8) )
  {
    v11 = *(_QWORD *)(a4 + 24);
    v7 = sub_14042A5E0(v8, *(_QWORD *)(a4 + 8));
  }
  else
  {
    v7 = 0;
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v7;
}
