/*
 * XREFs of ??1?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18014427C
 * Callers:
 *     _CConnectorProcessingModeCharacteristics::AddConnectorFormat_::_1_::dtor$0 @ 0x18006F016 (_CConnectorProcessingModeCharacteristics--AddConnectorFormat_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(
        void ***a1)
{
  void **v1; // rbx
  void *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *v1;
    *v1 = 0LL;
    if ( v2 )
      CoTaskMemFree(v2);
    operator delete(v1);
  }
}
