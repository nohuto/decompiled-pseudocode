/*
 * XREFs of sub_14077CF10 @ 0x14077CF10
 * Callers:
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 * Callees:
 *     sub_14024AB14 @ 0x14024AB14 (sub_14024AB14.c)
 *     sub_1402DE400 @ 0x1402DE400 (sub_1402DE400.c)
 *     sub_1402DF5A4 @ 0x1402DF5A4 (sub_1402DF5A4.c)
 *     sub_1402DF5E0 @ 0x1402DF5E0 (sub_1402DF5E0.c)
 *     sub_1402DF64C @ 0x1402DF64C (sub_1402DF64C.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_1406D4FE0 @ 0x1406D4FE0 (sub_1406D4FE0.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077D29C @ 0x14077D29C (sub_14077D29C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_14077CF10(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  NTSTATUS inited; // ebx
  unsigned int v11; // r14d
  _WORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // r10
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rcx
  const wchar_t *v19; // rax
  int v20; // ecx
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // edx
  NTSTATUS v24; // eax
  int v25; // edx
  NTSTATUS v27; // eax
  wchar_t *v28; // rax
  __int64 v29; // rax
  HANDLE v30; // r8
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  int v33; // r9d
  NTSTATUS v34; // eax
  unsigned int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  void *v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v43; // [rsp+ECh] [rbp-14h]

  v38 = a3;
  v40 = a1;
  inited = 0;
  Handle = 0LL;
  v36 = 0;
  v35 = 0;
  v39 = 0;
  DestinationString = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_60;
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  *a5 = 0;
  v12 = (_WORD *)(a6 & -(__int64)(v11 != 0));
  if ( (unsigned int)(a4 - 1) > 0x24 || !sub_1402DF5A4(a1, a4) )
    return (unsigned int)-1073741264;
  if ( !v14 )
  {
    v17 = sub_14077F2EC(v13, (_DWORD)a2, 16, 0, 33554433, v16, (__int64)&Handle, v16);
    v16 = 0LL;
    inited = v17;
    if ( v17 < 0 )
      goto LABEL_27;
    v15 = v38;
    v13 = v40;
  }
  switch ( a4 )
  {
    case 23:
      v28 = wcschr(a2, 0x5Cu);
      if ( v28 )
      {
        *a7 = (_DWORD)v28 - (_DWORD)a2 + 2;
        *a5 = 1;
        v29 = *a7;
        if ( v11 < (unsigned int)v29 )
          goto LABEL_36;
        v24 = sub_14024AB14(v12, v11, (int)a2, v29 - 2);
LABEL_44:
        inited = v24;
        goto LABEL_27;
      }
LABEL_60:
      inited = -1073741811;
      goto LABEL_27;
    case 8:
      v30 = Handle;
      v35 = 78;
      if ( v15 )
        v30 = v15;
      v31 = sub_14077CD90(v13, (__int64)a2, (__int64)v30, 9, (__int64)&v36, (__int64)v42, (__int64)&v35, v16);
      inited = v31;
      if ( v31 == -1073741789 )
      {
        inited = -1073741595;
        goto LABEL_27;
      }
      if ( v31 )
        goto LABEL_27;
      v32 = v40;
      v43 = 0;
      *a7 = v11;
      v24 = sub_1406BDAE4(v32, (__int64)v42, 0LL, 8, (__int64)a5, (__int64)v12, (__int64)a7);
      goto LABEL_44;
    case 36:
      v33 = (int)Handle;
      if ( v15 )
        v33 = (int)v15;
      v34 = sub_14077DA5C(
              v13,
              (_DWORD)a2,
              1,
              v33,
              v16,
              (__int64)qword_14000E368,
              (__int64)&v39,
              (__int64)v12,
              v11,
              (__int64)a7,
              v16);
      *a5 = 7;
      inited = v34;
      if ( v34 != -1073741772 )
        goto LABEL_27;
      goto LABEL_33;
  }
  LODWORD(v38) = sub_1402DF5E0(v13, a4);
  if ( (_DWORD)v38 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      goto LABEL_27;
    v27 = sub_1406D4FE0(v40, (__int64)&DestinationString);
    inited = v27;
    if ( v27 != -1073741772 )
    {
      if ( (int)(v27 + 0x80000000) < 0 || v27 == -1073741789 )
      {
        *a7 = v11;
        *a5 = sub_1402DE400(a4);
      }
      goto LABEL_27;
    }
    goto LABEL_33;
  }
  v19 = sub_1402DF64C(v18, a4);
  if ( !v19 )
  {
    inited = -1073741264;
    goto LABEL_27;
  }
  v23 = (int)Handle;
  v35 = v11;
  if ( v21 )
    v23 = v21;
  v24 = sub_14077D29C(v20, v23, (_DWORD)v19, (unsigned int)&v36, (__int64)v12, (__int64)&v35, v22);
  if ( v24 == -1073741772 || v24 == -1073741444 )
    goto LABEL_33;
  if ( (int)(v24 + 0x80000000) >= 0 && v24 != -1073741789 )
    goto LABEL_44;
  if ( (v25 = v36, v36 == 1) && v35 < 2 || v35 < 2 && v36 == 7 || v36 == 4 && v35 != 4 )
  {
LABEL_33:
    inited = -1073741275;
    goto LABEL_27;
  }
  *a7 = v35;
  *a5 = v25;
  if ( v24 || !v11 )
LABEL_36:
    inited = -1073741789;
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
