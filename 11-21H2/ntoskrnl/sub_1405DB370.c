/*
 * XREFs of sub_1405DB370 @ 0x1405DB370
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D73F0 @ 0x1405D73F0 (sub_1405D73F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405DB370(__int64 a1)
{
  void *v2; // rbx
  _BYTE *v3; // rax
  _DWORD *v4; // rsi
  int v5; // r14d
  unsigned int v6; // edi
  __int64 Pool2; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // r12
  __int16 v14; // cx
  ULONG UserDataCount; // eax
  __int16 v17; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int16 *v21; // [rsp+68h] [rbp-29h]
  __int64 v22; // [rsp+70h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  unsigned __int64 *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  int *v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  void *v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+B0h] [rbp+1Fh]
  int v31; // [rsp+B4h] [rbp+23h]

  v2 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  if ( byte_140C5AE30 )
  {
    if ( EtwEventEnabled(qword_140C1F580, &stru_140038980) )
    {
      v3 = *(_BYTE **)(a1 + 33600);
      if ( v3 )
      {
        v4 = *(_DWORD **)(a1 + 33608);
        if ( v4 )
        {
          v5 = 0;
          v6 = *v4;
          if ( *v3 == 1 )
          {
            v5 = 80 * v6;
            Pool2 = ExAllocatePool2(64LL, 80 * v6, 1699565648LL);
            v2 = (void *)Pool2;
            if ( !Pool2 )
              return 0LL;
            if ( v6 )
            {
              v8 = (_QWORD *)(Pool2 + 24);
              v9 = (__int64 *)(v4 + 38);
              v10 = v6;
              do
              {
                *(v8 - 3) = *(v9 - 1);
                v11 = *v9;
                v9 += 125;
                *(v8 - 1) = v11;
                *v8 = *(v9 - 130);
                v8 += 10;
                *(v8 - 9) = *(v9 - 129);
                *(v8 - 6) = *(v9 - 132);
                *(v8 - 5) = *(v9 - 133);
                *(v8 - 4) = *(v9 - 134);
                *(v8 - 12) = *(v9 - 124);
                *(v8 - 8) = *(v9 - 122);
                *(v8 - 7) = *(v9 - 123);
                --v10;
              }
              while ( v10 );
            }
          }
          v12 = ExAllocatePool2(64LL, 416 * v6 + 24, 1699565648LL);
          v13 = (void *)v12;
          if ( v12 )
          {
            sub_1405D73F0((_QWORD *)(a1 + 33600), v12, &v19);
            v14 = *(unsigned __int8 *)(a1 + 208);
            v21 = &v17;
            UserData.Ptr = (ULONGLONG)v13;
            v23 = a1 + 209;
            v25 = &v19;
            UserData.Size = 416 * v6 + 24;
            UserDataCount = 5;
            UserData.Reserved = 0;
            v17 = v14;
            v22 = 2LL;
            v24 = 1LL;
            v26 = 8LL;
            if ( v2 )
            {
              UserDataCount = 6;
              v29 = v2;
              v30 = v5;
              v31 = 0;
            }
            else
            {
              v6 = 0;
            }
            v18 = v6;
            v27 = (int *)&v18;
            v28 = 4LL;
            EtwWriteEx(qword_140C1F580, &stru_140038980, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
            ExFreePoolWithTag(v13, 0x654D5050u);
          }
          if ( v2 )
            ExFreePoolWithTag(v2, 0x654D5050u);
        }
      }
    }
  }
  return 0LL;
}
