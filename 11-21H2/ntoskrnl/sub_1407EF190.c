/*
 * XREFs of sub_1407EF190 @ 0x1407EF190
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407ED644 @ 0x1407ED644 (sub_1407ED644.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407EF258 @ 0x1407EF258 (sub_1407EF258.c)
 *     sub_14081C8E0 @ 0x14081C8E0 (sub_14081C8E0.c)
 */

char __fastcall sub_1407EF190(__int64 a1, __int64 a2, int *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  REGHANDLE v7; // rbx
  int v8; // eax
  int v10; // [rsp+30h] [rbp-89h] BYREF
  int v11; // [rsp+38h] [rbp-81h] BYREF
  int v12; // [rsp+40h] [rbp-79h] BYREF
  int v13; // [rsp+48h] [rbp-71h] BYREF
  int v14; // [rsp+50h] [rbp-69h] BYREF
  int v15; // [rsp+58h] [rbp-61h] BYREF
  __int64 v16; // [rsp+60h] [rbp-59h] BYREF
  __int64 v17; // [rsp+68h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-39h]
  int v20; // [rsp+88h] [rbp-31h]
  int v21; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v22; // [rsp+90h] [rbp-29h]
  int v23; // [rsp+98h] [rbp-21h]
  int v24; // [rsp+9Ch] [rbp-1Dh]
  int *v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A8h] [rbp-11h]
  int v27; // [rsp+ACh] [rbp-Dh]
  int *v28; // [rsp+B0h] [rbp-9h]
  int v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BCh] [rbp+3h]
  int *v31; // [rsp+C0h] [rbp+7h]
  int v32; // [rsp+C8h] [rbp+Fh]
  int v33; // [rsp+CCh] [rbp+13h]
  int *v34; // [rsp+D0h] [rbp+17h]
  int v35; // [rsp+D8h] [rbp+1Fh]
  int v36; // [rsp+DCh] [rbp+23h]
  int *v37; // [rsp+E0h] [rbp+27h]
  int v38; // [rsp+E8h] [rbp+2Fh]
  int v39; // [rsp+ECh] [rbp+33h]

  v10 = 0;
  v5 = a1;
  if ( dword_140C1F3B8 != (_DWORD)a1 || (_DWORD)a1 == -1 )
    sub_14081C8E0(a1, a2, a3, &v10);
  else
    sub_1407EF258(a1, a2, a3, &v10);
  v15 = v10;
  v13 = a3[1];
  v12 = *a3;
  v17 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 8);
  v16 = v6;
  v10 = v5;
  if ( byte_140C5AE14 )
  {
    v7 = RegHandle;
    LOBYTE(v6) = EtwEventEnabled(RegHandle, &stru_1400110D8);
    if ( (_BYTE)v6 )
    {
      v8 = *(_DWORD *)(a2 + 32);
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v11 = v8;
      v14 = *((unsigned __int8 *)a3 + 8);
      UserData.Ptr = (ULONGLONG)&v10;
      v19 = &v16;
      v22 = &v17;
      v25 = &v11;
      v28 = &v12;
      v31 = &v13;
      v34 = &v14;
      v37 = &v15;
      UserData.Size = 4;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v20 = 8;
      v23 = 8;
      LOBYTE(v6) = EtwWrite(v7, &stru_1400110D8, 0LL, 8u, &UserData);
    }
  }
  return v6;
}
