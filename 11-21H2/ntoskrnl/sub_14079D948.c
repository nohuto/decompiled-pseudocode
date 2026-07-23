/*
 * XREFs of sub_14079D948 @ 0x14079D948
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 * Callees:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409F3C74 @ 0x1409F3C74 (sub_1409F3C74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14079D948(
        unsigned __int16 *a1,
        void *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        int CheckSum,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ImageBase; // rbx
  int TimeDateStamp; // edi
  PIMAGE_NT_HEADERS v15; // rax
  __int64 Pool2; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rcx
  int v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int128 v22; // [rsp+68h] [rbp-50h] BYREF

  ImageBase = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  TimeDateStamp = 0;
  v20 = 0;
  if ( qword_140D05008 != -4572 && (*(_DWORD *)(qword_140D05008 + 4572) & 4) != 0 )
    sub_1409F3C74(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      CheckSum = v15->OptionalHeader.CheckSum;
      TimeDateStamp = v15->FileHeader.TimeDateStamp;
      v20 = TimeDateStamp;
      ImageBase = v15->OptionalHeader.ImageBase;
      v21 = ImageBase;
    }
  }
  if ( !a2 )
    goto LABEL_12;
  if ( !a9 && !KeAreAllApcsDisabled() )
  {
    v17 = 1024LL;
    goto LABEL_17;
  }
  Pool2 = ExAllocatePool2(64LL, 144LL, 1098347589LL);
  if ( !Pool2 )
  {
LABEL_16:
    v17 = 512LL;
LABEL_17:
    if ( qword_140D00A28 )
    {
      v18 = sub_14042A5E0(a2, v17);
      v19 = (unsigned __int16 *)&v22;
      if ( v18 < 0 )
        v19 = a1;
      a1 = v19;
    }
LABEL_12:
    sub_140280D70(a1, a3, (__int64)a4, a5, CheckSum, TimeDateStamp, a7, a8, ImageBase, a9);
    return;
  }
  ObfReferenceObject(a2);
  *(_QWORD *)(Pool2 + 88) = a2;
  *(_QWORD *)(Pool2 + 96) = a3;
  *(_QWORD *)(Pool2 + 104) = a4;
  *(_QWORD *)(Pool2 + 112) = a5;
  *(_DWORD *)(Pool2 + 120) = CheckSum;
  *(_DWORD *)(Pool2 + 124) = TimeDateStamp;
  *(_DWORD *)(Pool2 + 128) = a7;
  *(_DWORD *)(Pool2 + 132) = a8;
  *(_QWORD *)(Pool2 + 136) = ImageBase;
  KeInitializeApc(
    Pool2,
    (__int64)KeGetCurrentThread(),
    0,
    (__int64)_misaligned_access,
    (__int64)sub_14062E9B0,
    (__int64)sub_140243500,
    0,
    Pool2);
  if ( !KeInsertQueueApc(Pool2, 0LL, 0LL, 0) )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObfDereferenceObject(a2);
    ImageBase = v21;
    TimeDateStamp = v20;
    goto LABEL_16;
  }
}
