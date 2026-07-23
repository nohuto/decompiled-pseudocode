/*
 * XREFs of sub_14099AB34 @ 0x14099AB34
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D7630 @ 0x1405D7630 (sub_1405D7630.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_14099AB34()
{
  void *v0; // rbx
  __int64 v1; // r13
  int v2; // esi
  unsigned int v3; // edi
  __int64 Pool2; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r9
  __int64 *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // r15
  ULONG v11; // r9d
  char v12; // [rsp+38h] [rbp-29h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-25h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  __int16 *v16; // [rsp+58h] [rbp-9h]
  int v17; // [rsp+60h] [rbp-1h]
  int v18; // [rsp+64h] [rbp+3h]
  char *v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  int *v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  void *v25; // [rsp+88h] [rbp+27h]
  int v26; // [rsp+90h] [rbp+2Fh]
  int v27; // [rsp+94h] [rbp+33h]

  v14 = 0;
  v0 = 0LL;
  v13 = 32;
  v12 = 64;
  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140038DD0) && qword_140D068A8 )
  {
    v1 = *(_QWORD *)(qword_140D068A8 + 48);
    v2 = 0;
    v3 = *(_DWORD *)(v1 + 4);
    if ( *(_DWORD *)(qword_140D068A8 + 4) == 1 )
    {
      v2 = 80 * v3;
      Pool2 = ExAllocatePool2(64LL, 80 * v3, 1699565648LL);
      v0 = (void *)Pool2;
      if ( !Pool2 )
        return;
      if ( v3 )
      {
        v5 = (_QWORD *)(Pool2 + 16);
        v6 = v3;
        v7 = (__int64 *)(v1 + 112);
        do
        {
          *(v5 - 1) = *(v7 - 1);
          v8 = *v7;
          v7 += 126;
          *v5 = v8;
          v5 += 10;
          *(v5 - 9) = *(v7 - 124);
          *(v5 - 8) = *(v7 - 125);
          *(v5 - 5) = *(v7 - 129);
          *(v5 - 4) = *(v7 - 130);
          *(v5 - 3) = *(v7 - 131);
          *(v5 - 12) = *(v7 - 121);
          *(v5 - 7) = *(v7 - 119);
          *(v5 - 6) = *(v7 - 120);
          --v6;
        }
        while ( v6 );
      }
    }
    v9 = ExAllocatePool2(64LL, 664 * v3 + 32, 1699565648LL);
    v10 = (void *)v9;
    if ( v9 )
    {
      sub_1405D7630(v1, v9);
      UserData.Reserved = 0;
      v18 = 0;
      v21 = 0;
      v11 = 4;
      v16 = &v13;
      v19 = &v12;
      UserData.Ptr = (ULONGLONG)v10;
      UserData.Size = 664 * v3 + 32;
      v17 = 2;
      v20 = 1;
      if ( v0 )
      {
        v27 = 0;
        v11 = 5;
        v25 = v0;
        v26 = v2;
      }
      else
      {
        v3 = 0;
      }
      v24 = 0;
      v22 = (int *)&v14;
      v23 = 4;
      v14 = v3;
      EtwWrite(qword_140C1F580, &stru_140038DD0, 0LL, v11, &UserData);
      ExFreePoolWithTag(v10, 0x654D5050u);
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x654D5050u);
  }
}
