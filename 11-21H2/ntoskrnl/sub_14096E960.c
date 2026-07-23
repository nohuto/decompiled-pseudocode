/*
 * XREFs of sub_14096E960 @ 0x14096E960
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_14096DEDC @ 0x14096DEDC (sub_14096DEDC.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14096E3D8 @ 0x14096E3D8 (sub_14096E3D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14096E960(__int64 a1)
{
  HANDLE *v1; // rsi
  HANDLE *v3; // rax
  __int64 v4; // rdi
  HANDLE *v5; // rbx
  HANDLE *v6; // rax
  HANDLE **v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_QWORD *)(a1 + 16720) )
  {
    v3 = (HANDLE *)sub_14096E3D8(a1, &v13, (volatile signed __int64 **)&BugCheckParameter2);
    v4 = v13;
    v5 = v3;
    if ( v3 && !*(_QWORD *)(a1 + 16720) && *(_QWORD *)(*(_QWORD *)(a1 + 176) + 32LL) <= 1uLL )
    {
      if ( v3[9] )
      {
        HIDWORD(v11) = 0;
        *((_QWORD *)&v10 + 1) = v13;
        *(_QWORD *)&v10 = v3;
        KeGenericCallDpc((__int64)sub_14059A460, (__int64)&v10);
      }
      v6 = (HANDLE *)*v5;
      if ( *((HANDLE **)*v5 + 1) != v5 || (v7 = (HANDLE **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      v1 = v5;
      v6[1] = v7;
    }
    if ( BugCheckParameter2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      sub_1402AFC00(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      v4 = v13;
    }
    if ( v4 )
      sub_1403606C4(*(_QWORD *)(v4 + 176));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
