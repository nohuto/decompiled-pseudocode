/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AXPEAX@Z$1?DeleteBoundaryDescriptor@@YAX0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800FCB88
 * Callers:
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800FE510 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800FEF2C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<void (*)(void *),&void DeleteBoundaryDescriptor(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<void (*)(void *),&void DeleteBoundaryDescriptor(void *)>>(
        void **a1)
{
  char *v1; // rcx

  v1 = (char *)*a1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    DeleteBoundaryDescriptor(v1);
}
