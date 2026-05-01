/*
 * XREFs of ?ActivateTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x180639BC4
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1802E79E0 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1802E7E96 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTab(RTL_SRWLOCK *a1, _QWORD *a2)
{
  char v4; // di
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  AcquireSRWLockExclusive(a1);
  if ( !a1[23].Ptr
    || (v4 = 1, winrt::operator==(*((_QWORD **)a1[20].Ptr + ((__int64)a1[22].Ptr & ((__int64)a1[21].Ptr - 1))), a2)) )
  {
    v4 = 0;
  }
  else
  {
    v6 = *(_OWORD *)a2;
    winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(a1, &v6);
  }
  ReleaseSRWLockExclusive(a1);
  return v4;
}
