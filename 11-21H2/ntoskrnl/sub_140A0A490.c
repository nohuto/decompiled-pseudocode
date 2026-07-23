/*
 * XREFs of sub_140A0A490 @ 0x140A0A490
 * Callers:
 *     sub_140A0947C @ 0x140A0947C (sub_140A0947C.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExInterlockedPushEntryList @ 0x14063F2E0 (ExInterlockedPushEntryList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int __fastcall sub_140A0A490(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned int v2; // eax
  _SINGLE_LIST_ENTRY *Pool2; // rax
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  v2 = dword_140C0DA94 << 12;
  if ( (unsigned int)(dword_140C0DA94 << 12) > 0xA00000 )
    v2 = 10485760;
  if ( 16LL * dword_140C0E9A0 >= (unsigned __int64)v2 )
  {
    Src[7] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483597;
    Src[4] = 1280201291;
    Src[6] = 2;
    LODWORD(Pool2) = WheaLogInternalEvent(Src);
  }
  else
  {
    Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(256LL, 16LL, 1634035799LL);
    if ( Pool2 )
    {
      _InterlockedIncrement(&dword_140C0E9A0);
      Pool2[1].Next = a1;
      LODWORD(Pool2) = (unsigned int)ExInterlockedPushEntryList(&stru_140C0E980, Pool2, &qword_140C0E988);
      _InterlockedIncrement(&dword_140C0E990);
    }
  }
  return (int)Pool2;
}
