/*
 * XREFs of sub_140779DC4 @ 0x140779DC4
 * Callers:
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076C3C0 @ 0x14076C3C0 (sub_14076C3C0.c)
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_140776EE8 @ 0x140776EE8 (sub_140776EE8.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_1407796C4 @ 0x1407796C4 (sub_1407796C4.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_140859618 @ 0x140859618 (sub_140859618.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 *     sub_1409483EC @ 0x1409483EC (sub_1409483EC.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     sub_14077BA10 @ 0x14077BA10 (sub_14077BA10.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140779DC4(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rbx
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v11 = 0LL;
  v3 = sub_14077BA10(&v11);
  v4 = v3;
  if ( v3 == -1073741275 )
  {
    v4 = 0;
  }
  else if ( v3 < 0 )
  {
    return v4;
  }
  v5 = (__int64 *)v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 144);
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 152LL, 1097887312LL);
    v11 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 144) = 1;
    *(_QWORD *)(Pool2 + 16) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(Pool2 + 24),
      (PRTL_AVL_COMPARE_ROUTINE)sub_1406BC0F0,
      (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406D2240,
      (PRTL_AVL_FREE_ROUTINE)sub_1406D2220,
      0LL);
    *(_QWORD *)(v7 + 136) = v7 + 128;
    *(_QWORD *)(v7 + 128) = v7 + 128;
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C456A0, 1u);
    v9 = qword_140C45690;
    if ( *(__int64 **)(qword_140C45690 + 8) != &qword_140C45690 )
      __fastfail(3u);
    v5 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = &qword_140C45690;
    *v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
    qword_140C45690 = (__int64)v5;
    ExReleaseResourceLite(&stru_140C456A0);
    KeLeaveCriticalRegion();
  }
  *a1 = v5;
  return v4;
}
