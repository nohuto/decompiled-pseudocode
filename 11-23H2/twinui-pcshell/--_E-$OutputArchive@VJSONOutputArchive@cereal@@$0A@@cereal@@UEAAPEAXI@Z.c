/*
 * XREFs of ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x180417980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x1804168E0 (--1-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 */

void *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::`vector deleting destructor'(void *a1, char a2)
{
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
