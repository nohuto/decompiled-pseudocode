/*
 * XREFs of sub_140779A50 @ 0x140779A50
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
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1402DECE0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140779A08 @ 0x140779A08 (sub_140779A08.c)
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140779A50(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  HANDLE *v9; // rcx
  _QWORD *v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140C45620, 1u);
    v4 = KeGetCurrentThread();
    --*((_WORD *)v4 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C456A0, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
LABEL_16:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&stru_140C456A0);
    KeLeaveCriticalRegion();
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v9 = (HANDLE *)P[5][4];
      Buffer = v9;
      if ( v9[2] )
      {
        ZwClose(v9[2]);
        Buffer[2] = 0LL;
        v9 = Buffer;
      }
      sub_140779A08((__int64)v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      sub_140779B80(Buffer);
    }
    ExReleaseResourceLite(&stru_140C45620);
    KeLeaveCriticalRegion();
    v7 = P + 16;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_16;
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      v10[1] = v7;
      Buffer = (HANDLE *)(v8 - 7);
      sub_140779B80(v8 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
