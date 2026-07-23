/*
 * XREFs of sub_14054961C @ 0x14054961C
 * Callers:
 *     sub_140548BF0 @ 0x140548BF0 (sub_140548BF0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     sub_140549510 @ 0x140549510 (sub_140549510.c)
 */

char __fastcall sub_14054961C(int a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rax
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v4 = a3;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v8 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13, 5, 0LL, 0LL);
  if ( !v8 )
    return sub_140549510(a1, a2);
  v8[1] = 0LL;
  v10 = v8 + 2;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  if ( (_DWORD)v4 )
  {
    v11 = a4 - (_QWORD)v10;
    v12 = v4;
    do
    {
      *v10 = *(__int64 *)((char *)v10 + v11) & 0x800 | (*(__int64 *)((char *)v10 + v11)
                                                      + (*(__int64 *)((char *)v10 + v11) & 0xC00));
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  HvlInvokeHypercall(161);
  return sub_14039D8F0((__int64)&v13);
}
