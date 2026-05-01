/*
 * XREFs of ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x180424AC4
 * Callers:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x180423AC8 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180424A00 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x180424F28 (-Get@__abi_FTMWeakRefData@@QECAJXZ.c)
 */

void __fastcall Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::CopyToOrDetach(
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
    JUMPOUT(0x180424B7DLL);
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
    if ( (unsigned int)__abi_FTMWeakRefData::Get(v6, 0LL) == 1 )
    {
      *a2 = *(void **)(a1 + 80);
      *v9 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v7;
      *(_BYTE *)(a1 + 76) = v7;
      *(_QWORD *)(a1 + 80) = v7;
      return;
    }
    if ( *(_BYTE *)(a1 + 76) == (_BYTE)v7 && (int)__abi_FTMWeakRefData::Get(v8, v7) <= 1 )
    {
LABEL_12:
      __abi_WinRTraiseFailureException();
      __debugbreak();
      goto LABEL_13;
    }
  }
  *a2 = Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
          *(Platform::Details ***)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
