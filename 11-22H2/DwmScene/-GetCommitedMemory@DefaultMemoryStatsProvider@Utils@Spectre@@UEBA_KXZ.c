/*
 * XREFs of ?GetCommitedMemory@DefaultMemoryStatsProvider@Utils@Spectre@@UEBA_KXZ @ 0x180021190
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Spectre::Utils::DefaultMemoryStatsProvider::GetCommitedMemory(
        Spectre::Utils::DefaultMemoryStatsProvider *this)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  pExceptionObject[1] = "Not implemented yet";
  pExceptionObject[0] = &std::logic_error::`vftable';
  throw (std::logic_error *)pExceptionObject;
}
