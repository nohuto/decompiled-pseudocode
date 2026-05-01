/*
 * XREFs of ?GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@PEAPEAUIAppLayoutItemEnum@@@Z @ 0x180616C90
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180618DD4 (-s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTIO.c)
 */

__int64 __fastcall CAppLayout::GetItemEnumEx(__int64 a1, __int64 a2, __int64 a3)
{
  return CAppLayoutItemEnum::s_CreateInstance(-(__int64)(a1 != 40) & a1, a2, a3);
}
