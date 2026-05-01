/*
 * XREFs of ?GetItemEnum@CAppLayout@@UEAAJPEAPEAUIAppLayoutItemEnum@@@Z @ 0x180616C50
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180618DD4 (-s_CreateInstance@CAppLayoutItemEnum@@SAJPEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTIO.c)
 */

__int64 __fastcall CAppLayout::GetItemEnum(unsigned __int64 this, struct IAppLayoutItemEnum **a2)
{
  return CAppLayoutItemEnum::s_CreateInstance(-(__int64)(this != 40) & this, 0LL, 1LL);
}
