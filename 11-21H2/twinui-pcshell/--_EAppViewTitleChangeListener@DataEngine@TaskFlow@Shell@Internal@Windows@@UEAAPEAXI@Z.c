/*
 * XREFs of ??_EAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A70F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1800A712C (--1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::~AppViewTitleChangeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
