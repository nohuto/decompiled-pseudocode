/*
 * XREFs of sub_1C007DA18 @ 0x1C007DA18
 * Callers:
 *     sub_1C0079FFC @ 0x1C0079FFC (sub_1C0079FFC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C00551E0 @ 0x1C00551E0 (sub_1C00551E0.c)
 *     sub_1C00554A8 @ 0x1C00554A8 (sub_1C00554A8.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0055A78 @ 0x1C0055A78 (sub_1C0055A78.c)
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 *     sub_1C007DD78 @ 0x1C007DD78 (sub_1C007DD78.c)
 *     sub_1C007E04C @ 0x1C007E04C (sub_1C007E04C.c)
 *     sub_1C007E6FC @ 0x1C007E6FC (sub_1C007E6FC.c)
 *     sub_1C007E890 @ 0x1C007E890 (sub_1C007E890.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007F690 @ 0x1C007F690 (sub_1C007F690.c)
 *     sub_1C007F8D0 @ 0x1C007F8D0 (sub_1C007F8D0.c)
 */

__int64 __fastcall sub_1C007DA18(int **a1, __int64 a2)
{
  int *v2; // r15
  char v4; // r14
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  _BYTE v13[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-35h] BYREF
  ULONG_PTR v15; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v18[3]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h]

  v2 = *a1;
  v16 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v4 = 1;
  v17 = 0LL;
  v14 = 0;
  memset(v18, 0, sizeof(v18));
  v6 = sub_1C00554A8((__int64)v2, 1, 1, 2048, (__int64 *)&v15);
  if ( v6 >= 0 )
  {
    v6 = sub_1C00557CC((__int64)v2, v15, v7);
    sub_1C0055A78(*a1, v15);
    if ( v6 >= 0 )
    {
      v6 = sub_1C00551E0((__int64)v2, 1, 1, 2048, (__int64 *)&v16);
      if ( v6 >= 0 )
      {
        sub_1C0055B8C(*a1, "GetCapabilities", 0, 0, 0LL, 0LL);
        v8 = v16;
        v6 = sub_1C00557CC((__int64)v2, v16, v9);
        if ( v6 >= 0 )
        {
          sub_1C0055B44(*a1, v8, &v17, &v14);
          v6 = sub_1C007E04C(a1, v17, v14, a2);
        }
        sub_1C0055A78(v2, v8);
        if ( v6 >= 0 )
        {
          v6 = sub_1C007F690(a1, v18, a2 + 8);
          if ( v6 != -1073741434 )
          {
LABEL_13:
            if ( v6 < 0 )
              return (unsigned int)v6;
            v6 = sub_1C007F8D0(a1, v18, 0x20500000001LL);
            if ( v6 < 0 )
              return (unsigned int)v6;
            v6 = sub_1C007D268((__int64)a1, (__int64)v18, 0x20500000002LL, 6u, a2 + 68, 4, 0LL);
            if ( v6 < 0 )
              goto LABEL_28;
            *(_BYTE *)(a2 + 64) = 1;
            v13[0] = 0;
            v6 = sub_1C007D268((__int64)a1, (__int64)v18, 0x900000006LL, 5u, (__int64)v13, 1, 0LL);
            if ( v6 < 0 || v13[0] )
            {
              if ( *(_BYTE *)(a2 + 148) )
              {
                if ( !*(_BYTE *)(a2 + 149) && *(_BYTE *)(a2 + 150) )
                  v4 = 0;
              }
              else
              {
                v11 = sub_1C007E890(a1, v18);
                if ( v11 != -1073741790 && v11 != -1073741260 )
                {
LABEL_28:
                  sub_1C007F52C(a1, v18);
                  if ( v6 >= 0 )
                  {
                    if ( *(_BYTE *)(a2 + 64) )
                    {
                      if ( *(_DWORD *)(a2 + 68) == 9 )
                      {
                        v6 = sub_1C007F8D0(a1, v18, 0x20500000002LL);
                        if ( v6 >= 0 )
                        {
                          v6 = sub_1C007DD78(a1, v18, a2);
                          if ( v6 >= 0 )
                            v6 = sub_1C007E6FC(a1, v18, a2 + 80);
                          sub_1C007F52C(a1, v18);
                        }
                      }
                    }
                  }
                  return (unsigned int)v6;
                }
              }
            }
            *(_BYTE *)(a2 + 4) = v4;
            goto LABEL_28;
          }
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 3u )
            sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C0083CB0);
          v10 = sub_1C007AF40((__int64)a1, (__int64)v18);
          v6 = v10;
          if ( v10 >= 0 )
          {
            v6 = sub_1C007F690(a1, v18, a2 + 8);
            goto LABEL_13;
          }
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
            sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xCu, (__int64)&unk_1C0083CB0, v10);
        }
      }
    }
  }
  return (unsigned int)v6;
}
