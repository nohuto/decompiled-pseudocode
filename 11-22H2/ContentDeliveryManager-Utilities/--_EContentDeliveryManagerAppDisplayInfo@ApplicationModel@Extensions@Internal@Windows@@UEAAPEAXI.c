/*
 * XREFs of ??_EContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C3350
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA@XZ @ 0x1800C3310 (--1ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vector deleting destructor'(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *this,
        char a2)
{
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::~ContentDeliveryManagerAppDisplayInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
