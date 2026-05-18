/*
 * XREFs of sub_1800F875C @ 0x1800F875C
 * Callers:
 *     sub_1800F8B60 @ 0x1800F8B60 (sub_1800F8B60.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_1800F7D18 @ 0x1800F7D18 (sub_1800F7D18.c)
 */

__int64 __fastcall sub_1800F875C(__int64 a1)
{
  char **v1; // rbx

  v1 = (char **)(a1 + 240);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_18001E060(a1 + 240, (__int64)v1, *((char **)*v1 + 1));
  sub_180010884(*v1, 0x68uLL);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_1800F7D18(a1 + 144, a1 + 144, *(char **)(*(_QWORD *)(a1 + 144) + 8LL));
  sub_180010884(*(char **)(a1 + 144), 0xC0uLL);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_1800F5C14(a1);
}
