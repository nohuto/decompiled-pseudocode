/*
 * XREFs of ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1803DC878
 * Callers:
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1806F24EC (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(__int64 a1, unsigned __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
}
