/*
 * XREFs of ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x180417BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

cereal::JSONOutputArchive *__fastcall cereal::JSONOutputArchive::`vector deleting destructor'(
        cereal::JSONOutputArchive *this,
        char a2)
{
  cereal::JSONOutputArchive::~JSONOutputArchive(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
