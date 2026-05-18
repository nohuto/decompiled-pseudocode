/*
 * XREFs of sub_18004EABC @ 0x18004EABC
 * Callers:
 *     sub_18004E1AC @ 0x18004E1AC (sub_18004E1AC.c)
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E6B8 @ 0x18004E6B8 (sub_18004E6B8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_180097030 @ 0x180097030 (sub_180097030.c)
 */

_QWORD *__fastcall sub_18004EABC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  __int64 *v5; // rax
  int v6; // edi
  __int64 v7; // rcx
  int v8; // r9d
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    if ( !a3 || sub_1800122C0((_QWORD *)(v3 + 136)) )
    {
      v7 = *(_QWORD *)(v3 + 144);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v7 = *(_QWORD *)(v3 + 144);
      }
      v6 = 0;
      v10[0] = *(_QWORD *)(v3 + 136);
      v5 = v10;
      v10[1] = v7;
    }
    else
    {
      v5 = (__int64 *)sub_180097030(v3, v11);
      v6 = 2;
    }
    sub_18001872C(a2, v5);
    if ( v8 )
      sub_180010910((__int64)v10);
    if ( v6 )
      sub_180010910((__int64)v11);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
