/*
 * XREFs of TcglibpAuthenticateSession @ 0x1C007EC1C
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x1C0079150 (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x1C00792A4 (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x1C0079504 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x1C00796A4 (TcglibDeassignNamespaceLocking.c)
 *     TcglibRevertLockingSpEx @ 0x1C0079D28 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x1C0079E88 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1C007A198 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x1C007A358 (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x1C007A4AC (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x1C007A5FC (TcglibSetSidPin.c)
 *     TcglibpValidateSidPin @ 0x1C007E060 (TcglibpValidateSidPin.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpAuthenticateSession(int **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // cc
  __int64 result; // rax
  int *v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a4 <= 0x20u;
  v10 = 0;
  if ( !v4 )
    return 3221225485LL;
  v8 = *a1;
  v9[0] = a3;
  v9[1] = a4;
  TcglibEalLogCommand(v8, "AuthenticateSession", 1, 28, a3, 0LL);
  result = TcglibpCallMethod(
             (__int64)a1,
             a2,
             1LL,
             0x60000001CLL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenAuthenticateParams,
             (__int64)v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseBooleanData,
             (__int64)&v10);
  if ( (int)result >= 0 )
    return v10 == 0 ? 0xC0000022 : 0;
  return result;
}
