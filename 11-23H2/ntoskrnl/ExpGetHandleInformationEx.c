/*
 * XREFs of ExpGetHandleInformationEx @ 0x1409F67C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     ObGetHandleInformationEx @ 0x14097B84C (ObGetHandleInformationEx.c)
 */

__int64 __fastcall ExpGetHandleInformationEx(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int HandleInformation; // ebx
  _DWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0LL;
  P = 0LL;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    HandleInformation = ObGetHandleInformationEx(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return HandleInformation;
  }
  return result;
}
