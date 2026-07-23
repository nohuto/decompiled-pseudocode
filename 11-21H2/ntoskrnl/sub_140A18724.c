/*
 * XREFs of sub_140A18724 @ 0x140A18724
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1402D89E8 @ 0x1402D89E8 (sub_1402D89E8.c)
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A15078 @ 0x140A15078 (sub_140A15078.c)
 *     sub_140A1863C @ 0x140A1863C (sub_140A1863C.c)
 *     sub_140A18C2C @ 0x140A18C2C (sub_140A18C2C.c)
 */

__int64 __fastcall sub_140A18724(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _OWORD v9[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  unsigned int v11; // [rsp+88h] [rbp+18h] BYREF

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( !*(_DWORD *)(a2 + 84) )
  {
    v4 = sub_140A15078(a2);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741554 )
      goto LABEL_5;
    v5 = (_QWORD *)(a2 + 8);
    if ( v4 == -1073741554 )
    {
      *(_QWORD *)&v9[0] = *v5;
      v4 = sub_1403CB4C0((__int64)v9, 0);
      if ( v4 < 0 )
      {
LABEL_5:
        sub_1406E0C3C(1LL, (__int64)"AslpFileGetChecksumAttributes");
        goto LABEL_12;
      }
      v5 = v9;
    }
    v11 = 0;
    v4 = sub_140A1863C(&v11, (__int64)v5);
    if ( v4 >= 0 )
    {
      v6 = v11;
      *(_DWORD *)(a1 + 88) |= 1u;
      v11 = 0;
      *(_QWORD *)(a1 + 80) = v6;
      *(_DWORD *)(a1 + 64) = 2;
      *(_QWORD *)(a1 + 72) = 4LL;
      v4 = sub_140A18C2C(&v11, v5);
      if ( v4 >= 0 )
      {
        v7 = v11;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v7;
        v4 = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_12;
      }
    }
    goto LABEL_5;
  }
  sub_1406E0C3C(1LL, (__int64)"AslpFileGetChecksumAttributes");
  *(_DWORD *)(a1 + 88) |= 2u;
  v4 = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_12:
  sub_1402D89E8((__int64)v9);
  return (unsigned int)v4;
}
