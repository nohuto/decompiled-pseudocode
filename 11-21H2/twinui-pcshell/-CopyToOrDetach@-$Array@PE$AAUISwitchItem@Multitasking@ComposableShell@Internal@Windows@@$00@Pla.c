/*
 * XREFs of ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x180432434
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18043B400 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@___.c)
 * Callees:
 *     ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x180424F28 (-Get@__abi_FTMWeakRefData@@QECAJXZ.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x1804314DC (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 */

void __fastcall Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::CopyToOrDetach(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r8

  if ( !a2 || !a3 )
  {
LABEL_13:
    __abi_WinRTraiseNullReferenceException();
    __debugbreak();
    JUMPOUT(0x1804324EDLL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_12;
  v6 = a1 + 88;
  if ( !*(_BYTE *)(a1 + 76) )
  {
    if ( (unsigned int)__abi_FTMWeakRefData::Get(v6) == 1 )
    {
      *a2 = *(void **)(a1 + 80);
      *v9 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v7;
      *(_BYTE *)(a1 + 76) = v7;
      *(_QWORD *)(a1 + 80) = v7;
      return;
    }
    if ( *(_BYTE *)(a1 + 76) == (_BYTE)v7 && (int)__abi_FTMWeakRefData::Get(v8) <= 1 )
    {
LABEL_12:
      __abi_WinRTraiseFailureException();
      __debugbreak();
      goto LABEL_13;
    }
  }
  *a2 = Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
          *(__int64 **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
