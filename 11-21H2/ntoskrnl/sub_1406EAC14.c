/*
 * XREFs of sub_1406EAC14 @ 0x1406EAC14
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 */

__int64 __fastcall sub_1406EAC14(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v7; // rbx
  _DWORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v8[1] = 0;
  v8[0] = 1;
  while ( 1 )
  {
    result = sub_1407667B0(a2, (unsigned int)v8, (unsigned int)&v9, (unsigned int)&v10, 0LL);
    if ( !(_BYTE)result )
      return result;
    if ( v9 )
      v7 = *(_DWORD **)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v7 = 0LL;
    if ( v9 == a3 )
    {
      if ( (*(_DWORD *)(a1 + 144) & 2) == 0 && v7[75] == 788 && (v7[99] & 0x2000) != 0 && v7[101] == 21 )
      {
        sub_140764FE4(v7);
        goto LABEL_16;
      }
    }
    else if ( (v7[99] & 0x6000) == 0 && v7[75] == 788 )
    {
LABEL_16:
      sub_14066044C((__int64)v7);
    }
  }
}
