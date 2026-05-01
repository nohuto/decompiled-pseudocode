/*
 * XREFs of ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x1804D9490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAA@XZ @ 0x1804D73E8 (--1-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@detai.c)
 */

void *__fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::~Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
