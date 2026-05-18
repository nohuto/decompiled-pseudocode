/*
 * XREFs of sub_18005C210 @ 0x18005C210
 * Callers:
 *     sub_18001CEA0 @ 0x18001CEA0 (sub_18001CEA0.c)
 *     sub_180059480 @ 0x180059480 (sub_180059480.c)
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18007A998 @ 0x18007A998 (sub_18007A998.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18009DFA8 @ 0x18009DFA8 (sub_18009DFA8.c)
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 *     sub_1800A3E10 @ 0x1800A3E10 (sub_1800A3E10.c)
 *     sub_1800A6640 @ 0x1800A6640 (sub_1800A6640.c)
 *     sub_1800AB0F0 @ 0x1800AB0F0 (sub_1800AB0F0.c)
 *     sub_1800ADC04 @ 0x1800ADC04 (sub_1800ADC04.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_18005BEF0 @ 0x18005BEF0 (sub_18005BEF0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18005C210(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // r8
  char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22[2]; // [rsp+30h] [rbp-30h] BYREF
  char *v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+50h] [rbp-10h]

  v4 = (_DWORD *)a1[14];
  *v4 = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = a2[3];
  v4[4] = a2[4];
  v4[5] = a2[5];
  v4[6] = a2[6];
  v4[7] = a2[7];
  v4[8] = a2[8];
  v4[9] = a2[9];
  v4[10] = a2[10];
  v4[11] = a2[11];
  v4[12] = a2[12];
  if ( a3 )
    sub_18002BCC0((__int64)a1, 1, 1);
  LOBYTE(v5) = sub_18002BA14((__int64)a1, 1);
  if ( (_BYTE)v5 )
  {
    if ( v7 )
    {
      v21 = 0LL;
      v8 = *(_QWORD *)(v7 + 16);
      if ( !v8 )
LABEL_19:
        sub_1800120F4();
      v9 = *(_DWORD *)(v8 + 8);
      do
      {
        if ( !v9 )
          goto LABEL_19;
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      }
      while ( v10 != v9 );
      v21 = *(_OWORD *)(v7 + 8);
      sub_18005BEF0(a1, (__int64 *)&v21);
      sub_180010910((__int64)&v21);
      sub_18002BCC0((__int64)a1, 2, 0);
      LOBYTE(v5) = sub_18002BCC0(v12, v11 + 4, v11);
    }
    else
    {
      v13 = sub_18002B9E0(v6);
      sub_180039EBC(v13, &v23);
      v14 = 0;
      v15 = v24;
      v16 = v23;
      v5 = (v24 - (__int64)v23) >> 4;
      if ( v5 )
      {
        v17 = 0LL;
        do
        {
          v18 = 2 * v17;
          v19 = *(_QWORD *)&v16[8 * v18 + 8];
          if ( v19 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
            v19 = *(_QWORD *)&v16[8 * v18 + 8];
          }
          v22[0] = *(_QWORD *)&v16[8 * v18];
          v22[1] = v19;
          sub_18005BEF0(a1, v22);
          sub_180010910((__int64)v22);
          ++v14;
          v15 = v24;
          v16 = v23;
          v5 = (v24 - (__int64)v23) >> 4;
          v17 = v14;
        }
        while ( v14 < v5 );
      }
      if ( v16 )
      {
        sub_1800126E8((__int64)v16, v15);
        LOBYTE(v5) = sub_180010884(v23, (v25 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v5;
}
