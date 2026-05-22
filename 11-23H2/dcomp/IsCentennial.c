/*
 * XREFs of IsCentennial @ 0x180112D88
 * Callers:
 *     Windows::UI::Composition::UseCompositorToAllocateVisualId @ 0x18008D128 (Windows--UI--Composition--UseCompositorToAllocateVisualId.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

__int64 IsCentennial()
{
  unsigned int v0; // ebx
  HANDLE CurrentProcess; // rax
  void *TokenHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  TokenHandle = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &TokenHandle,
    0LL);
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 8u, &TokenHandle)
    || (v4 = 0LL, (unsigned int)RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, 0LL, &v4, 0LL)) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&TokenHandle);
    return 0LL;
  }
  else
  {
    LOBYTE(v0) = (v4 & 5) == 5;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    return v0;
  }
}
