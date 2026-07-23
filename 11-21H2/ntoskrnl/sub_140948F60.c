/*
 * XREFs of sub_140948F60 @ 0x140948F60
 * Callers:
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlNumberGenericTableElementsAvl @ 0x1402D8A70 (RtlNumberGenericTableElementsAvl.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 */

__int64 __fastcall sub_140948F60(int a1)
{
  struct _ERESOURCE *v1; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v3; // rdi
  ULONG v4; // ebx

  v1 = (struct _ERESOURCE *)sub_14077B33C(a1);
  CurrentThread = KeGetCurrentThread();
  v3 = v1;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(v1, 1u);
  v4 = RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)&v3[1]);
  ExReleaseResourceLite(v3);
  KeLeaveCriticalRegion();
  return v4;
}
