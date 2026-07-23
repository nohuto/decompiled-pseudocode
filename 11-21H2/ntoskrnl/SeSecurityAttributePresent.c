/*
 * XREFs of SeSecurityAttributePresent @ 0x140300420
 * Callers:
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  __int16 v8; // cx
  bool v9; // si
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *v12; // rdx
  void *v13; // rbp

  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v7 = *(_QWORD *)(a1 + 48);
    v8 = *(_WORD *)(v7 + 26);
    if ( (v8 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v7, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v12 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (*((_BYTE *)v12 + 192) & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (*((_DWORD *)v12 + 29) & 0x400) == 0 && !*((_DWORD *)v12 + 121) )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      v13 = (void *)sub_14039C618(CurrentIrql, v12, a3);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v7, (ULONG_PTR)v13) )
        ExFreePoolWithTag(v13, 0);
    }
    else
    {
      sub_1402B1170(v7, 1);
    }
    v5 = 1;
  }
  v9 = sub_1403008B0(*(_QWORD *)(a1 + 776), a2) != 0;
  if ( v5 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v9;
}
