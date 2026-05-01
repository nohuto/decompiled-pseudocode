/*
 * XREFs of ??_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1800AB780
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1800AAE48 (--1AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::~AppViewListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x118uLL);
  return this;
}
