/*
 * XREFs of ??_GUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1804A6570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1804A653C (--1UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`scalar deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::~UserPresenceListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
