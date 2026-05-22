/*
 * XREFs of ??_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x1801937E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ @ 0x180192438 (--1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *__fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::`vector deleting destructor'(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        char a2)
{
  Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::~ConstantChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
