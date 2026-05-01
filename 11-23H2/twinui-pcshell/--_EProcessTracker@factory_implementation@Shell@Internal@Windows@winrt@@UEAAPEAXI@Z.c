/*
 * XREFs of ??_EProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18027E140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18027E044 (--1ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *__fastcall winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *this,
        char a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::~ProcessTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
