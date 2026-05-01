/*
 * XREFs of std::_Temporary_owner_del_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::__Temporary_owner_del_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18001D07C
 * Callers:
 *     _CreateGameConfigStoreClientIfNeeded_::_1_::dtor$1 @ 0x18004C7F6 (_CreateGameConfigStoreClientIfNeeded_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues_::_1_::dtor$5 @ 0x18004D186 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateValues_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Temporary_owner_del_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::__Temporary_owner_del_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return FreeGameConfigStoreClient(*(_QWORD *)a1);
  return result;
}
