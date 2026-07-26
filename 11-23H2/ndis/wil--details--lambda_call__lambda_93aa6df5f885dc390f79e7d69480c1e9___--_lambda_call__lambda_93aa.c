/*
 * XREFs of wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___ @ 0x1C00D00F8
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A50 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BCC (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C0141280 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    KLoader::DereferenceKModule(*(KLoader **)a1, *(struct KModule **)(a1 + 8));
  }
}
