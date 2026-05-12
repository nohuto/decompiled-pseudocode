/*
 * XREFs of sub_1C003DD30 @ 0x1C003DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008F40 @ 0x1C0008F40 (sub_1C0008F40.c)
 *     sub_1C000B6FC @ 0x1C000B6FC (sub_1C000B6FC.c)
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C00437E4 @ 0x1C00437E4 (sub_1C00437E4.c)
 */

char __fastcall sub_1C003DD30(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax

  v4 = *(_QWORD *)(a1 + 64);
  a4[19] = a3;
  if ( (int)sub_1C0008F40(a4, v4, 1) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v7 = a4[21];
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 44) = -1073741670;
    else
      *(_DWORD *)(v7 + 64) = -1073741670;
    sub_1C00437E4(a4[28], 0LL, a4);
    goto LABEL_8;
  }
  v8 = sub_1C000B6FC(v4, (__int64)a4, v6);
  if ( v8 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_8:
    LOBYTE(v8) = sub_1C000EF50(v4, (__int64)a4, 1);
  }
  return v8;
}
