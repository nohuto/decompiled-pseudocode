/*
 * XREFs of wil::details::lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___::_lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___ @ 0x1C00D0120
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A50 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 * Callees:
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x1C0141DE0 (-Dereference@DriverService@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___::_lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    DriverService::Dereference((DriverService *)(*(_QWORD *)a1 + 40LL));
  }
}
