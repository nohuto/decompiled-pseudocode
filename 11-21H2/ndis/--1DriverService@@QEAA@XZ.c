/*
 * XREFs of ??1DriverService@@QEAA@XZ @ 0x1C01351A4
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1C00CB44C (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CB428 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@@YA_.c)
 */

void __fastcall DriverService::~DriverService(void **this)
{
  void *v2; // rcx

  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>(this + 4);
  v2 = *this;
  *this = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
