/*
 * XREFs of sub_1403C3FA0 @ 0x1403C3FA0
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14036F5D4 @ 0x14036F5D4 (sub_14036F5D4.c)
 *     sub_1403C4368 @ 0x1403C4368 (sub_1403C4368.c)
 *     sub_1403C43E0 @ 0x1403C43E0 (sub_1403C43E0.c)
 *     sub_1403C445C @ 0x1403C445C (sub_1403C445C.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 */

__int64 __fastcall sub_1403C3FA0(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // esi
  __int128 v4; // xmm6
  __int64 v5; // rdx
  __int64 *v6; // r14
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // [rsp+28h] [rbp-59h]
  __int128 v13; // [rsp+38h] [rbp-49h]
  __int128 v14; // [rsp+48h] [rbp-39h] BYREF
  __int128 v15; // [rsp+58h] [rbp-29h] BYREF
  __int128 v16; // [rsp+68h] [rbp-19h] BYREF
  __int128 v17; // [rsp+78h] [rbp-9h] BYREF
  __int128 v18; // [rsp+88h] [rbp+7h] BYREF
  __int64 v19; // [rsp+98h] [rbp+17h]
  __int64 v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  result = sub_1403C445C();
  if ( (int)result >= 0 )
  {
    dword_140C1BBE0 = 1279;
    sub_1403C43E0(&v18);
    v3 = 0;
    if ( dword_140C5EA20 )
    {
      v4 = v18;
      while ( 1 )
      {
        v5 = 0LL;
        v12 = 0LL;
        LOWORD(v12) = 259;
        v6 = &qword_140C5EA40[1048 * v3];
        BYTE2(v12) = v3;
        v14 = v12;
        if ( *((_QWORD *)&v18 + 1) )
          v5 = 0x4000000LL;
        result = sub_14036F5D4(&v14, v5, &v20);
        if ( (int)result < 0 )
          break;
        v7 = *((_QWORD *)&v18 + 1) == 0LL;
        v8 = v20;
        v6[1] = v20;
        if ( !v7 )
        {
          v9 = v19;
          *(_OWORD *)(v8 + 192) = v4;
          *(_QWORD *)(v8 + 208) = v9;
          *(_BYTE *)(v8 + 333) = *(_BYTE *)(v8 + 333) & 0xF8 | 1;
          *(_BYTE *)(v8 + 525) = *(_BYTE *)(v8 + 525) & 0xF8 | 1;
        }
        sub_1403C4368(v6 + 528);
        *(_QWORD *)(v8 + 40) = v6 + 528;
        v15 = v12;
        result = sub_14036F5D4(&v15, 0x40000000LL, &v20);
        if ( (int)result < 0 )
          break;
        ++v3;
        *v6 = v20;
        if ( v3 >= dword_140C5EA20 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v13 = 0LL;
      *(_WORD *)((char *)&v13 + 1) = 1;
      LOBYTE(v13) = 3;
      v16 = v13;
      result = sub_14036F5D4(&v16, 0LL, &v20);
      if ( (int)result >= 0 )
      {
        v10 = v20;
        v17 = v13;
        *(_DWORD *)(v20 + 880) |= 2u;
        *(_BYTE *)(v10 + 333) |= 8u;
        *(_BYTE *)(v10 + 525) |= 8u;
        qword_140CE1A48 = v10;
        result = sub_14036F5D4(&v17, 0x40000000LL, &v20);
        if ( (int)result >= 0 )
        {
          v11 = v20;
          *(_DWORD *)(v20 + 880) |= 2u;
          *(_BYTE *)(v11 + 333) |= 8u;
          *(_BYTE *)(v11 + 525) |= 8u;
          dword_140CE1E40 = 0;
          qword_140CE1E48 = 0LL;
          dword_140CE1E44 = 0;
          qword_140CE1A40[0] = v11;
          result = sub_140B0ABEC();
          if ( (int)result >= 0 )
          {
            _InterlockedOr(&dword_140D069E8, a1);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
