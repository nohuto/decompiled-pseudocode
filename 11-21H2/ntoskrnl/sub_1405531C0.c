/*
 * XREFs of sub_1405531C0 @ 0x1405531C0
 * Callers:
 *     sub_140419138 @ 0x140419138 (sub_140419138.c)
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1403D4F68 @ 0x1403D4F68 (sub_1403D4F68.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140554244 @ 0x140554244 (sub_140554244.c)
 */

_QWORD *sub_1405531C0()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( qword_140C54DC0 && byte_140C54DB8 == 1 && ExAcquireResourceExclusiveLite(&stru_140C48520, 1u) )
  {
    v2 = sub_1403D4F68();
    if ( v2 )
      sub_14042A5E0(v2, v1);
    ExReleaseResourceLite(&stru_140C48520);
  }
  if ( byte_140D0189C )
    sub_140554244();
  return sub_1402AC800((__int64)CurrentThread);
}
