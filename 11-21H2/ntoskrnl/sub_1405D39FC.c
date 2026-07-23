/*
 * XREFs of sub_1405D39FC @ 0x1405D39FC
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D39FC(int a1, __int64 a2)
{
  void *v3; // rax
  void *v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]
  int v14; // [rsp+90h] [rbp+10h] BYREF

  v14 = a1;
  v7 = 0;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, &stru_140039590) )
    {
      v3 = sub_14036B86C(a2, 0x67446F50u);
      v4 = v3;
      if ( v3 )
      {
        v5 = *(_QWORD *)(*((_QWORD *)v3 + 39) + 40LL);
        if ( v5 )
        {
          v6 = *(_WORD *)(v5 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v14;
          v7 = v6;
          v9 = &v7;
          *(_QWORD *)&UserData.Size = 4LL;
          v10 = 2LL;
          v11 = *(_QWORD *)(v5 + 136);
          v12 = 2 * v6;
          v13 = 0;
          EtwWriteEx(RegHandle, &stru_140039590, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
        ObfDereferenceObjectWithTag(v4, 0x67446F50u);
      }
    }
  }
}
