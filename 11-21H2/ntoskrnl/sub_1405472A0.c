/*
 * XREFs of sub_1405472A0 @ 0x1405472A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_1405472A0(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _QWORD *v16; // [rsp+28h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h]

  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v17 = 0LL;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v16 = sub_14039DF90((PHYSICAL_ADDRESS *)&v20, 1, 0LL, 16LL * a2);
  v9 = sub_14039DF90((PHYSICAL_ADDRESS *)&v17, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v10 = a2;
    v11 = v16 + 1;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v12 = *a3++;
      *v11 = v12;
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  v13 = (unsigned __int16)HvlInvokeHypercall(136) != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      v14 = *v9;
      v9 += 2;
      *a4++ = v14;
      --v8;
    }
    while ( v8 );
  }
  sub_14039D8F0((__int64)&v17);
  sub_14039D8F0((__int64)&v20);
  return v13;
}
