/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@0@Z @ 0x1801A2AF8
 * Callers:
 *     ?GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z @ 0x1801A28E4 (-GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU-$IKeyValuePair@P.c)
 * Callees:
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x180149BC4 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::Initialize(
        __int64 a1,
        HSTRING *a2,
        HSTRING *a3)
{
  unsigned int v5; // ebx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING string; // [rsp+20h] [rbp-10h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-8h] BYREF
  HRESULT v11; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &newString,
    a2,
    &v11);
  v5 = v11;
  if ( v11 >= 0 )
  {
    XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
      &string,
      a3,
      &v11);
    v5 = v11;
    if ( v11 < 0 )
    {
      v7 = string;
    }
    else
    {
      v6 = *(HSTRING *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = newString;
      newString = v6;
      v7 = *(HSTRING *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = string;
      string = v7;
    }
    WindowsDeleteString(v7);
  }
  WindowsDeleteString(newString);
  return v5;
}
