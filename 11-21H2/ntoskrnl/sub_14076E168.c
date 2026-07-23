/*
 * XREFs of sub_14076E168 @ 0x14076E168
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 */

__int64 __fastcall sub_14076E168(__int64 a1, HANDLE a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    v5 = sub_14076E894(*(_QWORD *)(a1 + 32), &Handle, 131097LL);
    if ( v5 < 0 )
      goto LABEL_4;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v5 = sub_14076E224(*(_QWORD *)&qword_140D00AC0, *(_QWORD *)(a1 + 48), Handle);
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)v5;
}
