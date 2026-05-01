/*
 * XREFs of ??1directory_entry@filesystem@std@@QEAA@XZ @ 0x1805848BC
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Dir_enum_impl_::_1_::dtor$0 @ 0x180584798 (_std--filesystem--_Dir_enum_impl--_Dir_enum_impl_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::directory_entry::~directory_entry(std::filesystem::directory_entry *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 32);
}
