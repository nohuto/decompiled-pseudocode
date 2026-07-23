/*
 * XREFs of sub_140601DB0 @ 0x140601DB0
 * Callers:
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 *     sub_140A9DD20 @ 0x140A9DD20 (sub_140A9DD20.c)
 *     sub_140A9DD9C @ 0x140A9DD9C (sub_140A9DD9C.c)
 *     sub_140A9E0D0 @ 0x140A9E0D0 (sub_140A9E0D0.c)
 */

__int64 sub_140601DB0()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v8)(); // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v13)(); // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v16)(); // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v20)(); // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v24)(); // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v28)(); // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v32)(); // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v36)(); // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]

  v0 = sub_140A9DD9C();
  if ( v0 < 0 )
    goto LABEL_5;
  if ( (dword_140C1AA7C & 0x1000) != 0 )
    sub_140A9DD20();
  v5 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  qword_140C1B2F8 = (__int64)sub_140A9E0D0;
  v2 = "ExAllocatePool";
  v4 = nullsub_11;
  v6 = "ExAllocatePool2";
  v8 = nullsub_11;
  v10 = "ExAllocatePool3";
  v13 = nullsub_11;
  v14 = "ExAllocatePoolWithTag";
  v16 = nullsub_11;
  v18 = "ExAllocatePoolWithTagPriority";
  v20 = nullsub_11;
  v22 = "ExAllocatePoolWithQuota";
  v24 = nullsub_11;
  v26 = "ExAllocatePoolWithQuotaTag";
  v28 = nullsub_11;
  v30 = "ExFreePool";
  v32 = nullsub_11;
  v34 = "ExFreePoolWithTag";
  v36 = nullsub_11;
  v3 = 27;
  v7 = 21;
  v11 = 22;
  v15 = 26;
  v19 = 25;
  v23 = 24;
  v27 = 23;
  v31 = 39;
  v35 = 40;
  v0 = ((__int64 (__fastcall *)(const char **, __int64, __int64, void *))DifRegisterPlugin)(
         &v2,
         9LL,
         3LL,
         &unk_140C1B2F0);
  if ( v0 < 0 )
LABEL_5:
    sub_140A9E0D0();
  return (unsigned int)v0;
}
