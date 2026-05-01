/*
 * XREFs of ??_GUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A71A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1800A71DC (--1UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`scalar deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::~UserPresenceListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
