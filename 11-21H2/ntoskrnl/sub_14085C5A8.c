/*
 * XREFs of sub_14085C5A8 @ 0x14085C5A8
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     sub_140251C60 @ 0x140251C60 (sub_140251C60.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     NtQuerySystemInformation @ 0x14073D860 (NtQuerySystemInformation.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_14085C8A0 @ 0x14085C8A0 (sub_14085C8A0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14085C5A8()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *Pool2; // rax
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+D0h] [rbp-30h] BYREF

  DestinationString = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1850305601LL);
  qword_140D06DA0 = (__int64)Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 1u);
    qword_140C2A0A0 = 0LL;
    qword_140C2A098 = (__int64)&qword_140C2A090;
    qword_140C2A090 = (__int64)&qword_140C2A090;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = sub_1406BBD90;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)&v5[4] = sub_14074DA90;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    *((_QWORD *)&v5[4] + 1) = sub_14074D800;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(__int128 *)((char *)v5 + 12) = xmmword_140B57AB0;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, (__int16 *)0xF9, &qword_140D069D8);
    if ( v2 >= 0 )
    {
      qword_140D06CC0 = sub_1406A6378(0LL, 0LL);
      sub_140251C60(
        (__int64)&stru_140CF5A80,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))sub_1406C1810,
        (void (__stdcall *)(PVOID, ULONG))sub_1406BB760,
        0,
        840,
        1934453825,
        32,
        0);
      sub_140251C60(
        (__int64)&unk_140CF5B00,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))sub_1406D8240,
        (void (__stdcall *)(PVOID, ULONG))sub_1406D9550,
        0,
        128,
        1229155393,
        32,
        0);
      sub_140251C60((__int64)&unk_140CF5B80, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&stru_140CF5A00, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        dword_140D06A8C = SystemInformation[6];
        dword_140D06A90 = SystemInformation[2];
      }
      if ( dword_140C2A158 )
      {
        sub_14085C8A0(4096LL, 0x8000LL);
      }
      else
      {
        qword_140C2A110 = 0LL;
        qword_140C2A128 = (__int64)&qword_140C2A120;
        qword_140C2A120 = (__int64)&qword_140C2A120;
        qword_140C2A138 = (__int64)&qword_140C2A130;
        qword_140C2A130 = (__int64)&qword_140C2A130;
        qword_140C2A148 = (__int64)&qword_140C2A140;
        qword_140C2A140 = (__int64)&qword_140C2A140;
      }
      qword_140C2A0C0 = 0LL;
      qword_140C2A0D8 = (__int64)&qword_140C2A0D0;
      qword_140C2A0D0 = (__int64)&qword_140C2A0D0;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
