/*
 * XREFs of sub_14081B360 @ 0x14081B360
 * Callers:
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 *     sub_14081B21C @ 0x14081B21C (sub_14081B21C.c)
 *     sub_14081B2F0 @ 0x14081B2F0 (sub_14081B2F0.c)
 *     sub_1409A1604 @ 0x1409A1604 (sub_1409A1604.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall sub_14081B360(__int64 a1, int a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  NTSTATUS result; // eax
  LARGE_INTEGER v7; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v8; // [rsp+48h] [rbp-B8h] BYREF
  _WORD SendMessageA[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 SendMessageA_32; // [rsp+70h] [rbp-90h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES v11[20]; // [rsp+80h] [rbp-80h] BYREF

  v5 = qword_140C1C1F0;
  if ( qword_140C1C1F0 )
  {
    memset(SendMessageA, 0, sizeof(SendMessageA));
    SendMessageA[0] = a3 + 4;
    SendMessageA_32 = 0LL;
    DWORD2(SendMessageA_32) = a2;
    SendMessageA[1] = a3 + 44;
    memmove((char *)&SendMessageA_32 + 12, a4, a3);
    if ( a5 )
    {
      memset(v11, 0, sizeof(v11));
      v8 = 48LL;
      v7.QuadPart = -2000000LL;
      return ZwAlpcSendWaitReceivePort(
               v5,
               0x20000u,
               (PPORT_MESSAGE)SendMessageA,
               0LL,
               (PPORT_MESSAGE)SendMessageA,
               &v8,
               v11,
               &v7);
    }
    else
    {
      return ZwAlpcSendWaitReceivePort(v5, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
