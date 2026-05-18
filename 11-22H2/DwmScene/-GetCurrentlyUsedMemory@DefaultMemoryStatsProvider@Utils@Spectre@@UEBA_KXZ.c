/*
 * XREFs of ?GetCurrentlyUsedMemory@DefaultMemoryStatsProvider@Utils@Spectre@@UEBA_KXZ @ 0x1800211D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Spectre::Utils::DefaultMemoryStatsProvider::GetCurrentlyUsedMemory(
        Spectre::Utils::DefaultMemoryStatsProvider *this)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  pExceptionObject[1] = "Not implemented yet";
  pExceptionObject[0] = &std::logic_error::`vftable';
  throw (std::logic_error *)pExceptionObject;
}
