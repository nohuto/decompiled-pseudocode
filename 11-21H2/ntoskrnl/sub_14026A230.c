/*
 * XREFs of sub_14026A230 @ 0x14026A230
 * Callers:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_14025B5E0 @ 0x14025B5E0 (sub_14025B5E0.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_140419138 @ 0x140419138 (sub_140419138.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140591814 @ 0x140591814 (sub_140591814.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14026A230()
{
  __int64 v1; // rcx
  _BYTE v2[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v3[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C50740;
  if ( byte_140D06888 )
  {
    if ( (dword_140D0689C & 0x4000000) != 0 )
    {
      v3[0] = 0LL;
      v3[2] = 0LL;
      v3[1] = 531LL;
      HvlInvokeFastExtendedHypercall(65538, (unsigned int)v3, 24, 0, 0);
    }
    else
    {
      memset(v2, 0, 0x68uLL);
      LOBYTE(v1) = 3;
      sub_140358A20(v1, 0LL, 0LL, v2);
    }
  }
  return sub_1402F391C(4LL, 2LL);
}
