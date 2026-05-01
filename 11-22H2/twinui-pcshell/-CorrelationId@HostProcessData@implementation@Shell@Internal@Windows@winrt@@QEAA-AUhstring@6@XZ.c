/*
 * XREFs of ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18072C04C
 * Callers:
 *     ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180280468 (-SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

struct winrt::impl::hstring_header *__fastcall winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(
        __int64 a1,
        struct winrt::impl::hstring_header *a2,
        unsigned int a3)
{
  *(_QWORD *)a2 = winrt::impl::duplicate_hstring(*(winrt::impl **)(a1 + 16), a2, a3);
  return a2;
}
