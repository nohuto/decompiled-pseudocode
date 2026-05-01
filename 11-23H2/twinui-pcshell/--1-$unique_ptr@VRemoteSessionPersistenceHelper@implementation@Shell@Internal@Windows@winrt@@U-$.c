/*
 * XREFs of ??1?$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18070E9C8
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel_::_1_::dtor$1 @ 0x1802BDED6 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1802BDED6.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18070EC00 (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **a1)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::~RemoteSessionPersistenceHelper(*a1);
    operator delete(v1);
  }
}
