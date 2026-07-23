/*
 * XREFs of sub_140B563A4 @ 0x140B563A4
 * Callers:
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 * Callees:
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_140B56C04 @ 0x140B56C04 (sub_140B56C04.c)
 */

__int64 __fastcall sub_140B563A4(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // edx
  __int16 v6; // cx
  __int16 v7; // cx
  __int16 v8; // ax
  bool v9; // zf
  __int128 v11; // [rsp+30h] [rbp-19h] BYREF
  __int128 v12; // [rsp+40h] [rbp-9h]
  int v13; // [rsp+50h] [rbp+7h]
  __int128 v14; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+68h] [rbp+1Fh]
  __int128 v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+88h] [rbp+3Fh]
  __int16 v18; // [rsp+8Ch] [rbp+43h]
  unsigned int v19; // [rsp+B0h] [rbp+67h] BYREF
  int v20; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 44);
  v20 = 0;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v13 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  v15 = 0LL;
  v4 = *(_QWORD *)(v3 + 16);
  v16 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = sub_140B56C04(v4, v1, 1751474532, (int)a1 + 64, (__int64)&v20);
  if ( v5 >= 0 )
  {
    v20 = 0;
    v5 = sub_140B56C04(v4, v1, 1735162214, (int)a1 + 60, (__int64)&v20);
    if ( v5 >= 0 )
    {
      v20 = 0;
      v5 = sub_140B56C04(v4, v1, 1819239265, (int)a1 + 72, (__int64)&v20);
      if ( v5 >= 0 )
      {
        v20 = 0;
        v5 = sub_140B56C04(v4, v1, 1752003704, (int)a1 + 68, (__int64)&v20);
        if ( v5 >= 0 )
        {
          v5 = sub_1403A9E4C(v4, *(_DWORD *)(a1 + 64), 0x36u, &v14);
          if ( v5 >= 0 )
          {
            v20 = 0;
            *(_WORD *)(a1 + 76) = __ROR2__(HIWORD(v17), 8);
            *(_WORD *)(a1 + 120) = __ROR2__(WORD1(v15), 8);
            v5 = sub_140B56C04(v4, v1, 1751672161, (unsigned int)&v19, (__int64)&v20);
            if ( v5 >= 0 )
            {
              v5 = sub_1403A9E4C(v4, v19, 0x24u, &v11);
              if ( v5 >= 0 )
              {
                v6 = WORD2(v11);
                *(_WORD *)(a1 + 88) = __ROR2__(HIWORD(v13), 8);
                *(_WORD *)(a1 + 78) = __ROR2__(WORD5(v11), 8);
                v7 = __ROR2__(v6, 8);
                *(_WORD *)(a1 + 84) = __ROR2__(WORD3(v11), 8);
                v8 = __ROR2__(v12, 8);
                v9 = byte_140C0DE54 == 0;
                *(_WORD *)(a1 + 82) = v7;
                *(_WORD *)(a1 + 80) = v8;
                *(_WORD *)(a1 + 86) = v7;
                *(_DWORD *)(a1 + 96) = 96;
                if ( v9 )
                {
                  dword_140C0DE94 = 0;
                  qword_140C0DE68 = (__int64)&qword_140C0DE60;
                  qword_140C0DE60 = (__int64)&qword_140C0DE60;
                  dword_140C0DE90 = 100;
                  byte_140C0DE54 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
