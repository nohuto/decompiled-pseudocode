/*
 * XREFs of ??_G?$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18070F550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18070ED30 (--1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::~RemoteSystemDataModel(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
