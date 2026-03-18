/*
 * XREFs of ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x1801E24A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x1801E22C4 (--1DataSourceProxy@@UEAA@XZ.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::`scalar deleting destructor'(DataSourceProxy *this, char a2)
{
  DataSourceProxy::~DataSourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
