/*
 * XREFs of ??_GAppResizeData@@UEAAPEAXI@Z @ 0x180525920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x1805258DC (--1AppResizeData@@UEAA@XZ.c)
 */

AppResizeData *__fastcall AppResizeData::`scalar deleting destructor'(AppResizeData *this, char a2)
{
  AppResizeData::~AppResizeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
