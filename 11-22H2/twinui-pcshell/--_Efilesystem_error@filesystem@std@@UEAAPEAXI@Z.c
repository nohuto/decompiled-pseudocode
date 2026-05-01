/*
 * XREFs of ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x1803D52A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x1803D4AAC (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 */

std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::`vector deleting destructor'(
        std::filesystem::filesystem_error *this,
        char a2)
{
  std::filesystem::filesystem_error::~filesystem_error(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
