/*
 * XREFs of sub_1407827F0 @ 0x1407827F0
 * Callers:
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_140785234 @ 0x140785234 (sub_140785234.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788A34 @ 0x140788A34 (sub_140788A34.c)
 *     sub_140789AA4 @ 0x140789AA4 (sub_140789AA4.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140A2E2C4 @ 0x140A2E2C4 (sub_140A2E2C4.c)
 *     sub_140A2EE50 @ 0x140A2EE50 (sub_140A2EE50.c)
 *     sub_140A2F540 @ 0x140A2F540 (sub_140A2F540.c)
 *     sub_140A2F588 @ 0x140A2F588 (sub_140A2F588.c)
 * Callees:
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_140782BB0 @ 0x140782BB0 (sub_140782BB0.c)
 *     sub_140784454 @ 0x140784454 (sub_140784454.c)
 */

__int64 sub_1407827F0(__int64 *a1, __int64 *a2, unsigned int a3, ...)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 *v8; // rdi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // sf
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h]
  __int64 v26; // [rsp+B0h] [rbp+60h]
  _DWORD *v27; // [rsp+B8h] [rbp+68h]
  __int64 **v28; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v28 = va_arg(va1, __int64 **);
  v19 = 0LL;
  v20 = 0LL;
  v6 = sub_140784454(a1, v22, (__int64 *)va, &v20);
  v8 = v20;
  v9 = v6;
  if ( v6 < 0 )
    goto LABEL_9;
  if ( v20 || (v8 = a2) != 0LL )
  {
    v10 = sub_1407829F8(a1, v8, a3, &v19);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -1073740697 )
        v9 = -1073741772;
    }
    else
    {
      v11 = *a1;
      if ( !(_BYTE)v25 )
      {
        if ( v11 )
          v11 = *(_QWORD *)(v11 + 224);
        v9 = sub_14077FFEC(v11, v19, v22, 0, v24, v26);
        if ( v9 < 0 )
          goto LABEL_9;
        if ( v27 )
          *v27 = 2;
LABEL_20:
        if ( v28 )
          *v28 = v8;
        goto LABEL_9;
      }
      v9 = sub_140772AA0(v11);
      v17 = v9 < 0;
LABEL_19:
      if ( !v17 )
        goto LABEL_20;
    }
  }
  else
  {
    v13 = (__int64 *)a1[2];
    if ( v13 == a1 + 2 )
      goto LABEL_20;
    do
    {
      v8 = v13;
      v14 = sub_1407829F8(a1, v13, a3, &v19);
      v9 = v14;
      if ( v14 == -1073740697 )
      {
        v9 = -1073741772;
      }
      else
      {
        if ( v14 < 0 )
          break;
        if ( *a1 )
          v15 = *(_QWORD *)(*a1 + 224);
        else
          v15 = 0LL;
        v9 = sub_14077FFEC(v15, v19, v22, 0, v24, v26);
        sub_140782BB0(a1, v13, v16, v19);
        v19 = 0LL;
        if ( v9 != -1073741772 )
          goto LABEL_18;
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != a1 + 2 );
    if ( v9 == -1073741772 && (_BYTE)v25 )
    {
      v8 = (__int64 *)a1[5];
      v18 = sub_1407829F8(a1, v8, a3, &v19);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v9 = sub_140772AA0(*a1);
        if ( v9 >= 0 )
        {
LABEL_18:
          v17 = v9 < 0;
          goto LABEL_19;
        }
      }
      else if ( v18 == -1073740697 )
      {
        v9 = -1073741662;
      }
    }
  }
LABEL_9:
  if ( v19 )
    sub_140782BB0(a1, v8, v7, v19);
  return (unsigned int)v9;
}
