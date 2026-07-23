/*
 * XREFs of sub_1406C321C @ 0x1406C321C
 * Callers:
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_14097A0B0 @ 0x14097A0B0 (sub_14097A0B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     sub_14092AB78 @ 0x14092AB78 (sub_14092AB78.c)
 */

__int64 __fastcall sub_1406C321C(PVOID Object, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *v6; // rcx
  _QWORD v7[34]; // [rsp+20h] [rbp-128h] BYREF

  memset(v7, 0, sizeof(v7));
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)CurrentThread + 344);
    if ( (result & 4) == 0 )
    {
      if ( *((_QWORD *)Object + 175) )
      {
        v6 = KeGetCurrentThread();
        if ( (*((_DWORD *)v6 + 29) & 0x400) != 0
          || *((_BYTE *)v6 + 586) == 1
          || !*((_QWORD *)v6 + 30)
          || Object != *((PVOID *)CurrentThread + 68)
          || (result = sub_14092AB78(), !(_DWORD)result) )
        {
          v7[6] = a2;
          v7[0] = 0x800380010LL;
          LODWORD(v7[5]) = 6;
          return sub_14092A070(Object);
        }
      }
    }
  }
  return result;
}
