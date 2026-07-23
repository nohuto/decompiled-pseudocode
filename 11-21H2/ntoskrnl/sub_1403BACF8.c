/*
 * XREFs of sub_1403BACF8 @ 0x1403BACF8
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403916B0 @ 0x1403916B0 (sub_1403916B0.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050850C @ 0x14050850C (sub_14050850C.c)
 *     sub_14050E088 @ 0x14050E088 (sub_14050E088.c)
 *     sub_140A616F8 @ 0x140A616F8 (sub_140A616F8.c)
 */

void __fastcall sub_1403BACF8(__int64 a1, __int64 a2)
{
  ULONG_PTR *v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int *v11; // r15
  int v12; // esi
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _BYTE v19[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  int v21; // [rsp+48h] [rbp-29h] BYREF
  int v22; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v24[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int128 v29; // [rsp+90h] [rbp+1Fh]

  v23 = 0LL;
  v29 = 0LL;
  v20 = 0LL;
  v19[0] = 0;
  if ( (unsigned __int8)sub_1403BAEA4(a1, a2) )
  {
    if ( qword_140C4C4C0 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        v7 = sub_1403ACEFC(3, 32, 24576, 3840, 0);
        v8 = (__int64)v7;
        if ( v7 )
        {
          if ( (int)sub_1403BC620(v7) >= 0 )
          {
            *(_DWORD *)(v8 + 184) |= 4u;
            qword_140C4E4D0 = v8;
            v9 = sub_14050E088(v8, v19);
            qword_140C4E4D0 = 0LL;
            if ( v9 >= 0 )
            {
              v11 = *(unsigned int **)(v8 + 72);
              v12 = 1;
              v13 = 0;
              if ( v19[0] )
              {
                sub_140A616F8(v10, *(_QWORD *)(v8 + 288) + 8LL, 0LL, &v23);
              }
              else
              {
                v14 = *(_DWORD *)(v8 + 224);
                if ( (v14 & 0x200) != 0 )
                {
                  if ( (int)sub_140252380(*(unsigned int *)(v8 + 88), &v20) < 0 )
                    return;
                }
                else if ( (v14 & 0x100) != 0 )
                {
                  v15 = *(_DWORD *)(v8 + 84);
                  if ( v15 >= 8 )
                  {
                    LODWORD(v20) = 45057;
                    v15 -= 8;
                  }
                  else
                  {
                    LODWORD(v20) = 45056;
                  }
                  HIDWORD(v20) = v15;
                }
                v21 = *(_DWORD *)(v8 + 96);
                v22 = *(_DWORD *)(v8 + 92);
                sub_140252258(&v20, &v22, &v21);
                v12 = v21;
                v13 = v22;
                v23 = 0x8000000000000000uLL;
                LOBYTE(v23) = v20;
              }
              if ( (int)sub_14042A5E0(*((_QWORD *)v11 + 3), *v11) >= 0 )
              {
                if ( v19[0] )
                {
                  *(_DWORD *)(v8 + 236) = 0;
                  *(_DWORD *)(v8 + 232) = DWORD2(v29);
                  *(_QWORD *)(v8 + 240) = HIDWORD(v29);
                  v18 = *(_DWORD *)(v8 + 184) | 0x10;
LABEL_24:
                  qword_140C4E4D0 = v8;
                  *(_DWORD *)(v8 + 184) = v18 | 0x40;
                  sub_1403916B0(v17, v16);
                  return;
                }
                v24[4] = -1;
                v26 = *((_QWORD *)&v29 + 1);
                v24[1] = 0;
                v25 = 8LL;
                v27 = 0LL;
                v28 = 212LL;
                v24[0] = v13;
                v24[2] = v12;
                v24[3] = 0;
                v24[5] = 1;
                if ( (int)sub_14050850C(&v20, v24) >= 0 )
                {
                  v18 = *(_DWORD *)(v8 + 184) & 0xFFFFFFEF;
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
  }
}
