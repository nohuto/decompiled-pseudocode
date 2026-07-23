/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x14098EFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = a1 + 8;
  v4 = sub_140281870(a1 + 8);
  if ( sub_1403C7678(v3, 0LL, (__int64)v4) )
  {
    sub_140281930(v3, (__int64)v4);
    sub_1402F9540((__int64)CurrentThread);
    ExWaitForRundownProtectionRelease(v4);
    sub_1402D66A8((ULONG_PTR)&qword_140C23910);
    v5 = a1[6];
    if ( *(_QWORD **)(v5 + 8) != a1 + 6 || (v6 = (_QWORD *)a1[7], (_QWORD *)*v6 != a1 + 6) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    sub_1402935D0((ULONG_PTR)&qword_140C23910);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    sub_140281930(v3, (__int64)v4);
    sub_1402F9540((__int64)CurrentThread);
  }
}
