/*
 * XREFs of InbvSetFunction @ 0x140388168
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C6AB48;
  if ( (unsigned int)(dword_140C6AB48 - 3) <= 1 )
  {
    if ( qword_140C6AB58 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140C6AB58 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140C04540;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C6AB48 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C04600;
    qword_140C6AB58 = (__int64)v4;
  }
  return result;
}
