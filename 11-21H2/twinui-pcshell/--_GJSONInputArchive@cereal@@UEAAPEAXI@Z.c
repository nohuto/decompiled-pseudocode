/*
 * XREFs of ??_GJSONInputArchive@cereal@@UEAAPEAXI@Z @ 0x18034D990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18034D288 (--1JSONInputArchive@cereal@@UEAA@XZ.c)
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
