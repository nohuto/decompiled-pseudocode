/*
 * XREFs of sub_180049BBC @ 0x180049BBC
 * Callers:
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_180048D74 @ 0x180048D74 (sub_180048D74.c)
 *     sub_180056B84 @ 0x180056B84 (sub_180056B84.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

char __fastcall sub_180049BBC(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // edi
  int v6; // esi
  _QWORD *v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rcx
  char result; // al
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+28h] [rbp-49h] BYREF
  __int64 v18; // [rsp+30h] [rbp-41h]
  int v19; // [rsp+38h] [rbp-39h]
  int v20; // [rsp+3Ch] [rbp-35h]
  char v21; // [rsp+40h] [rbp-31h]
  __int128 v22; // [rsp+44h] [rbp-2Dh]
  __int128 v23; // [rsp+54h] [rbp-1Dh]
  char v24; // [rsp+64h] [rbp-Dh]
  bool v25; // [rsp+65h] [rbp-Ch]
  char v26; // [rsp+66h] [rbp-Bh]
  __int16 v27; // [rsp+67h] [rbp-Ah]
  int v28; // [rsp+6Ch] [rbp-5h]
  _QWORD v29[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v31[16]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v32[2]; // [rsp+A8h] [rbp+37h] BYREF

  v4 = a1[18];
  v5 = a4;
  v6 = a3;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a1[18];
  }
  v29[0] = a1[17];
  v29[1] = v4;
  v9 = (_QWORD *)sub_18006958C(v29[0], v31, a3, a4, v17, v18);
  v10 = (__int64 *)sub_180056B84(*v9);
  sub_180010910((__int64)v31);
  sub_180010910((__int64)v29);
  LODWORD(v17) = 0;
  v19 = 0;
  v20 = 0;
  v11 = a1[21];
  v21 = 0;
  v25 = v6 == 1;
  v24 = 1;
  v27 = 256;
  v28 = 3;
  v26 = 0;
  v18 = a2;
  HIDWORD(v17) = v5;
  v22 = 0LL;
  v23 = 0LL;
  if ( !v11 || (result = sub_180048D74(*(_QWORD *)(v11 + 112), (__int64)&v17)) == 0 )
  {
    v13 = sub_180048A80(v10, v32);
    v14 = *v13;
    v15 = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    v30[0] = a1[21];
    v16 = a1[22];
    a1[21] = v14;
    v30[1] = v16;
    a1[22] = v15;
    sub_180010910((__int64)v30);
    sub_180010910((__int64)v32);
    return sub_180096660(a1[21], &v17, 0LL);
  }
  return result;
}
