/*
 * XREFs of sub_1C00A85AC @ 0x1C00A85AC
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C0035A4C @ 0x1C0035A4C (sub_1C0035A4C.c)
 *     sub_1C0035B0C @ 0x1C0035B0C (sub_1C0035B0C.c)
 *     sub_1C0035B3C @ 0x1C0035B3C (sub_1C0035B3C.c)
 *     sub_1C0035BE0 @ 0x1C0035BE0 (sub_1C0035BE0.c)
 *     sub_1C0036E40 @ 0x1C0036E40 (sub_1C0036E40.c)
 *     sub_1C003DAD4 @ 0x1C003DAD4 (sub_1C003DAD4.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 */

NTSTATUS __fastcall sub_1C00A85AC(__int64 a1, IRP *a2)
{
  int v2; // r15d
  char v3; // si
  int v4; // r12d
  int v5; // r14d
  __int64 v8; // r8
  _WORD *v9; // rdx
  char v10; // cl
  _WORD *v11; // rdx
  int v12; // r10d
  int v13; // r11d
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG Status; // [rsp+20h] [rbp-A9h]
  char v20; // [rsp+30h] [rbp-99h] BYREF
  char v21; // [rsp+31h] [rbp-98h] BYREF
  char v22; // [rsp+32h] [rbp-97h] BYREF
  int v23; // [rsp+34h] [rbp-95h] BYREF
  int v24; // [rsp+38h] [rbp-91h] BYREF
  GUID v25; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-79h] BYREF
  __int64 v27; // [rsp+70h] [rbp-59h]
  int v28; // [rsp+78h] [rbp-51h]
  int v29; // [rsp+7Ch] [rbp-4Dh]
  int *v30; // [rsp+80h] [rbp-49h]
  int v31; // [rsp+88h] [rbp-41h]
  int v32; // [rsp+8Ch] [rbp-3Dh]
  char v33[16]; // [rsp+90h] [rbp-39h] BYREF
  char *v34; // [rsp+A0h] [rbp-29h]
  int v35; // [rsp+A8h] [rbp-21h]
  int v36; // [rsp+ACh] [rbp-1Dh]
  char v37[16]; // [rsp+B0h] [rbp-19h] BYREF
  char *v38; // [rsp+C0h] [rbp-9h]
  int v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+CCh] [rbp+3h]
  char *v41; // [rsp+D0h] [rbp+7h]
  int v42; // [rsp+D8h] [rbp+Fh]
  int v43; // [rsp+DCh] [rbp+13h]
  int *v44; // [rsp+E0h] [rbp+17h]
  int v45; // [rsp+E8h] [rbp+1Fh]
  int v46; // [rsp+ECh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = 0;
  *(_DWORD *)(a1 + 88) = 5;
  if ( (unsigned int)(v2 - 5) > 1 )
  {
    sub_1C0035A4C(a1);
    sub_1C0035B0C(a1);
    sub_1C0035B3C(a1);
    sub_1C0035BE0((struct _UNICODE_STRING *)a1);
    if ( (unsigned int)sub_1C0007798(a1, 16) )
    {
      v5 = sub_1C001A364(a1 + 336);
      v3 = 1;
    }
    sub_1C003DAD4(a1);
    sub_1C0036E40(a1);
    sub_1C00A7F18(a1, (__int64)a2, v8);
  }
  if ( byte_1C0093BE8 )
  {
    v25 = 0LL;
    IoGetActivityIdIrp(a2, &v25);
    if ( (byte_1C0093A02 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      sub_1C003275C(a1, &stru_1C0083220, &v25, a2, Status);
    }
  }
  if ( (unsigned int)dword_1C00930C8 > 5 && sub_1C001ABEC(a1, 0x400000000000LL) )
  {
    v9 = *(_WORD **)(a1 + 4656);
    v29 = 0;
    v32 = 0;
    v27 = a1 + 5000;
    v30 = &v23;
    v28 = 16;
    v23 = v4;
    v31 = 4;
    sub_1C001AA4C((__int64)v33, v9);
    v10 = *(_BYTE *)(a1 + 4212);
    v11 = *(_WORD **)(a1 + 4664);
    v36 = 0;
    v20 = v10;
    v34 = &v20;
    v35 = v12 - 3;
    sub_1C001AA4C((__int64)v37, v11);
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v38 = &v21;
    v41 = &v22;
    v44 = &v24;
    v21 = v2;
    v39 = v13;
    v22 = v3;
    v42 = v13;
    v24 = v5;
    v45 = v14;
    sub_1C001D420(v15, (unsigned __int8 *)dword_1C0084891, v16, v17, 0xAu, &v26);
  }
  return sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
