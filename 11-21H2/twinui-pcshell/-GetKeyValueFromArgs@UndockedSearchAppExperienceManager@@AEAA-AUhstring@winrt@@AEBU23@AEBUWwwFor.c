/*
 * XREFs of ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x18038EBDC
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetFirstValueByName@?$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x18038E9C4 (-GetFirstValueByName@-$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDec.c)
 */

// Hidden C++ exception states: #wind=2
struct winrt::impl::hstring_header **__fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        __int64 *a3,
        __int64 *a4,
        winrt::impl **a5)
{
  char v8; // al
  struct winrt::impl::hstring_header *v9; // rdx
  struct winrt::impl::hstring_header **FirstValueByName; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bl
  struct winrt::impl::hstring_header *v15; // rcx
  char v16; // bl
  struct winrt::impl::hstring_header **result; // rax
  _DWORD v18[10]; // [rsp+0h] [rbp-58h] BYREF
  volatile signed __int32 *v19; // [rsp+28h] [rbp-30h] BYREF
  __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header **v22; // [rsp+68h] [rbp+10h]

  v22 = a2;
  v18[8] = 0;
  v21 = 0LL;
  v8 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a4, &v21);
  try
  {
    if ( v8 )
    {
      v15 = winrt::impl::duplicate_hstring(*a5, v9);
      FirstValueByName = (struct winrt::impl::hstring_header **)&v21;
      v14 = 2;
    }
    else
    {
      v20[0] = *a3;
      FirstValueByName = (struct winrt::impl::hstring_header **)winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
                                                                  a4,
                                                                  &v19,
                                                                  v20);
      v14 = 1;
      v15 = *FirstValueByName;
    }
    *FirstValueByName = 0LL;
    *a2 = v15;
    v16 = v14 | 4;
    if ( (v16 & 2) != 0 )
    {
      v16 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v21, v11, v12, v13);
    }
    if ( (v16 & 1) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19, v11, v12, v13);
    result = a2;
  }
  catch ( ... )
  {
    *v22 = winrt::impl::duplicate_hstring(*a5, (struct winrt::impl::hstring_header *)v18);
    return v22;
  }
  return result;
}
