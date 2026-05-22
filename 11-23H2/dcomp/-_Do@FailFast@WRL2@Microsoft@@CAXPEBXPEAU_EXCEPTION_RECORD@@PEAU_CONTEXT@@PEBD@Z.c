/*
 * XREFs of ?_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z @ 0x1801090B0
 * Callers:
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall Microsoft::WRL2::FailFast::_Do(
        const void *a1,
        struct _EXCEPTION_RECORD *a2,
        struct _CONTEXT *a3,
        const char *a4)
{
  signed __int32 v7; // edx
  _DWORD v8[4]; // [rsp+40h] [rbp-A8h] BYREF
  const void *v9; // [rsp+50h] [rbp-98h]

  if ( a4 )
  {
    v7 = _InterlockedIncrement(&Microsoft::WRL2::FailFast::MessageCount);
    if ( (unsigned __int64)v7 < 0xA )
      Microsoft::WRL2::FailFast::Messages[v7 - 1] = a4;
  }
  if ( DebugFailFast )
    __debugbreak();
  if ( !a2 && a1 )
  {
    memset_0(v8, 0, 0x98uLL);
    v8[0] = -1073740286;
    v8[1] = 1;
    v9 = a1;
    a2 = (struct _EXCEPTION_RECORD *)v8;
  }
  RaiseFailFastException(a2, a3, 0);
  MEMORY[0] = 0;
}
