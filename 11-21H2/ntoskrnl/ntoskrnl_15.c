/*
 * XREFs of ntoskrnl_15 @ 0x140945E70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall ntoskrnl_15(__int64 a1, char a2, const WCHAR *a3, int a4, _QWORD *a5)
{
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int v12; // ebx
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 17;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      return 3221225485LL;
    v9 = 18;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  v11 = v9 | 0x200;
  if ( (a2 & 4) == 0 )
    v11 = v9;
  v12 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, a1, v11, 0, 131097, 0, (__int64)Handle, 0LL);
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
  {
    v12 = sub_14067B838(Handle[0], a3, a4, a5);
    ZwClose(Handle[0]);
  }
  return (unsigned int)v12;
}
