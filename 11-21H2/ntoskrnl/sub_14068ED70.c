/*
 * XREFs of sub_14068ED70 @ 0x14068ED70
 * Callers:
 *     sub_14068F14C @ 0x14068F14C (sub_14068F14C.c)
 * Callees:
 *     sub_14020B57C @ 0x14020B57C (sub_14020B57C.c)
 *     sub_14020B600 @ 0x14020B600 (sub_14020B600.c)
 *     sub_14068E100 @ 0x14068E100 (sub_14068E100.c)
 */

__int64 __fastcall sub_14068ED70(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  ULONG_PTR v5; // rbx
  _BYTE *v6; // rbp
  __int64 v8; // rsi
  NTSTATUS v11; // edx
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  LODWORD(v15) = 0;
  v6 = (_BYTE *)(a3 + v4);
  v8 = a3;
  v11 = sub_14020B57C(a1, *(void ***)(a1 + 24), v6, a4 - a3, 8u, (ULONG *)&v15);
  if ( v11 >= 0 )
  {
    sub_14068E100(v6, v5, 1);
    sub_14020B57C(v12, *(void ***)(a1 + 24), v6, v5, 2u, (ULONG *)&v15);
    v11 = sub_14020B600(v13, *(void ***)(a1 + 24), v6, v5);
    while ( v8 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v8 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v8 += 4096LL;
    }
    a2[8] -= v5 >> 12;
  }
  return (unsigned int)v11;
}
