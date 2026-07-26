/*
 * XREFs of ?Close@DriverService@@QEAAXXZ @ 0x1C0141DD0
 * Callers:
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x1C0141E00 (-Dereference@DriverService@@QEAAXXZ.c)
 *     ?Reference@DriverService@@QEAAJXZ @ 0x1C0141FE4 (-Reference@DriverService@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C00D02B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@.c)
 *     ?UnloadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00D032C (-UnloadDriver@@YAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall DriverService::Close(void **this)
{
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    this + 4,
    0LL);
  UnloadDriver((struct _UNICODE_STRING *)*this);
  this[3] = 0LL;
}
