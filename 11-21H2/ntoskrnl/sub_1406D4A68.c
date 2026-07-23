/*
 * XREFs of sub_1406D4A68 @ 0x1406D4A68
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 * Callees:
 *     sub_14024F7C8 @ 0x14024F7C8 (sub_14024F7C8.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D4C5C @ 0x1406D4C5C (sub_1406D4C5C.c)
 *     sub_1406D4CBC @ 0x1406D4CBC (sub_1406D4CBC.c)
 *     sub_1406D4D48 @ 0x1406D4D48 (sub_1406D4D48.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

__int64 __fastcall sub_1406D4A68(_DWORD *Object, char a2, char a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // esi
  const EVENT_DESCRIPTOR *v17; // rbx
  REGHANDLE v18; // rdi
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( !a2 )
  {
    if ( a3 )
    {
      v13 = Object[384];
      if ( v13 < a4 )
      {
        v12 = 0LL;
        v16 = -1073741811;
        goto LABEL_24;
      }
      v14 = v13 - a4;
      Object[384] = v14;
      if ( v14 )
      {
        v12 = *((_QWORD *)Object + 193);
        goto LABEL_16;
      }
    }
    v15 = Object[385];
    v12 = *((_QWORD *)Object + 193);
    if ( v15 > a4 )
    {
      Object[385] = v15 - a4;
    }
    else
    {
      sub_1406D4CBC(Object);
      Object[385] = 0;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)sub_1406D4C5C((__int64)Object) )
  {
    v12 = 0LL;
    v16 = -1073741637;
    goto LABEL_24;
  }
  if ( a3 )
  {
    v9 = Object[384];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v16 = -1073741670;
      goto LABEL_24;
    }
    if ( v9 )
    {
      Object[384] = v9 + a4;
      goto LABEL_18;
    }
    Object[384] = a4;
    v4 = 1;
  }
  v10 = Object[385];
  if ( v10 + a4 >= v10 )
  {
    if ( !v10 )
    {
      v11 = (_RTL_BALANCED_NODE *)sub_1406D4D48(Object, 0LL);
      v12 = (__int64)v11;
      if ( v11 )
      {
        sub_14024F7C8(v11);
        v23[0] = v12;
        LOBYTE(v24) = 1;
        v23[1] = (__int64)Object;
        sub_1406FF880(Object, (__int64)v23, 5);
        Object[385] = a4;
        *((_QWORD *)Object + 193) = v12;
LABEL_16:
        v16 = 0;
        goto LABEL_24;
      }
      v16 = -1073741801;
      goto LABEL_22;
    }
    Object[385] = v10 + a4;
LABEL_18:
    v12 = *((_QWORD *)Object + 193);
    goto LABEL_16;
  }
  v16 = -1073741670;
LABEL_22:
  v12 = 0LL;
  if ( v4 )
    Object[384] -= a4;
LABEL_24:
  v20 = Object[357];
  v17 = (const EVENT_DESCRIPTOR *)qword_14000EBF0;
  v22 = v12;
  v18 = qword_140C15FF8;
  if ( !a2 )
    v17 = &stru_14000EC00;
  v21 = v16;
  if ( EtwEventEnabled(qword_140C15FF8, v17) )
  {
    UserData.Reserved = 0;
    v28 = 0;
    v31 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v26 = &v22;
    v30 = 4;
    v29 = &v21;
    v27 = 8;
    EtwWrite(v18, v17, 0LL, 3u, &UserData);
  }
  return v16;
}
