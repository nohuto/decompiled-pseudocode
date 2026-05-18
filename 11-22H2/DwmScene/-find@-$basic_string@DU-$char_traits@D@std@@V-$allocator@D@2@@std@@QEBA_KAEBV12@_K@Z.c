/*
 * XREFs of ?find@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_KAEBV12@_K@Z @ 0x18001F850
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::StringBegins @ 0x180091158 (Spectre--Engine--_anonymous_namespace_--StringBegins.c)
 * Callees:
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x18001EDD0 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 */

__int64 __fastcall std::string::find(char *a1, char *a2)
{
  size_t Size; // r8
  size_t v3; // rax

  Size = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    a2 = *(char **)a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 0x10uLL )
    a1 = *(char **)a1;
  return std::_Traits_find<std::char_traits<char>>(a1, v3, Size, a2, Size);
}
