/*
 * XREFs of sub_140549558 @ 0x140549558
 * Callers:
 *     sub_1405486E0 @ 0x1405486E0 (sub_1405486E0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054934C @ 0x14054934C (sub_14054934C.c)
 */

__int64 __fastcall sub_140549558(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 48 * v3);
    v11 = HvlInvokeHypercall(166);
    sub_14039D8F0((__int64)&v8);
    *a3 = WORD2(v11) & 0xFFF;
    return (unsigned __int16)v11;
  }
  else
  {
    if ( (unsigned int)v3 >= 2 )
      LODWORD(v3) = 2;
    return sub_14054934C(v3, (__int64)a2, a3);
  }
}
