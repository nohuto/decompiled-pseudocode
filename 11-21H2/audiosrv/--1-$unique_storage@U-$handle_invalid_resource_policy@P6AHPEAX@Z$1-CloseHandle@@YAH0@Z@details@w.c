/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18013B6D0
 * Callers:
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18013B70C (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 * Callees:
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x1800626B8 (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 */

unsigned __int64 __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  BOOL (__stdcall *v3)(HANDLE); // [rsp+38h] [rbp+10h] BYREF

  result = *a1 - 1;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = *a1;
    v3 = CloseHandle;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
