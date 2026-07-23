/*
 * XREFs of sub_1406CC2C8 @ 0x1406CC2C8
 * Callers:
 *     sub_140785A3C @ 0x140785A3C (sub_140785A3C.c)
 *     sub_140A2B08C @ 0x140A2B08C (sub_140A2B08C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077D29C @ 0x14077D29C (sub_14077D29C.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140781748 @ 0x140781748 (sub_140781748.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 */

__int64 __fastcall sub_1406CC2C8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  int v15; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  __int64 **v19; // r8
  __int64 *v20; // r9
  __int64 **v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  int v25; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  int v30; // eax
  _DWORD *v31; // rax
  _BYTE v32[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE v34; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v36[2]; // [rsp+60h] [rbp-10h] BYREF
  char v38; // [rsp+C8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  v36[0] = 0LL;
  *a5 = 0;
  v15 = 0;
  *v10 = 0;
  Handle = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v38 = 0;
  v32[0] = 0;
  if ( v12 )
  {
    v16 = a7;
    v12 &= -(__int64)(a7 != 0);
    v11 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  v18 = 0;
  v19 = &off_140A380C0;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v19;
    if ( v17 == *((_DWORD *)*v19 + 4) )
      break;
LABEL_6:
    ++v18;
    v19 += 2;
    v21 = 0LL;
    if ( v18 >= 3 )
      goto LABEL_11;
  }
  v11 = *(_QWORD *)a4 - *v20;
  if ( *(_QWORD *)a4 == *v20 )
    v11 = *(_QWORD *)(a4 + 8) - v20[1];
  if ( v11 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v21 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_15;
  v22 = sub_140784B14(a1, a2, 48, (_DWORD)v20, 1, v11, (__int64)v36, v11);
  v11 = 0LL;
  v15 = v22;
  if ( v22 >= 0 )
  {
    v8 = a5;
LABEL_15:
    v23 = *(_DWORD *)(a4 + 16);
    if ( v23 == 2 )
    {
      v28 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v28 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( v28 )
        goto LABEL_66;
      v29 = (int)v36[0];
      if ( a3 )
        v29 = a3;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      v30 = sub_14077FFEC(v11, v29, (unsigned int)L"Device Parameters", 0, 1, (__int64)&v34);
      if ( v30 == -1073741772 || v30 == -1073741444 )
        goto LABEL_56;
      if ( v30 < 0 )
      {
        v15 = v30;
        goto LABEL_27;
      }
      LODWORD(v33) = v16;
      v25 = sub_14077D29C(
              a1,
              (_DWORD)v34,
              (unsigned int)L"FriendlyName",
              (unsigned int)&v33 + 4,
              v12,
              (__int64)&v33,
              (__int64)&v38);
      ZwClose(v34);
      if ( v25 == -1073741772 || v25 == -1073741444 )
        goto LABEL_56;
      if ( v25 && v25 != -1073741789 )
        goto LABEL_61;
      *a8 = v33;
      v31 = a5;
      *a5 = 18;
      if ( v25 || !v16 )
        v15 = -1073741789;
      if ( v38 )
        *v31 = 25;
    }
    else
    {
      if ( v23 != 3 )
      {
        if ( v23 == 256 )
        {
          v24 = *(_QWORD *)a4 - 0x4ACA104A78C34FC8LL;
          if ( *(_QWORD *)a4 == 0x4ACA104A78C34FC8LL )
            v24 = *(_QWORD *)(a4 + 8) - 0x576E99524D52A49ELL;
          if ( !v24 )
          {
            v15 = sub_140784B14(a1, a2, 49, (_DWORD)v20, 1, v11, (__int64)&Handle, v11);
            if ( v15 < 0 )
              goto LABEL_27;
            LODWORD(v33) = v16;
            v25 = sub_14077FC64(Handle, (__int64)&v33);
            ZwClose(Handle);
            if ( v25 != -1073741772 && v25 != -1073741444 )
            {
              if ( !v25 || v25 == -1073741789 )
              {
                *a8 = v33;
                *a5 = 18;
                if ( v25 || !v16 )
                  v15 = -1073741789;
                goto LABEL_27;
              }
LABEL_61:
              v15 = v25;
              goto LABEL_27;
            }
LABEL_56:
            v15 = -1073741275;
            goto LABEL_27;
          }
        }
LABEL_66:
        v15 = -1073741264;
        goto LABEL_27;
      }
      v27 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v27 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( v27 )
        goto LABEL_66;
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        v15 = sub_140781748(a1, a2, v19, v32);
        if ( v15 >= 0 )
          *(_BYTE *)v12 = -(v32[0] != 0);
      }
      else
      {
        v15 = -1073741789;
      }
    }
  }
LABEL_27:
  if ( v36[0] )
    ZwClose(v36[0]);
  return (unsigned int)v15;
}
