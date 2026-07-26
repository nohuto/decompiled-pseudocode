/*
 * XREFs of ??1?$unique_ptr@UKModuleReference@@U?$default_delete@UKModuleReference@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00D0174
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A50 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KModuleReference,wistd::default_delete<KModuleReference>>::~unique_ptr<KModuleReference,wistd::default_delete<KModuleReference>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0x62694C4Eu);
}
