/*
 * XREFs of ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z @ 0x18022DE10
 * Callers:
 *     ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x1802ABDB0 (--_E-$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x18022DDE4 (--1SnapWindowProvider@SnapLauncher@@UEAA@XZ.c)
 */

SnapLauncher::SnapWindowProvider *__fastcall winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vector deleting destructor'(
        SnapLauncher::SnapWindowProvider *a1,
        char a2)
{
  SnapLauncher::SnapWindowProvider::~SnapWindowProvider(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
