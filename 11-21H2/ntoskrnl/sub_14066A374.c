/*
 * XREFs of sub_14066A374 @ 0x14066A374
 * Callers:
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_140669CBC @ 0x140669CBC (sub_140669CBC.c)
 *     sub_14066A21C @ 0x14066A21C (sub_14066A21C.c)
 *     sub_14066A57C @ 0x14066A57C (sub_14066A57C.c)
 *     sub_14066A774 @ 0x14066A774 (sub_14066A774.c)
 *     sub_1406745EC @ 0x1406745EC (sub_1406745EC.c)
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_14094A710 @ 0x14094A710 (sub_14094A710.c)
 *     sub_14097323C @ 0x14097323C (sub_14097323C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 */

__int64 __fastcall sub_14066A374(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
