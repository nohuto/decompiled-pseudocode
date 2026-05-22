/*
 * XREFs of ??_GCompositionNotificationDeferral@Composition@UI@Windows@@EEAAPEAXI@Z @ 0x180123BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ @ 0x180187DC8 (--1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ.c)
 */

Windows::UI::Composition::CompositionNotificationDeferral *__fastcall Windows::UI::Composition::CompositionNotificationDeferral::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionNotificationDeferral *this,
        char a2)
{
  Windows::UI::Composition::CompositionNotificationDeferral::~CompositionNotificationDeferral(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
