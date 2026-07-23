/*
 * XREFs of MiAllocateFastAwePages @ 0x140A40454
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiInitializeLargePfnList @ 0x1402E9228 (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFillUserPhysicalMdl @ 0x14064A034 (MiFillUserPhysicalMdl.c)
 *     MiGetAweInfoPartition @ 0x14064ADA8 (MiGetAweInfoPartition.c)
 *     MiGetAwePageSize @ 0x14064AE68 (MiGetAwePageSize.c)
 *     MiReleaseNonPagedResources @ 0x1406615BC (MiReleaseNonPagedResources.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 */

__int64 __fastcall MiAllocateFastAwePages(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  unsigned int v8; // edi
  __int64 AwePageSize; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int16 *AweInfoPartition; // rbp
  int v14; // ecx
  int v15; // eax
  int v16; // r14d
  char v17; // r9
  int v18; // edx
  char v19; // r8
  int LargePfnList; // ebx
  _QWORD v21[2]; // [rsp+50h] [rbp-C8h] BYREF
  BOOL v22; // [rsp+60h] [rbp-B8h]
  int v23; // [rsp+64h] [rbp-B4h]
  _QWORD v24[12]; // [rsp+70h] [rbp-A8h] BYREF

  memset(v24, 0, sizeof(v24));
  v8 = 0;
  AwePageSize = MiGetAwePageSize(a2);
  v10 = AwePageSize * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  AweInfoPartition = (unsigned __int16 *)MiGetAweInfoPartition(v11);
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)AweInfoPartition, v10, 0LL, 2u) < 0 )
    return 3221225773LL;
  v14 = *(_DWORD *)(a2 + 80);
  v21[0] = 0LL;
  v21[1] = AwePageSize;
  if ( v14 )
  {
    v15 = 4;
    if ( v14 == 2 )
      v15 = 28;
    v23 = v15;
  }
  else
  {
    v23 = 12;
  }
  v16 = *(_DWORD *)(a2 + 8) & 4;
  v22 = v16 != 0;
  MiInitializeLargePfnList(v24);
  LargePfnList = MiCreateLargePfnList(
                   (__int64)v21,
                   0LL,
                   v10,
                   AwePageSize,
                   v18,
                   v17 & (unsigned __int8)(a4 >> 1),
                   0LL,
                   v19,
                   v24);
  if ( LargePfnList < 0 )
    goto LABEL_9;
  LargePfnList = MiFillUserPhysicalMdl(a1, v24, a5);
  if ( LargePfnList < 0 )
  {
    LOBYTE(v8) = v16 != 0;
    MiFreeLargeZeroPages((int)AweInfoPartition, (__int64)v24, v8);
LABEL_9:
    MiReleaseNonPagedResources((__int64)AweInfoPartition, v10);
    return (unsigned int)LargePfnList;
  }
  if ( AweInfoPartition == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C699B0, v10);
  return 0LL;
}
