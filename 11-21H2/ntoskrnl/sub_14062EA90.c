/*
 * XREFs of sub_14062EA90 @ 0x14062EA90
 * Callers:
 *     sub_14020A0D0 @ 0x14020A0D0 (sub_14020A0D0.c)
 * Callees:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062EA90(unsigned __int16 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  ULONGLONG v4; // rbx
  int v8; // ecx
  __int64 *v9; // rdi
  void *v10; // rsi
  unsigned __int8 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  unsigned __int8 v14; // r10
  unsigned __int8 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned __int8 v18; // r10
  unsigned __int64 v19; // [rsp+90h] [rbp-9h] BYREF
  __int128 v20; // [rsp+98h] [rbp-1h] BYREF
  __int128 v21; // [rsp+A8h] [rbp+Fh]

  v4 = qword_140C16008;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( qword_140C16008 )
  {
    v8 = a1 - 266;
    if ( v8 )
    {
      if ( v8 == 4 )
        v9 = qword_140039398;
      else
        v9 = qword_140038AF0;
    }
    else
    {
      v9 = qword_140039720;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v10 = (void *)((*(_QWORD *)(v4 + 104) + 28LL) & -(__int64)(*(_QWORD *)(v4 + 104) != 0LL));
    if ( *(_BYTE *)(v4 + 100) && sub_1403031F0(*(_QWORD *)(v4 + 32) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      sub_140300E50(
        v12,
        v11,
        0,
        0,
        (__int64)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v20,
        0LL,
        *(_WORD *)(v4 + 98),
        v10,
        &v19);
    if ( *(_BYTE *)(v4 + 101) && sub_1403031F0(*(_QWORD *)(v4 + 40) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      sub_140300E50(
        *(_QWORD *)(v4 + 32),
        v14,
        0,
        0,
        (__int64)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v20,
        v13,
        *(_WORD *)(v4 + 98),
        v10,
        &v19);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 32) + 400LL) )
    {
      v20 = 0LL;
      v21 = 0LL;
      if ( *(_BYTE *)(v4 + 102)
        && sub_1403031F0(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 400LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      {
        sub_140300E50(
          v16,
          v15,
          0,
          0,
          (__int64)v9,
          0,
          0,
          a4,
          0LL,
          1u,
          a2,
          a3,
          (__int64)&v20,
          0LL,
          *(_WORD *)(v4 + 98),
          v10,
          &v19);
      }
      if ( *(_BYTE *)(v4 + 103) )
      {
        if ( sub_1403031F0(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 400LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
          sub_140300E50(
            *(_QWORD *)(*(_QWORD *)(v4 + 32) + 400LL),
            v18,
            0,
            0,
            (__int64)v9,
            0,
            0,
            a4,
            0LL,
            1u,
            a2,
            a3,
            (__int64)&v20,
            v17,
            *(_WORD *)(v4 + 98),
            v10,
            &v19);
      }
    }
  }
}
