/*
 * XREFs of sub_140AB23B0 @ 0x140AB23B0
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB2168 @ 0x140AB2168 (sub_140AB2168.c)
 *     sub_140AB2254 @ 0x140AB2254 (sub_140AB2254.c)
 *     sub_140AB32D4 @ 0x140AB32D4 (sub_140AB32D4.c)
 *     sub_140AB346C @ 0x140AB346C (sub_140AB346C.c)
 *     sub_140AB34D0 @ 0x140AB34D0 (sub_140AB34D0.c)
 *     sub_140AB35BC @ 0x140AB35BC (sub_140AB35BC.c)
 *     sub_140AB36C0 @ 0x140AB36C0 (sub_140AB36C0.c)
 *     sub_140AB3760 @ 0x140AB3760 (sub_140AB3760.c)
 *     sub_140AB378C @ 0x140AB378C (sub_140AB378C.c)
 */

__int64 __fastcall sub_140AB23B0(_BYTE *a1, __int64 a2, char a3, int *a4)
{
  int v7; // r14d
  bool v8; // r15
  char v9; // r12
  int v10; // r9d
  int v11; // r9d
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rbx
  unsigned __int8 v23; // [rsp+28h] [rbp-38h]
  char v24[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  volatile void *v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  char v28; // [rsp+98h] [rbp+38h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v28 = 0;
  v24[0] = 0;
  if ( !a2 && (a3 & 1) == 0 )
    a1[1] = 8;
  v7 = sub_140AB2168((__int64)a1, a2, a4);
  if ( v7 >= 0 )
  {
    if ( !a2 )
      return 0;
    v8 = (a3 & 2) != 0;
    sub_140AB2254((__int64)a1, a2, (__int64 *)&v26, &v28, v24);
    v9 = v24[0];
    LOBYTE(v10) = v28;
    v7 = sub_140AB346C((_DWORD)a1, a2, (_DWORD)v26, v10, v24[0], (__int64)&v25);
    if ( v7 < 0 )
      return (unsigned int)v7;
    LOBYTE(v11) = (a1[25] & 4) != 0;
    v12 = (_QWORD *)sub_140AB32D4((_DWORD)a1, a2, ((unsigned __int8)a1[26] >> 3) & 7, v11, 1);
    v13 = sub_140AB3760(a1, *v12);
    v15 = v13;
    if ( (a3 & 2) != 0 )
    {
      v15 = v25;
      v16 = v13;
    }
    else
    {
      v16 = v25;
    }
    v17 = a3 & 0x38;
    if ( v17 )
    {
      if ( v17 == 8 )
      {
        v18 = v16 | v15;
        goto LABEL_24;
      }
      if ( v17 != 16 )
      {
        if ( v17 == 24 )
        {
          v21 = v16 - (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
          LODWORD(v14) = (_DWORD)a1;
LABEL_22:
          v18 = v21 - v15;
          sub_140AB35BC(v14, a2, v18, v16, v15);
          goto LABEL_30;
        }
        if ( v17 != 32 )
        {
          if ( v17 != 40 )
          {
            if ( v17 != 48 )
            {
              sub_140AB35BC(v14, a2, v16 - v15, v16, v15);
              return (unsigned int)v7;
            }
            v18 = v16 ^ v15;
            v19 = v16 ^ v15;
            goto LABEL_20;
          }
          v21 = v16;
          goto LABEL_22;
        }
        v18 = v16 & v15;
LABEL_24:
        v19 = v18;
LABEL_20:
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
        sub_140AB36C0(v14, a2, v19);
        goto LABEL_30;
      }
      v18 = v16 + v15 + (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
    }
    else
    {
      v18 = v15 + v16;
    }
    sub_140AB34D0(v14, a2, v18, v16, v15);
LABEL_30:
    if ( v8 )
    {
      LOBYTE(v20) = (a1[25] & 4) != 0;
      sub_140AB378C((_DWORD)a1, a2, ((unsigned __int8)a1[26] >> 3) & 7, v20, v18);
    }
    else
    {
      v23 = a1[1] >> 3;
      v27 = v18;
      return (unsigned int)sub_140AB2008(a2, &v27, v26, v28, v9, v23, 1);
    }
  }
  return (unsigned int)v7;
}
