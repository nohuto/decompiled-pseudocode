/*
 * XREFs of sub_140A702DC @ 0x140A702DC
 * Callers:
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     sub_1409E91DC @ 0x1409E91DC (sub_1409E91DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 */

__int64 __fastcall sub_140A702DC(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  char v8; // r15
  char *v9; // r14
  const void **v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int128 v14; // [rsp+28h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v16[16]; // [rsp+48h] [rbp-19h] BYREF

  v2 = a2;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    v6 = (unsigned int)v2;
    do
    {
      v4 += *v5;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  result = (unsigned int)(dword_140C097F8 - 64);
  if ( v4 <= (unsigned int)result )
  {
    v8 = sub_140A6F7A0(0LL);
    v9 = (char *)&unk_140CE2A00;
    if ( (_DWORD)v2 )
    {
      v10 = (const void **)(a1 + 8);
      do
      {
        memmove(v9, *(v10 - 1), *(unsigned int *)v10);
        v11 = *(unsigned int *)v10;
        v10 += 2;
        v9 += v11;
        --v2;
      }
      while ( v2 );
    }
    LOWORD(v16[1]) = word_140D069A4;
    v16[0] = 13104;
    HIWORD(v16[1]) = HIDWORD(KeGetPcr()[1].LockArray);
    *((_QWORD *)&v15 + 1) = v16;
    v16[2] = v4;
    LOWORD(v15) = 64;
    LOWORD(v14) = v4;
    *((_QWORD *)&v14 + 1) = &unk_140CE2A00;
    KdSendPacket(9LL, &v15, &v14, &xmmword_140C31E60);
    LOBYTE(v12) = v8;
    return sub_140A6F900(v12, v13);
  }
  return result;
}
