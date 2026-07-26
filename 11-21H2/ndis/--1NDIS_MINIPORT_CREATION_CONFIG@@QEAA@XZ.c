/*
 * XREFs of ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0033D30
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120468 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 */

void __fastcall NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG(NDIS_MINIPORT_CREATION_CONFIG *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 3);
}
