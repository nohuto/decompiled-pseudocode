/*
 * XREFs of sub_140B503E0 @ 0x140B503E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14082E95C @ 0x14082E95C (sub_14082E95C.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14082EBE0 @ 0x14082EBE0 (sub_14082EBE0.c)
 *     sub_140A22D04 @ 0x140A22D04 (sub_140A22D04.c)
 */

__int64 __fastcall sub_140B503E0(__int64 a1, char *a2, void *a3)
{
  char *v4; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  char *v12; // [rsp+40h] [rbp-40h] BYREF
  void *v13; // [rsp+48h] [rbp-38h] BYREF
  void *v14; // [rsp+50h] [rbp-30h] BYREF
  void *v15; // [rsp+58h] [rbp-28h] BYREF
  char *v16; // [rsp+60h] [rbp-20h] BYREF
  void *v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  v18 = 0LL;
  v4 = a2;
  v15 = 0LL;
  v14 = 0LL;
  v19 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v7 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v18);
    if ( v7 < 0 )
      goto LABEL_28;
    v7 = sub_14082EBA4(
           *(__int64 *)&qword_140D00AC0,
           v18,
           (__int64)L"Control\\PendingDriverOperations\\Services",
           0,
           0x2001Fu,
           (__int64)&v16);
    if ( v7 < 0 )
      goto LABEL_28;
    v4 = v16;
  }
  if ( !a3 )
  {
    v7 = sub_14082EBA4(*(__int64 *)&qword_140D00AC0, (__int64)v4, a1, 0, 0x20019u, (__int64)&v17);
    if ( v7 < 0 )
      goto LABEL_28;
    a3 = v17;
  }
  v8 = sub_14082EBA4(*(__int64 *)&qword_140D00AC0, (__int64)v4, (__int64)L"EventLog", 0, 0x2001Fu, (__int64)&v12);
  v7 = v8;
  if ( v8 == -1073741772 || v8 == -1073741444 || v8 >= 0 )
  {
    v9 = sub_14082EBA4(*(__int64 *)&qword_140D00AC0, (__int64)v12, a1, 0, 0x20019u, (__int64)&v13);
    v7 = v9;
    if ( v9 == -1073741772 || v9 == -1073741444 || v9 >= 0 )
    {
      v7 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 6, (__int64)&v19);
      if ( v7 >= 0 )
      {
        v7 = sub_140772A24(*(__int64 *)&qword_140D00AC0, v19, a1, 0, 0x20006u, 0LL, (__int64)&v14, 0LL);
        if ( v7 >= 0 )
        {
          if ( !v13
            || (v7 = sub_140772A24(
                       *(__int64 *)&qword_140D00AC0,
                       v19,
                       (__int64)L"EventLog",
                       0,
                       0x20006u,
                       0LL,
                       (__int64)&v15,
                       0LL),
                v7 >= 0)
            && (!v13 || (v7 = sub_140679ADC(v13, v15, v10, 0LL), v7 >= 0)) )
          {
            v7 = sub_140679ADC(a3, v14, v10, 0LL);
            if ( v7 >= 0 )
            {
              if ( v13 )
              {
                v7 = sub_14082E95C(*(__int64 *)&qword_140D00AC0, (__int64)v12, a1);
                if ( v7 < 0 )
                  goto LABEL_28;
                LODWORD(v19) = 0;
                if ( (unsigned int)sub_14082EBE0(v6, v12, 0, 0LL, (unsigned int *)&v19) == -2147483622 )
                  sub_140A22D04(*(__int64 *)&qword_140D00AC0, v12, 0LL);
              }
              v7 = sub_14082E95C(*(__int64 *)&qword_140D00AC0, (__int64)v4, a1);
              if ( v7 >= 0 )
              {
                LODWORD(v19) = 0;
                if ( (unsigned int)sub_14082EBE0(v6, v4, 0, 0LL, (unsigned int *)&v19) == -2147483622 )
                  sub_140A22D04(*(__int64 *)&qword_140D00AC0, v4, 0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( v14 )
    sub_14082EB8C(v6, v14);
  if ( v15 )
    sub_14082EB8C(v6, v15);
  if ( v12 )
    sub_14082EB8C(v6, v12);
  if ( v13 )
    sub_14082EB8C(v6, v13);
  if ( v16 )
    sub_14082EB8C(v6, v16);
  if ( v17 )
    sub_14082EB8C(v6, v17);
  return (unsigned int)v7;
}
