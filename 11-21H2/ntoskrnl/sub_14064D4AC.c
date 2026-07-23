/*
 * XREFs of sub_14064D4AC @ 0x14064D4AC
 * Callers:
 *     sub_14064E738 @ 0x14064E738 (sub_14064E738.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AB0A18 @ 0x140AB0A18 (sub_140AB0A18.c)
 *     sub_140AB1400 @ 0x140AB1400 (sub_140AB1400.c)
 * Callees:
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_1403A8954 @ 0x1403A8954 (sub_1403A8954.c)
 *     sub_1403A9744 @ 0x1403A9744 (sub_1403A9744.c)
 */

__int64 __fastcall sub_14064D4AC(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-Ch]
  unsigned int v15; // [rsp+28h] [rbp-8h]
  unsigned int v16; // [rsp+58h] [rbp+28h] BYREF
  unsigned int i; // [rsp+5Ch] [rbp+2Ch]

  if ( (dword_140C0DF90 & 1) == 0 )
    return 3221225473LL;
  v3 = DWORD2(xmmword_140C0DF20);
  v4 = DWORD1(xmmword_140C0DF20);
  v14 = DWORD1(xmmword_140C0DF20);
  v6 = (unsigned int)sub_1403A8368() >> 3;
  v7 = 8120;
  v15 = v5;
  v8 = v3;
  v13 = v3;
  v9 = v14;
  v10 = v6 * v14 * v3;
  if ( v10 < 0x1FB8 )
    v7 = v6 * v14 * v3;
  if ( v10 > v7 )
  {
    do
    {
      v8 >>= 1;
      v9 >>= 1;
      v5 >>= 1;
    }
    while ( v6 * v9 * v8 > v7 );
    v13 = v8;
    v14 = v9;
    v15 = v5;
  }
  v11 = sub_1403A8368();
  result = sub_1403A9744((int *)&v13, v11, (__int64)byte_140D01C40, 0x2000u);
  if ( (int)result >= 0 )
  {
    sub_1403A8954((__int64)byte_140D01C40, a1);
    v12 = 0;
    for ( i = 0; v12 < v4; i = v12 )
    {
      v16 = 0;
      if ( v3 )
      {
        do
        {
          sub_1403A7F70(byte_140D01C40, (__int64)&v16);
          if ( (byte_140D01C50 & 0x10) != 0 )
            sub_1403A8954((__int64)byte_140D01C40, a1);
          v16 += v8;
        }
        while ( v16 < v3 );
        v12 = i;
      }
      v12 += v9;
    }
    dword_140C0DF90 |= 0x2000u;
    return 0LL;
  }
  return result;
}
