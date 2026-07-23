/*
 * XREFs of sub_14050745C @ 0x14050745C
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_1405079C8 @ 0x1405079C8 (sub_1405079C8.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140507B48 @ 0x140507B48 (sub_140507B48.c)
 *     sub_14051CD50 @ 0x14051CD50 (sub_14051CD50.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 */

__int64 __fastcall sub_14050745C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-D0h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  if ( !a1 )
  {
    if ( a2 )
    {
      sub_140507B48(a2, BugCheckParameter2);
      KeBugCheckEx(
        0x9Cu,
        LOBYTE(BugCheckParameter2[3]),
        (ULONG_PTR)BugCheckParameter2,
        HIDWORD(BugCheckParameter2[4]),
        LODWORD(BugCheckParameter2[4]));
    }
    LODWORD(BugCheckParameter2[0]) = 1;
    BugCheckParameter2[1] = MEMORY[0xFFFFF78000000014];
    LODWORD(BugCheckParameter2[2]) = a3;
    if ( a3 > 0x80000000 )
      KeBugCheckEx(0x9Cu, a3, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x9Cu, 0LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v6 = sub_140643F2C(&unk_140CE1A98, *(unsigned int *)(a1 + 24));
  v7 = (v6 + 96) & -(__int64)(v6 != 0);
  if ( sub_1403AAE50() == 1 )
  {
    if ( byte_140D016E8 )
      *(_DWORD *)(a1 + 12) |= 0x40u;
    if ( a2 && !(unsigned __int8)sub_14051CD50(*(unsigned int *)(a2 + 4), a2 + 40) )
      *(_DWORD *)(a1 + 12) |= 0x100u;
  }
  if ( v7 )
    PshedRetrieveErrorInfo(a1, v7);
  return WheaReportHwError(a1);
}
