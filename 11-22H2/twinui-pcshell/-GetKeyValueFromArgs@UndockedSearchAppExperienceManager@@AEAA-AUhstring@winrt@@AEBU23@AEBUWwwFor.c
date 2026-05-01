/*
 * XREFs of ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x180467D38
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?GetFirstValueByName@?$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180467B00 (-GetFirstValueByName@-$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDec.c)
 */

// Hidden C++ exception states: #wind=2
struct winrt::impl::hstring_header **__fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        _QWORD *a3,
        __int64 *a4,
        winrt::impl **a5)
{
  char v8; // al
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  struct winrt::impl::hstring_header **FirstValueByName; // rax
  unsigned int v12; // r8d
  char v13; // bl
  struct winrt::impl::hstring_header *v14; // rcx
  char v15; // bl
  struct winrt::impl::hstring_header **result; // rax
  _DWORD v17[10]; // [rsp+0h] [rbp-58h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header **v21; // [rsp+68h] [rbp+10h]

  v21 = a2;
  v17[8] = 0;
  v20 = 0LL;
  v8 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a4, &v20);
  try
  {
    if ( v8 )
    {
      v14 = winrt::impl::duplicate_hstring(*a5, v9, v10);
      FirstValueByName = (struct winrt::impl::hstring_header **)&v20;
      v13 = 2;
    }
    else
    {
      v19[0] = *a3;
      FirstValueByName = (struct winrt::impl::hstring_header **)winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
                                                                  a4,
                                                                  &v18,
                                                                  v19);
      v13 = 1;
      v14 = *FirstValueByName;
    }
    *FirstValueByName = 0LL;
    *a2 = v14;
    v15 = v13 | 4;
    if ( (v15 & 2) != 0 )
    {
      v15 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
    }
    if ( (v15 & 1) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    result = a2;
  }
  catch ( ... )
  {
    *v21 = winrt::impl::duplicate_hstring(*a5, (struct winrt::impl::hstring_header *)v17, v12);
    return v21;
  }
  return result;
}
