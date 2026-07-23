/*
 * XREFs of sub_140A7131C @ 0x140A7131C
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 *     sub_140A7434C @ 0x140A7434C (sub_140A7434C.c)
 * Callees:
 *     sub_1403DC7CC @ 0x1403DC7CC (sub_1403DC7CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

bool __fastcall sub_140A7131C(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  char *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-40h] BYREF
  __int128 v5; // [rsp+38h] [rbp-38h] BYREF
  __int128 v6; // [rsp+48h] [rbp-28h] BYREF
  int v7; // [rsp+58h] [rbp-18h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-14h]
  __int16 LockArray_high; // [rsp+5Eh] [rbp-12h]
  unsigned int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]

  v1 = *a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v4 = 0;
  v11 = 0;
  v5 = 0LL;
  v6 = 0LL;
  sub_140A6F124(v2, (__int64)&unk_140CE2A00, v1, 0, 4, &v4);
  if ( (unsigned __int64)v4 + 16 > (unsigned int)dword_140C097F8 )
    v4 = dword_140C097F8 - 16;
  v8 = word_140D069A4;
  v7 = 12848;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  LOWORD(v6) = 16;
  *((_QWORD *)&v6 + 1) = &v7;
  v10 = v4;
  LOWORD(v5) = v4;
  *((_QWORD *)&v5 + 1) = &unk_140CE2A00;
  KdSendPacket(3LL, &v6, &v5, &xmmword_140C31E60);
  return sub_1403DC7CC();
}
