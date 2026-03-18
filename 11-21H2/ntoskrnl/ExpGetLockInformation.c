/*
 * XREFs of ExpGetLockInformation @ 0x1409F6770
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     ExQuerySystemLockInformation @ 0x140A6C8B4 (ExQuerySystemLockInformation.c)
 */

__int64 __fastcall ExpGetLockInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int SystemLockInformation; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0LL;
  P = 0LL;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    SystemLockInformation = ExQuerySystemLockInformation(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return SystemLockInformation;
  }
  return result;
}
