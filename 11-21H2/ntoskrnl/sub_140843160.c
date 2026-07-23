/*
 * XREFs of sub_140843160 @ 0x140843160
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_14075E4A8 @ 0x14075E4A8 (sub_14075E4A8.c)
 *     sub_14084328C @ 0x14084328C (sub_14084328C.c)
 *     sub_1408432E0 @ 0x1408432E0 (sub_1408432E0.c)
 *     sub_140843334 @ 0x140843334 (sub_140843334.c)
 *     sub_140843388 @ 0x140843388 (sub_140843388.c)
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 */

__int64 __fastcall sub_140843160(
        __int64 a1,
        unsigned int a2,
        WCHAR *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v10; // ebx
  __int64 *v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // rdi
  int v15; // eax
  _QWORD v16[18]; // [rsp+30h] [rbp-51h] BYREF
  int v17; // [rsp+D0h] [rbp+4Fh] BYREF
  __int64 *v18; // [rsp+E0h] [rbp+5Fh] BYREF
  int v19; // [rsp+E8h] [rbp+67h] BYREF
  int v20; // [rsp+ECh] [rbp+6Bh]

  v20 = HIDWORD(a4);
  memset(v16, 0, 0x60uLL);
  v19 = 0;
  v10 = 0;
  v17 = 0;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  if ( !a3 || (v15 = sub_14075E160(&v18, a3, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6), v11 = v18, v15 >= 0) )
  {
    memset((char *)v16 + 4, 0, 0x5CuLL);
    LODWORD(v16[0]) = 26;
    v10 = sub_14075B270(v16, v11);
    if ( v10 )
    {
      v10 = sub_1408433DC(a1, v12, a2, (unsigned int)v16, (__int64)&v17, (__int64)&v19);
      if ( v10 )
      {
        v13 = a7;
        if ( a7 )
        {
          v10 = sub_140843388(v12, a2, *a7);
          if ( v10 )
          {
            v10 = sub_140843334(v12, a2, v13[1]);
            if ( v10 )
            {
              v10 = sub_1408432E0(v12, a2, v13[2]);
              if ( v10 )
                v10 = sub_14084328C(v12, a2, v13[3]);
            }
          }
        }
      }
    }
  }
  sub_14075E4A8(v16);
  sub_14075E448((PVOID *)v11);
  return v10;
}
