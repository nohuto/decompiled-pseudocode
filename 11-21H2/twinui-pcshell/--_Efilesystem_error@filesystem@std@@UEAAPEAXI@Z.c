/*
 * XREFs of ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x18057FA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18057F2BC (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 */

std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::`vector deleting destructor'(
        std::filesystem::filesystem_error *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  std::filesystem::filesystem_error::~filesystem_error(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
