/*
 * XREFs of sub_140831AEC @ 0x140831AEC
 * Callers:
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 */

void *__fastcall sub_140831AEC(volatile signed __int32 *Object)
{
  void *result; // rax
  _OWORD v3[17]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(v3, 0, sizeof(v3));
  _InterlockedOr(Object + 281, 0x400001u);
  if ( *((_QWORD *)Object + 175) )
  {
    *(_QWORD *)&v3[0] = 0x800600038LL;
    DWORD2(v3[2]) = 2;
    memset(&v3[3], 0, 48);
    return (void *)sub_14092A070((PVOID)Object);
  }
  return result;
}
