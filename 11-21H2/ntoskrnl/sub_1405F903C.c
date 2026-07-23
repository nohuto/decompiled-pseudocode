/*
 * XREFs of sub_1405F903C @ 0x1405F903C
 * Callers:
 *     sub_1405FA3A4 @ 0x1405FA3A4 (sub_1405FA3A4.c)
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_1403924A0 @ 0x1403924A0 (sub_1403924A0.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_1405F6380 @ 0x1405F6380 (sub_1405F6380.c)
 *     sub_1405FB4F4 @ 0x1405FB4F4 (sub_1405FB4F4.c)
 */

__int64 __fastcall sub_1405F903C(_QWORD *a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // edi
  int v4; // r12d
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int16 v10; // bx
  _DWORD *v11; // rax
  int v12; // r9d
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  v2 = sub_140261818(3);
  v3 = 0;
  v4 = (int)v2;
  if ( v2 )
  {
    if ( sub_1405F6380((__int64)&v14, a1) == -1 )
    {
LABEL_18:
      v3 = -1073741818;
      goto LABEL_19;
    }
    v5 = *((_QWORD *)&v14 + 1);
    v6 = v14;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_19;
      v5 += 8LL;
      v7 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
      *((_QWORD *)&v14 + 1) = v5;
      if ( v5 >= v6 + 8 * v7 )
      {
        if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
        {
          v8 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          v8 = sub_1405F616C((_DWORD **)a1, v6);
          if ( v8 == -1 )
          {
            v9 = -1LL;
            goto LABEL_15;
          }
        }
        if ( !v8 )
        {
          v9 = 0LL;
          goto LABEL_15;
        }
        v5 = v8 + 16;
        *(_QWORD *)&v14 = v8;
        *((_QWORD *)&v14 + 1) = v8 + 16;
        v6 = v8;
      }
      v9 = v5;
LABEL_15:
      if ( !v9 )
        goto LABEL_19;
      if ( v9 == -1 )
        goto LABEL_18;
      v10 = sub_1403924A0(a1, v9)[1] & 0xFFF;
      v11 = sub_1403924A0(a1, v9);
      sub_1405FB4F4(v4, 2, v9, v12, *v11, (char)a1, v10, 0);
    }
  }
  v3 = -1073741637;
LABEL_19:
  sub_140381960((__int64 *)&v14, a1);
  return v3;
}
