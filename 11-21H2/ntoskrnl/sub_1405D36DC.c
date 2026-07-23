/*
 * XREFs of sub_1405D36DC @ 0x1405D36DC
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1405D36A4 @ 0x1405D36A4 (sub_1405D36A4.c)
 *     sub_1405D36C0 @ 0x1405D36C0 (sub_1405D36C0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D36DC(__int64 a1, int a2, const EVENT_DESCRIPTOR *a3)
{
  void *v5; // rax
  void *v6; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int *v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a2;
  v8 = 0;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, a3) )
    {
      v5 = sub_14036B86C(a1, 0x67446F50u);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)v5 + 39) + 40LL);
        if ( v7 )
        {
          v8 = *(_WORD *)(v7 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v8;
          *(_QWORD *)&UserData.Size = 2LL;
          v10 = *(_QWORD *)(v7 + 136);
          v13 = &v15;
          v11 = 2 * v8;
          v12 = 0;
          v14 = 4LL;
          EtwWriteEx(RegHandle, a3, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
      }
    }
  }
}
