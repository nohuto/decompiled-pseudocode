/*
 * XREFs of ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0036098
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
