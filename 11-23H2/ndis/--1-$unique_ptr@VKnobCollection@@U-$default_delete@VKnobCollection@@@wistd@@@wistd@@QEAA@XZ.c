/*
 * XREFs of ??1?$unique_ptr@VKnobCollection@@U?$default_delete@VKnobCollection@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00BC0A4
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A02C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KnobCollection,wistd::default_delete<KnobCollection>>::~unique_ptr<KnobCollection,wistd::default_delete<KnobCollection>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0x43626E4Bu);
}
