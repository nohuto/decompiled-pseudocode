/*
 * XREFs of ?get_Type@SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAW4SnapEventType@23456@@Z @ 0x1801C1440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::get_Type(
        Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData *this,
        enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return 0LL;
}
