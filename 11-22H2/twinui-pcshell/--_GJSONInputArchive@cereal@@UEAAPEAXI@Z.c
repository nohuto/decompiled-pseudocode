/*
 * XREFs of ??_GJSONInputArchive@cereal@@UEAAPEAXI@Z @ 0x180417B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18018D35C (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

cereal::JSONInputArchive *__fastcall cereal::JSONInputArchive::`scalar deleting destructor'(
        cereal::JSONInputArchive *this,
        char a2)
{
  cereal::JSONInputArchive::~JSONInputArchive(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
