/*
 * XREFs of ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180055DC4
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18072840C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Integer_to_chars@I@std@@YA?AUto_chars_result@0@PEADQEADIH@Z @ 0x180051D70 (--$_Integer_to_chars@I@std@@YA-AUto_chars_result@0@PEADQEADIH@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char *__fastcall winrt::impl::hstring_convert<unsigned int>(char *a1, unsigned int a2)
{
  unsigned int v3; // r8d
  char *v4; // rcx
  char *i; // rdx
  __int16 v6; // ax
  char *v8; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-80h] BYREF
  char v10[8]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v11[64]; // [rsp+70h] [rbp-58h] BYREF

  v8 = a1;
  std::_Integer_to_chars<unsigned int>((__int64)&v8, v9, (__int64)v10, a2);
  v4 = v11;
  for ( i = v9; i != v8; v4 += 2 )
  {
    v6 = *i++;
    *(_WORD *)v4 = v6;
  }
  *(_QWORD *)a1 = winrt::impl::create_hstring_on_heap(
                    (winrt::impl *)v11,
                    (winrt::impl *)(unsigned int)((v4 - v11) >> 1),
                    v3);
  return a1;
}
