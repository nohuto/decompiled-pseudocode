/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$2 @ 0x180586898
 * Callers:
 *     <none>
 * Callees:
 *     ??1path@filesystem@std@@QEAA@XZ @ 0x180575E00 (--1path@filesystem@std@@QEAA@XZ.c)
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    std::filesystem::path::~path(a2 + 192);
  }
}
