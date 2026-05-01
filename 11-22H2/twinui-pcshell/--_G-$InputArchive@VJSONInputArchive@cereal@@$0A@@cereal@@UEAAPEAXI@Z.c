/*
 * XREFs of ??_G?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x180417940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x18018D488 (--1-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::`scalar deleting destructor'(void *a1, char a2)
{
  cereal::InputArchive<cereal::JSONInputArchive,0>::~InputArchive<cereal::JSONInputArchive,0>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
