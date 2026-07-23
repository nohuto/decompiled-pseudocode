/*
 * XREFs of sub_14079B920 @ 0x14079B920
 * Callers:
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14079B2C0 @ 0x14079B2C0 (sub_14079B2C0.c)
 *     sub_140914BEC @ 0x140914BEC (sub_140914BEC.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_14079B920(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // r12
  __int64 v10; // rbx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  int v16; // edx
  _DWORD *v17; // r8
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = a3;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v20[0] = 0LL;
  sub_1407C97FC(&v19);
  v10 = *a5;
  v11 = v10 + 1;
  if ( (unsigned int)(v10 + 1) <= 1 )
  {
    v16 = 1;
    if ( a6 )
      v16 = a6;
    v12 = sub_14079C8A4(BugCheckParameter3, 4 * v16, a4, (unsigned int)&v18, (__int64)v20, (__int64)&v19);
  }
  else
  {
    v12 = sub_14079BA7C(BugCheckParameter3, a5[1], (__int64)&v18, (__int64)v20, (__int64)&v19);
  }
  v13 = v20[0];
  v14 = v12;
  if ( v12 >= 0 )
  {
    a5[1] = v18;
    if ( (unsigned int)v10 > (unsigned int)v6 )
    {
      v17 = (_DWORD *)(v13 + 4 * v10);
      do
      {
        v10 = (unsigned int)(v10 - 1);
        *v17-- = *(_DWORD *)(v13 + 4 * v10);
      }
      while ( (unsigned int)v10 > (unsigned int)v6 );
    }
    *(_DWORD *)(v13 + 4 * v6) = a2;
    v14 = 0;
    *a5 = v11;
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v19);
    else
      sub_1407C97C0(BugCheckParameter3, &v19);
  }
  return v14;
}
