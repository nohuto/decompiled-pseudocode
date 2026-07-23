/*
 * XREFs of sub_1403DF080 @ 0x1403DF080
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     sub_1405430DC @ 0x1405430DC (sub_1405430DC.c)
 *     sub_1405448D4 @ 0x1405448D4 (sub_1405448D4.c)
 *     sub_14054560C @ 0x14054560C (sub_14054560C.c)
 *     sub_14054A050 @ 0x14054A050 (sub_14054A050.c)
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 *     sub_140B5210C @ 0x140B5210C (sub_140B5210C.c)
 */

__int64 __fastcall sub_1403DF080(__int64 a1)
{
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( HviIsAnyHypervisorPresent() && (dword_140D068B8 & 4) == 0 )
  {
    CallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(&CallbackRecord, sub_140543910, KbCallbackSecondaryDumpData, &Component);
  }
  if ( byte_140D0688B )
  {
    sub_140B5210C();
    sub_14054560C(KeGetCurrentPrcb());
    sub_14054A050();
    if ( (dword_140D068B8 & 0x10) != 0 )
    {
      v4 = 0LL;
      if ( (int)sub_1405448D4(1LL, &v4, &v5) >= 0 )
        qword_140D05328 = MmMapIoSpaceEx(v5, 4096LL, 2u);
    }
    LOBYTE(v3) = 1;
    sub_1405430DC(v3);
    dword_140D0688C |= 8u;
    sub_140B4EC40(a1);
    if ( (dword_140D068B8 & 4) != 0 || byte_140D06888 )
      sub_14054B14C(*(_QWORD *)(a1 + 240) + 2504LL);
  }
  return 0LL;
}
