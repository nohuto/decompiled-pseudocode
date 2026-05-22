/*
 * XREFs of ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x18012E83C
 * Callers:
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E870 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __noreturn msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow(void)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = 1;
  throw (msl::utilities::SafeIntException *)&pExceptionObject;
}
