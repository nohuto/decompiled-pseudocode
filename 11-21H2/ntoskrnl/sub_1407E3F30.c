/*
 * XREFs of sub_1407E3F30 @ 0x1407E3F30
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 *     sub_1407E3C20 @ 0x1407E3C20 (sub_1407E3C20.c)
 */

__int64 __fastcall sub_1407E3F30(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+34h] [rbp-14h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v13 = 0;
  v3 = sub_1407E3900(a1, a2, &v14);
  v4 = v14;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(v14 + 16);
    if ( !v6 )
      goto LABEL_7;
    v7 = *(_QWORD *)(v14 + 24) + 32LL * (unsigned int)(v6 - 1);
    v11[1] = *(_QWORD *)(v7 + 8);
    v11[0] = *(_QWORD *)(v7 + 16);
    v12 = *(_DWORD *)(v7 + 24);
    v5 = sub_1407E3C20(v14, (__int64)v11);
    if ( v5 >= 0 )
    {
      v8 = *(_DWORD *)(v4 + 16);
      v5 = 0;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v4 + 24) + 32LL * (unsigned int)(v8 - 1);
        sub_1407E3B7C(a1, *(_QWORD *)v9);
        *(_OWORD *)v9 = 0LL;
        *(_OWORD *)(v9 + 16) = 0LL;
        --*(_DWORD *)(v4 + 16);
        goto LABEL_6;
      }
LABEL_7:
      v5 = -1073741811;
    }
  }
LABEL_6:
  sub_1407E3BE4(a1, v4);
  return (unsigned int)v5;
}
