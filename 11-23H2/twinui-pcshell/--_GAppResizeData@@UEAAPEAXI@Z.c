/*
 * XREFs of ??_GAppResizeData@@UEAAPEAXI@Z @ 0x1805DE280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x1805DE23C (--1AppResizeData@@UEAA@XZ.c)
 */

AppResizeData *__fastcall AppResizeData::`scalar deleting destructor'(AppResizeData *this, char a2)
{
  AppResizeData::~AppResizeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
