/*
 * XREFs of sub_140B501D0 @ 0x140B501D0
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

__int64 __fastcall sub_140B501D0(__int64 a1, char *a2, void *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  void *v11; // [rsp+48h] [rbp-28h] BYREF
  void *v12; // [rsp+50h] [rbp-20h] BYREF
  char *v13; // [rsp+58h] [rbp-18h] BYREF
  void *v14; // [rsp+60h] [rbp-10h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v7 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v10);
  if ( v7 >= 0 )
  {
    if ( !a2 )
    {
      v7 = sub_14082EBA4(
             *(__int64 *)&qword_140D00AC0,
             v10,
             (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
             0,
             0x2001Fu,
             (__int64)&v13);
      if ( v7 < 0 )
        goto LABEL_14;
      a2 = v13;
    }
    if ( !a3 )
    {
      v7 = sub_14082EBA4(*(__int64 *)&qword_140D00AC0, (__int64)a2, a1, 0, 0x20019u, (__int64)&v14);
      if ( v7 < 0 )
        goto LABEL_14;
      a3 = v14;
    }
    v7 = sub_140772A24(
           *(__int64 *)&qword_140D00AC0,
           v10,
           (__int64)L"Control\\OsExtensionDatabase",
           0,
           0x20006u,
           0LL,
           (__int64)&v12,
           0LL);
    if ( v7 >= 0 )
    {
      v7 = sub_140772A24(*(__int64 *)&qword_140D00AC0, (__int64)v12, a1, 0, 0x20006u, 0LL, (__int64)&v11, 0LL);
      if ( v7 >= 0 )
      {
        v7 = sub_140679ADC(a3, v11, v8, 0LL);
        if ( v7 >= 0 )
        {
          v7 = sub_14082E95C(*(__int64 *)&qword_140D00AC0, (__int64)a2, a1);
          if ( v7 >= 0 )
          {
            LODWORD(v10) = 0;
            if ( (unsigned int)sub_14082EBE0(v6, a2, 0, 0LL, (unsigned int *)&v10) == -2147483622 )
              sub_140A22D04(*(__int64 *)&qword_140D00AC0, a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v11 )
    sub_14082EB8C(v6, v11);
  if ( v12 )
    sub_14082EB8C(v6, v12);
  if ( v13 )
    sub_14082EB8C(v6, v13);
  if ( v14 )
    sub_14082EB8C(v6, v14);
  return (unsigned int)v7;
}
