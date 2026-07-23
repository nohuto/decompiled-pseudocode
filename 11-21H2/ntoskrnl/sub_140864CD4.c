/*
 * XREFs of sub_140864CD4 @ 0x140864CD4
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

NTSTATUS sub_140864CD4()
{
  __int64 v0; // rbx
  NTSTATUS result; // eax

  v0 = *((_QWORD *)sub_140347DB0() + 113);
  result = ExCreateCallback((PCALLBACK_OBJECT *)(v0 + 46848), (POBJECT_ATTRIBUTES)&stru_140A39120, 1u, 1u);
  if ( result < 0 )
    *(_QWORD *)(v0 + 46848) = 0LL;
  return result;
}
