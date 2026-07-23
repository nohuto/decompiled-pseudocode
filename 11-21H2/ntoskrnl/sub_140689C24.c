/*
 * XREFs of sub_140689C24 @ 0x140689C24
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 * Callees:
 *     sub_140689D3C @ 0x140689D3C (sub_140689D3C.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14091D320 @ 0x14091D320 (sub_14091D320.c)
 */

__int64 __fastcall sub_140689C24(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = sub_140689D3C(*(_QWORD *)(a1 + 1544), &v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    sub_14091D320(v5, 0LL, (unsigned int)v4);
    return v6;
  }
  v7 = v20;
  *(_QWORD *)(a1 + 1800) = v20;
  if ( v7 )
  {
    v8 = v7;
    if ( v7 > 2147479552 )
      v8 = 2147479552LL;
  }
  else
  {
    v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
  }
  *(_QWORD *)(a1 + 1800) = v8;
  if ( a2 )
    *a2 = v8;
  v9 = *(_DWORD *)(a1 + 168);
  v10 = 1;
  if ( v9 == 1 )
  {
    v15 = sub_140689D3C(*(_QWORD *)(a1 + 1552), &v20);
LABEL_12:
    if ( v15 < 0 )
      sub_14091D320(v16, v10, (unsigned int)v15);
    v17 = sub_140689DAC(v10);
    *(_QWORD *)(a1 + 8LL * v17 + 1808) = v18;
    return 0;
  }
  if ( (unsigned int)(v9 - 4) <= 1 )
  {
    v11 = sub_140689D3C(*(_QWORD *)(a1 + 1576), &v20);
    if ( v11 < 0 )
    {
      sub_14091D320(v12, 4LL, (unsigned int)v11);
      v20 = 0LL;
    }
    v13 = sub_140689DAC(4LL);
    *(_QWORD *)(a1 + 8LL * v13 + 1808) = v14;
    v15 = sub_140689D3C(*(_QWORD *)(a1 + 1584), &v20);
    v10 = 5;
    goto LABEL_12;
  }
  return 0;
}
