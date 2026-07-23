/*
 * XREFs of sub_140B21F30 @ 0x140B21F30
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14041CEC0 @ 0x14041CEC0 (sub_14041CEC0.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     sub_14084C934 @ 0x14084C934 (sub_14084C934.c)
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 */

char sub_140B21F30()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int128 v9; // [rsp+60h] [rbp-18h]

  v8 = 0;
  v6[1] = 0LL;
  v7 = 0;
  v6[0] = 48LL;
  v6[2] = L" \"";
  v9 = 0LL;
  if ( (int)sub_14041CEC0((__int64)&qword_140D3CEE8, (__int64)v6) < 0 )
    return 0;
  sub_140B22004(v0);
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)sub_14083B300, 0LL) < 0 )
    return 0;
  sub_14084C934(v2, v1, v3, v4);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  sub_1406D2264((char *)&dword_140C04350, 0LL, 0LL);
  return 1;
}
