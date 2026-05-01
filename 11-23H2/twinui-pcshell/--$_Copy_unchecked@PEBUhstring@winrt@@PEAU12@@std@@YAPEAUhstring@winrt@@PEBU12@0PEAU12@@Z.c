/*
 * XREFs of ??$_Copy_unchecked@PEBUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEBU12@0PEAU12@@Z @ 0x1806F77B0
 * Callers:
 *     ??$_Assign_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806F76F4 (--$_Assign_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

volatile signed __int32 **__fastcall std::_Copy_unchecked<winrt::hstring const *,winrt::hstring *>(
        winrt::impl **a1,
        winrt::impl **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v3; // rbx
  winrt::impl **i; // rdi

  v3 = a3;
  for ( i = a1; i != a2; ++i )
    winrt::hstring::operator=(v3++, i, (unsigned int)a3);
  return v3;
}
