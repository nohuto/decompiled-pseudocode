/*
 * XREFs of InbvSetFunction @ 0x1403D7134
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C54D08;
  if ( (unsigned int)(dword_140C54D08 - 3) <= 1 )
  {
    if ( qword_140C54D10 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140C54D10 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140C046D0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C54D08 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C04790;
    qword_140C54D10 = (__int64)v4;
  }
  return result;
}
