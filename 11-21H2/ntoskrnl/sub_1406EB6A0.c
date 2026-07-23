/*
 * XREFs of sub_1406EB6A0 @ 0x1406EB6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140772648 @ 0x140772648 (sub_140772648.c)
 */

char __fastcall sub_1406EB6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  int v6; // edi
  int v7; // esi
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a4 + 28) == 0;
  *(_OWORD *)((char *)v13 + 8) = 0LL;
  v6 = a2;
  v7 = a1;
  if ( !v4 )
  {
    *(_QWORD *)&v13[0] = 0LL;
    sub_14042A5E0(a1, a2);
  }
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
  {
    v12 = *(_QWORD *)a4;
    v11 = *(_DWORD *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 16);
    v13[0] = 0LL;
    sub_140772648(v7, v6, 3, v8, v10, v11, (__int64)v13, v12);
  }
  return 0;
}
