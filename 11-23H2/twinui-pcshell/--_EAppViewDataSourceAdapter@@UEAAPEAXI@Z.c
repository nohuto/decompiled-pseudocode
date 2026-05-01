/*
 * XREFs of ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x180081E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x180081E7C (--1AppViewDataSourceAdapter@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::`vector deleting destructor'(
        AppViewDataSourceAdapter *this,
        char a2)
{
  AppViewDataSourceAdapter::~AppViewDataSourceAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
