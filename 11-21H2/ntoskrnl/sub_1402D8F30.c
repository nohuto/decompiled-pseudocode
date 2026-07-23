/*
 * XREFs of sub_1402D8F30 @ 0x1402D8F30
 * Callers:
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     sub_140B085F8 @ 0x140B085F8 (sub_140B085F8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D925C @ 0x1402D925C (sub_1402D925C.c)
 *     sub_1402D92AC @ 0x1402D92AC (sub_1402D92AC.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PVOID __fastcall sub_1402D8F30(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  char *v10; // r13
  unsigned __int8 v11; // al
  __int64 v12; // r14
  __int64 v13; // r9
  PVOID result; // rax
  __int16 v15; // cx
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  BOOL v18; // r15d
  __int64 v19; // r11
  int v20; // eax
  unsigned __int8 v21; // [rsp+20h] [rbp-128h]
  unsigned __int64 v23; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-110h]
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v24 = a3;
  v5 = a1;
  memset(v25, 0, 0xB8uLL);
  v6 = 0LL;
  v25[3] = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = 0LL;
  LODWORD(v25[1]) = 20;
  v9 = 0LL;
  v10 = sub_14026DFC0(1);
  sub_1402D96AC(v5 + 160, 2LL);
  v11 = sub_1402CF4F0((__int64)v10);
  v21 = v11;
  if ( a2 <= v3 )
  {
    do
    {
      if ( !v9 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          sub_14032F1B0(v25);
          v8 += sub_1402D92AC(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v9 )
          sub_14020D8D0((__int64)v10, v9);
        v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        sub_14031DE00(v10, v9, 0LL);
      }
      if ( !(unsigned __int8)sub_1402D925C(v5, a2) )
      {
        v12 = sub_140317A10(a2);
        v23 = v12;
        if ( (v12 & 1) != 0 )
        {
          sub_140317A10(&v23);
          if ( (sub_14033A410(0xFFFFFFFFFFLL, v7) & 0xF) == 9 )
          {
            v15 = *(_WORD *)(v13 + 32);
            if ( v15 == 1 || v15 == 2 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              v16 = a2;
              if ( v6 )
                v16 = v6;
              v6 = v16;
              sub_14026ED30(v16, v7);
              v17 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v18 = 0;
              v23 = v17;
              if ( (unsigned int)sub_140317A80(a2) )
              {
                v20 = sub_140229550();
                v19 = 1LL;
                v18 = v20 != 0;
              }
              else
              {
                v19 = 1LL;
              }
              *(_QWORD *)a2 = v17;
              if ( v18 )
                sub_1402294F0(a2, v17);
              sub_1402CF280((__int64)v25, v7, v19, 0);
              v3 = v24;
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v6 )
        {
          sub_14032F1B0(v25);
          v8 += sub_1402D92AC(v6, a2 - 8);
          v6 = 0LL;
        }
        v5 = a1;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v3 );
    if ( v6 )
    {
      sub_14032F1B0(v25);
      v8 += sub_1402D92AC(v6, v3);
    }
    if ( v9 )
      sub_14020D8D0((__int64)v10, v9);
    v11 = v21;
  }
  sub_1402B0CE0((__int64)v10, v11);
  result = (PVOID)sub_1402D94D8(v5 + 160, 2LL);
  if ( v8 )
  {
    result = *(PVOID *)(v5 + 48);
    if ( result == qword_140D06988 || result == qword_140D068F0 )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, v8);
  }
  return result;
}
