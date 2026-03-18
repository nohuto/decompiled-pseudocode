/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x1802121E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x180212174 (--1CDataSourceReader@@UEAA@XZ.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  CDataSourceReader::~CDataSourceReader(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
