/*
 * XREFs of sub_1C005FDF0 @ 0x1C005FDF0
 * Callers:
 *     sub_1C000152C @ 0x1C000152C (sub_1C000152C.c)
 *     sub_1C004F608 @ 0x1C004F608 (sub_1C004F608.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000724C @ 0x1C000724C (sub_1C000724C.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 *     sub_1C005AA9C @ 0x1C005AA9C (sub_1C005AA9C.c)
 *     sub_1C0061148 @ 0x1C0061148 (sub_1C0061148.c)
 *     sub_1C0061A30 @ 0x1C0061A30 (sub_1C0061A30.c)
 */

__int64 __fastcall sub_1C005FDF0(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r12d
  PIO_SECURITY_CONTEXT SecurityContext; // r13
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r15
  ULONG FullCreateOptions; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  ULONG v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  PEVENT_DATA_DESCRIPTOR v27; // [rsp+28h] [rbp-81h]
  char v28; // [rsp+30h] [rbp-79h] BYREF
  char v29; // [rsp+31h] [rbp-78h] BYREF
  char v30; // [rsp+32h] [rbp-77h] BYREF
  __int64 v31; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h]
  int v34; // [rsp+68h] [rbp-41h]
  int v35; // [rsp+6Ch] [rbp-3Dh]
  __int64 v36; // [rsp+70h] [rbp-39h]
  int v37; // [rsp+78h] [rbp-31h]
  int v38; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v39; // [rsp+80h] [rbp-29h]
  int v40; // [rsp+88h] [rbp-21h]
  int v41; // [rsp+8Ch] [rbp-1Dh]
  char *v42; // [rsp+90h] [rbp-19h]
  int v43; // [rsp+98h] [rbp-11h]
  int v44; // [rsp+9Ch] [rbp-Dh]
  char *v45; // [rsp+A0h] [rbp-9h]
  int v46; // [rsp+A8h] [rbp-1h]
  int v47; // [rsp+ACh] [rbp+3h]
  char *v48; // [rsp+B0h] [rbp+7h]
  int v49; // [rsp+B8h] [rbp+Fh]
  int v50; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v31 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v8 = sub_1C000724C(v3, (__int64)a2);
  if ( v8 < 0 )
    goto LABEL_38;
  LOBYTE(v9) = 1;
  v8 = sub_1C00071D4(v3, (__int64)a2, v9);
  if ( v8 < 0 )
    goto LABEL_38;
  v8 = sub_1C0009BC0(v3, (__int64)a2, 0LL, a3);
  if ( v8 < 0 )
  {
    sub_1C000729C(v3);
LABEL_38:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = sub_1C005AA9C(v8);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      LODWORD(v27) = a2->IoStatus.Status;
      sub_1C003F0C4(
        (__int64)off_1C0093070->AttachedDevice,
        0x19u,
        (__int64)&unk_1C0083530,
        *(_QWORD *)(v3 + 8),
        a2,
        v27);
    }
    sub_1C0061A30(v3, a2);
    return sub_1C0003440(a2, 0, v8);
  }
  v11 = (__int64)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *(_BYTE *)(v11 + 2) == 40 )
    v12 = *(_QWORD **)(v11 + 96);
  else
    v12 = *(_QWORD **)(v11 + 48);
  FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)FullCreateOptions == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  if ( FullCreateOptions != 16 )
  {
    v14 = v12[21];
    v11 = *(unsigned __int8 *)(v14 + 2);
    if ( (_BYTE)v11 == 40 )
      v15 = *(_DWORD *)(v14 + 20);
    else
      v15 = *(unsigned __int8 *)(v14 + 2);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 1324), 1u);
    v16 = v15 - 18;
    if ( v16 && (v17 = v16 - 1) != 0 )
    {
      if ( v17 == 13 )
        sub_1C0045080(v3);
    }
    else
    {
      sub_1C0019CFC(*(_QWORD *)(v3 + 24));
    }
    v6 = 1;
  }
  v18 = BYTE2(SecurityContext->SecurityQos);
  if ( (_BYTE)v18 == 40 )
    v18 = SecurityContext->FullCreateOptions;
  if ( v18 == 16 && (unsigned int)dword_1C00930C8 > 5 && sub_1C001ABEC(v11, 0x400000000000LL) )
  {
    v21 = v31;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v33 = v31 + 5000;
    v36 = v3 + 2024;
    LODWORD(v31) = *(_DWORD *)(v31 + 56);
    v39 = &v31;
    v28 = *(_BYTE *)(v3 + 96);
    v42 = &v28;
    v29 = *(_BYTE *)(v3 + 97);
    v45 = &v29;
    v30 = *(_BYTE *)(v3 + 98);
    v48 = &v30;
    v34 = 16;
    v37 = 16;
    v40 = 4;
    v43 = 1;
    v46 = 1;
    v49 = 1;
    sub_1C001D420(v19, (unsigned __int8 *)dword_1C008509A, v10, v20, 8u, &v32);
  }
  else
  {
    v21 = v31;
  }
  v12[82] = sub_1C0061770;
  result = sub_1C0008E14(v21, v12, v10);
  if ( (int)result < 0 )
  {
    v8 = result;
    if ( v6 )
    {
      v23 = v12[21];
      if ( *(_BYTE *)(v23 + 2) == 40 )
        v24 = *(_DWORD *)(v23 + 20);
      else
        v24 = *(unsigned __int8 *)(v23 + 2);
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1324));
      v25 = v24 - 18;
      if ( v25 && (v26 = v25 - 1) != 0 )
      {
        if ( v26 == 13 )
          sub_1C0061148(v3);
      }
      else
      {
        sub_1C003DB10(*(_QWORD *)(v3 + 24));
      }
    }
    sub_1C0017AF4((__int64)a2);
    goto LABEL_38;
  }
  return result;
}
