/*
 * XREFs of ??_EAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1804A5780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1804A56F8 (--1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::~AppViewTitleChangeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
