/*
 * XREFs of IvtInvalidateContextEntry @ 0x14052F224
 * Callers:
 *     IvtUpdateContextEntry @ 0x14052F89C (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeContextEntry @ 0x14052FEA0 (IvtUpdateScalableModeContextEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateContextEntry(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = 0LL;
  v8[0] = ((a3 | ((unsigned __int64)a2 << 16)) << 16) | 0x31;
  result = IvtIommuSendCommand(a1, v8, 1LL);
  if ( a5 )
    return IvtIommuWaitCommand(a1, v7, 1LL);
  return result;
}
