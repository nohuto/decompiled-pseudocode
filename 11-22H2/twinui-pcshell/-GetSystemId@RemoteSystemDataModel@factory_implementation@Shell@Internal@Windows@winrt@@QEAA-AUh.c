/*
 * XREFs of ?GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x1807133EC
 * Callers:
 *     ?GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x1807134C0 (-GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@A.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x1807196A4 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetSystemId(
        RTL_SRWLOCK *a1,
        winrt::hstring *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  winrt::impl *v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::TryLookup(
    &a1[19],
    &v10,
    a3);
  if ( v11 )
  {
    *(_QWORD *)a2 = winrt::impl::duplicate_hstring(v10, v7, v8);
    if ( v11 )
      winrt::hstring::~hstring((void **)&v10);
  }
  else
  {
    winrt::hstring::hstring(a2, &LocaleName);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
