/*
 * XREFs of sub_140B0EC60 @ 0x140B0EC60
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140827888 @ 0x140827888 (sub_140827888.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14083D790 @ 0x14083D790 (sub_14083D790.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     sub_140A2296C @ 0x140A2296C (sub_140A2296C.c)
 *     sub_140A22CA4 @ 0x140A22CA4 (sub_140A22CA4.c)
 *     sub_140A22D7C @ 0x140A22D7C (sub_140A22D7C.c)
 */

__int64 sub_140B0EC60()
{
  PERESOURCE *v0; // rdi
  int v1; // eax
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-49h]
  __int64 v13; // [rsp+28h] [rbp-41h]
  void *v14; // [rsp+40h] [rbp-29h] BYREF
  void *v15; // [rsp+48h] [rbp-21h] BYREF
  void *v16; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+58h] [rbp-11h] BYREF
  __int64 Source2; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+68h] [rbp-1h] BYREF
  PERESOURCE *v20; // [rsp+70h] [rbp+7h] BYREF
  void *v21; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD Source1[8]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+67h] BYREF
  int v24; // [rsp+D8h] [rbp+6Fh] BYREF
  int v25; // [rsp+E0h] [rbp+77h] BYREF
  int v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v24 = 0;
  v0 = 0LL;
  v25 = 0;
  v26 = 0;
  v14 = 0LL;
  Source1[0] = 0LL;
  Source2 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v17 = 0;
  v1 = sub_14082EBA4(
         *(__int64 *)&qword_140D00AC0,
         2147483650LL,
         (__int64)L"System\\Setup\\Upgrade\\PnP",
         0,
         0x2001Fu,
         (__int64)&v15);
  v3 = v1;
  if ( v1 == -1073741772 )
    goto LABEL_2;
  if ( v1 >= 0 )
  {
    v23 = 4;
    v5 = sub_14082EB54(v2, v15, L"MigrationStatus", &v24, &v25, &v23);
    v3 = v5;
    if ( v5 != -1073741772 )
    {
      if ( v5 < 0 )
        goto LABEL_3;
      if ( v24 != 4 || v23 != 4 )
      {
        v3 = -1073741823;
LABEL_48:
        if ( v0 )
          sub_140A2296C(v0);
        goto LABEL_3;
      }
    }
    v6 = sub_14082EBA4(
           *(__int64 *)&qword_140D00AC0,
           (__int64)v15,
           (__int64)L"CurrentControlSet",
           0,
           0x2001Fu,
           (__int64)&v16);
    v3 = v6;
    if ( v6 == -1073741772 )
    {
LABEL_2:
      v3 = 0;
      goto LABEL_3;
    }
    if ( v6 >= 0 )
    {
      v3 = sub_14082EBA4(
             *(__int64 *)&qword_140D00AC0,
             (__int64)v16,
             (__int64)L"Control\\DeviceMigration",
             0,
             0x20019u,
             (__int64)&v14);
      if ( v3 >= 0 )
      {
        v23 = 8;
        v3 = sub_14082EB54(v2, v14, L"MigrationTime", &v24, &Source2, &v23);
        if ( v3 >= 0 )
        {
          if ( v24 == 3 && v23 == 8 )
          {
            sub_14082EB8C(v2, v14);
            v14 = 0LL;
            v3 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v19);
            if ( v3 < 0 )
              goto LABEL_3;
            v3 = sub_140772A24(
                   *(__int64 *)&qword_140D00AC0,
                   v19,
                   (__int64)L"Control\\DeviceMigration",
                   0,
                   0x20006u,
                   0LL,
                   (__int64)&v14,
                   0LL);
            if ( v3 < 0 )
              goto LABEL_3;
            v23 = 8;
            v7 = sub_14082EB54(v2, v14, L"MigrationTime", &v24, Source1, &v23);
            v3 = v7;
            if ( v7 == -1073741772 )
              goto LABEL_32;
            if ( v7 < 0 )
              goto LABEL_3;
            if ( v24 == 3 && v23 == 8 )
            {
              if ( RtlCompareMemory(Source1, &Source2, 8uLL) == 8 )
              {
                v3 = -1073741791;
                goto LABEL_3;
              }
LABEL_32:
              v25 = 259;
              v3 = sub_140A22D7C(v2, v15, L"MigrationStatus", 4u, &v25, 4u);
              if ( v3 < 0 )
                goto LABEL_3;
              v3 = sub_140A22D7C(v2, v14, L"MigrationTime", 3u, &Source2, 8u);
              if ( v3 < 0 )
                goto LABEL_3;
              v23 = 4;
              v3 = sub_14082EB54(v2, v15, L"TargetVersion", &v24, &v26, &v23);
              if ( v3 >= 0 )
              {
                if ( v24 == 4 && v23 == 4 )
                {
                  if ( (v26 & 0xFFFF0000) == 0xA000000 )
                  {
                    v3 = sub_140A22CA4(v8, (int)v16, 0, v19, 0LL);
                    if ( v3 >= 0 )
                    {
                      v9 = sub_14082EBA4(
                             *(__int64 *)&qword_140D00AC0,
                             (__int64)v16,
                             (__int64)L"Services",
                             0,
                             0x20019u,
                             (__int64)&v21);
                      v3 = v9;
                      if ( v9 == -1073741772
                        || v9 >= 0
                        && (v3 = sub_14083EAEC(*(__int64 *)&qword_140D00AC0, v21, (__int64)sub_140B4FA10, 0LL), v3 >= 0) )
                      {
                        v11 = sub_140827888(v8, 0LL, v10, -1LL, v12, v13, &v20);
                        v0 = v20;
                        v3 = v11;
                        if ( v11 >= 0 )
                        {
                          v3 = sub_14083D790((__int64)v20, (__int64)&sub_140B4FB90, 0LL, 0LL, 0, (__int64)&v17, 0);
                          if ( v3 == -1073741789 )
                            v3 = 0;
                        }
                      }
                    }
                  }
                  else
                  {
                    v3 = -1073741735;
                  }
                }
                else
                {
                  v3 = -1073741823;
                }
              }
              v25 = v3;
              sub_140A22D7C(v8, v15, L"MigrationStatus", 4u, &v25, 4u);
              goto LABEL_48;
            }
          }
          v3 = -1073741823;
        }
      }
    }
  }
LABEL_3:
  if ( v21 )
    sub_14082EB8C(v2, v21);
  if ( v14 )
    sub_14082EB8C(v2, v14);
  if ( v16 )
    sub_14082EB8C(v2, v16);
  if ( v15 )
    sub_14082EB8C(v2, v15);
  return (unsigned int)v3;
}
