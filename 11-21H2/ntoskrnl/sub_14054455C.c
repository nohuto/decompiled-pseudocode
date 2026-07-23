/*
 * XREFs of sub_14054455C @ 0x14054455C
 * Callers:
 *     sub_140547110 @ 0x140547110 (sub_140547110.c)
 *     sub_140931064 @ 0x140931064 (sub_140931064.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14054455C(int a1, int a2, void *a3)
{
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  _QWORD *v8; // r12
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v6 = 0;
  v13 = 0LL;
  v10 = 0LL;
  v7 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13, 1, 0LL, 8LL);
  v8 = sub_14039DF90((PHYSICAL_ADDRESS *)&v10, 2, 0LL, 3256LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvlInvokeHypercall(122) )
    v6 = -1073741823;
  else
    memmove(a3, v8, 0xCB8uLL);
  sub_14039D8F0((__int64)&v10);
  sub_14039D8F0((__int64)&v13);
  return v6;
}
