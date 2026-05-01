/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x1804314DC
 * Callers:
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18042D894 (--0-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x180432434 (-CopyToOrDetach@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 */

void *__fastcall Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // rdi

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0x1FFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = v2;
  v4 = _Platform_CoTaskMemAlloc(8 * v2);
  if ( !v4 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset_0(v4, 0, 8 * v2);
  if ( (_DWORD)v2 )
  {
    v6 = (__int64 *)v4;
    do
    {
      __abi_winrt_ptr_assign(v6++, *a1++);
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
