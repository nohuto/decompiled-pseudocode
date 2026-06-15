/*
 * XREFs of ??_GCHybridPropertyStore@@UEAAPEAXI@Z @ 0x18014E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CHybridPropertyStore@@UEAA@XZ @ 0x18014E428 (--1CHybridPropertyStore@@UEAA@XZ.c)
 */

CHybridPropertyStore *__fastcall CHybridPropertyStore::`scalar deleting destructor'(
        CHybridPropertyStore *this,
        char a2)
{
  CHybridPropertyStore::~CHybridPropertyStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
