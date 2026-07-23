/*
 * XREFs of sub_1409311AC @ 0x1409311AC
 * Callers:
 *     sub_1409312DC @ 0x1409312DC (sub_1409312DC.c)
 * Callees:
 *     sub_1403731A0 @ 0x1403731A0 (sub_1403731A0.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     sub_140544258 @ 0x140544258 (sub_140544258.c)
 */

__int64 __fastcall sub_1409311AC(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int16 v9; // bx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v4 = *(unsigned __int16 *)(qword_140D31700[*(unsigned __int16 *)(a1 + 12)] + 2);
  v5 = *(_DWORD *)(qword_140D31700[v4] + 4);
  sub_1403731A0(78, &v13);
  while ( 1 )
  {
    result = sub_140544258(v4, v6, 0);
    if ( (_DWORD)result )
      break;
    v8 = sub_14039DF90((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 40LL);
    *v8 = qword_140D06E30;
    *((_DWORD *)v8 + 2) = a2;
    *((_BYTE *)v8 + 15) = 0;
    *((_DWORD *)v8 + 6) = v5;
    *((_DWORD *)v8 + 7) = -2147483647;
    v8[4] = *(unsigned int *)(a1 + 4);
    v9 = HvlInvokeHypercall(v13);
    sub_14039D8F0((__int64)&v10);
    if ( v9 != 11 )
      return v9 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
