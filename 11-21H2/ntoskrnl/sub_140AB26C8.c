/*
 * XREFs of sub_140AB26C8 @ 0x140AB26C8
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB2168 @ 0x140AB2168 (sub_140AB2168.c)
 *     sub_140AB2254 @ 0x140AB2254 (sub_140AB2254.c)
 *     sub_140AB3214 @ 0x140AB3214 (sub_140AB3214.c)
 *     sub_140AB346C @ 0x140AB346C (sub_140AB346C.c)
 *     sub_140AB34D0 @ 0x140AB34D0 (sub_140AB34D0.c)
 *     sub_140AB35BC @ 0x140AB35BC (sub_140AB35BC.c)
 *     sub_140AB36C0 @ 0x140AB36C0 (sub_140AB36C0.c)
 */

__int64 __fastcall sub_140AB26C8(__int64 a1, __int64 a2, int *a3)
{
  int v6; // ebx
  char v7; // r14
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  int v15; // r9d
  unsigned __int8 v17; // [rsp+28h] [rbp-38h]
  char v18[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  volatile void *v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h] BYREF
  char v22; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v18[0] = 0;
  v6 = sub_140AB2168(a1, a2, a3);
  if ( v6 >= 0 )
  {
    v6 = sub_140AB3214(a1, a2, a3);
    if ( v6 >= 0 )
    {
      if ( !a2 )
        return 0;
      sub_140AB2254(a1, a2, (__int64 *)&v20, &v22, v18);
      v7 = v18[0];
      LOBYTE(v8) = v22;
      v6 = sub_140AB346C(a1, a2, (_DWORD)v20, v8, v18[0], (__int64)&v19);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v9 = *(_QWORD *)(a1 + 32);
      if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 0 )
      {
        if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) == 1 )
        {
          v11 = v19 | v9;
          goto LABEL_19;
        }
        if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 2 )
        {
          if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) == 3 )
          {
            v13 = v19;
            v14 = v19 - (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
            goto LABEL_17;
          }
          if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 4 )
          {
            if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 5 )
            {
              v10 = a1;
              if ( ((*(unsigned __int8 *)(a1 + 26) >> 3) & 7) != 6 )
              {
                sub_140AB35BC(a1, a2, v19 - v9, v19, *(_QWORD *)(a1 + 32));
                return (unsigned int)v6;
              }
              v11 = v19 ^ v9;
              v12 = v19 ^ v9;
              goto LABEL_15;
            }
            v13 = v19;
            v14 = v19;
LABEL_17:
            v11 = v14 - v9;
            sub_140AB35BC(a1, a2, v11, v13, *(_QWORD *)(a1 + 32));
            goto LABEL_25;
          }
          v11 = v19 & v9;
LABEL_19:
          v12 = v11;
          v10 = a1;
LABEL_15:
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
          sub_140AB36C0(v10, a2, v12);
LABEL_25:
          v17 = *(_BYTE *)(a1 + 1) >> 3;
          v21 = v11;
          return (unsigned int)sub_140AB2008(a2, &v21, v20, v22, v7, v17, 1);
        }
        v15 = v19;
        v11 = v19 + v9 + (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) & 1);
      }
      else
      {
        v15 = v19;
        v11 = v9 + v19;
      }
      sub_140AB34D0(a1, a2, v11, v15, *(_QWORD *)(a1 + 32));
      goto LABEL_25;
    }
  }
  return (unsigned int)v6;
}
