/*
 * XREFs of sub_14045C52A @ 0x14045C52A
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 * Callees:
 *     sub_14025D6C0 @ 0x14025D6C0 (sub_14025D6C0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14045C47C @ 0x14045C47C (sub_14045C47C.c)
 *     sub_14045C4F6 @ 0x14045C4F6 (sub_14045C4F6.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405A7A74 @ 0x1405A7A74 (sub_1405A7A74.c)
 */

__int64 __fastcall sub_14045C52A(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  signed __int64 v10; // rbx
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = (unsigned __int64 *)sub_14045C4F6(a2, *a1);
  v7 = sub_140317A10(a3);
  v9 = *(_DWORD *)(a2 + 56);
  v10 = v7;
  v17 = v7;
  if ( (v9 & 1) != 0 && (v7 & 0x42) == 0 )
    return 0LL;
  v12 = 1;
  if ( (v9 & 0x20) != 0 )
  {
    v13 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v18 = v13;
    if ( !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) && *(__int64 *)(v13 + 8) > 0 )
    {
      v14 = sub_140316400((__int64)(a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v14 < 0 )
      {
        sub_1405A7A74(a1, (unsigned int)v14);
        return 0LL;
      }
      v17 = sub_140317A10(a3);
      v18 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    v15 = sub_1405A6E74(&v18, &v17);
    v10 = v17;
    v12 = v15;
  }
  if ( (v10 & 0x20) == 0 )
  {
    sub_14025D6C0(v8, (volatile signed __int64 *)a3, v10, 1);
    v10 = sub_140317A10(a3);
    v17 = v10;
  }
  if ( v12 )
  {
    v16 = sub_140317A10((unsigned __int64)&v17);
    sub_14045C47C(v6, (v16 >> 12) & 0xFFFFFFFFFFLL, v10);
  }
  return v12;
}
