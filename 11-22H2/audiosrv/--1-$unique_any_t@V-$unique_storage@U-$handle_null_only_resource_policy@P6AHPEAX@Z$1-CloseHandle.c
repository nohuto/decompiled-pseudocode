/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D4554
 * Callers:
 *     ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x1800D4620 (-ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z.c)
 *     ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800D47D0 (-ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z.c)
 *     ?HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z @ 0x1800D4B50 (-HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseHandle(v1);
  return result;
}
