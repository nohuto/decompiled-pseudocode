/*
 * XREFs of PspWow64SetupUserStack @ 0x1407DE6A0
 * Callers:
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE750 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int UserStack; // edi
  char v9; // cl
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+30h] [rbp-48h] BYREF

  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(&v11, 0, sizeof(v11));
  if ( !v5 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)&v11);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess(&v11);
    v9 = 4;
LABEL_4:
    *(_BYTE *)a4 = v9 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess(&v11);
  return (unsigned int)UserStack;
}
