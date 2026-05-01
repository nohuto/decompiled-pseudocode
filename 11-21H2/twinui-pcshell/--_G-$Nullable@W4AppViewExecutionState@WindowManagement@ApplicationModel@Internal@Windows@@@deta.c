/*
 * XREFs of ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x1801419F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAA@XZ @ 0x180141B6C (--1-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::~Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
