/*
 * XREFs of sub_140857D34 @ 0x140857D34
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140857F38 @ 0x140857F38 (sub_140857F38.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140857D34()
{
  int v0; // edi
  PVOID v1; // r12
  size_t v2; // r14
  SIZE_T v3; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v5; // rdi
  __int16 v6; // dx
  PVOID v7; // rsi
  LARGE_INTEGER v9; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10[6]; // [rsp+48h] [rbp-30h] BYREF
  PVOID Base; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  SIZE_T Length; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v9.QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, &v9, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    Object = 0LL;
    v0 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v0 >= 0 )
    {
      Base = 0LL;
      Length = 0LL;
      v10[0] = 0LL;
      v1 = Object;
      v0 = sub_1406F3FDC((__int64)Object, &Base, &Length, v10, 0LL, 0LL);
      if ( v0 >= 0 )
      {
        v2 = Length;
        v3 = MmSizeOfMdl(Base, Length);
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6453704Cu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_10;
        PoolWithTag->Next = 0LL;
        v6 = (__int16)Base;
        PoolWithTag->Size = 8 * (((((unsigned __int16)Base & 0xFFF) + v2 + 4095) >> 12) + 6);
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->ByteOffset = v6 & 0xFFF;
        PoolWithTag->ByteCount = v2;
        MmProbeAndLockPages(PoolWithTag, 0, IoWriteAccess);
        v7 = MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v7 )
        {
          sub_14026D048((ULONG_PTR)Base, 1);
          v0 = 0;
          qword_140D3CE30 = 0LL;
          qword_140D3CF00 = (__int64)v1;
          memset(v7, 0, v2);
          sub_140857F38(v7, 0LL);
          qword_140C15B58 = v7;
        }
        else
        {
LABEL_10:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
