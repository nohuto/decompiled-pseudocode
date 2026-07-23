/*
 * XREFs of sub_1408833DA @ 0x1408833DA
 * Callers:
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 * Callees:
 *     sub_140251AA8 @ 0x140251AA8 (sub_140251AA8.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDF48 @ 0x1402EDF48 (sub_1402EDF48.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D98F8 @ 0x1406D98F8 (sub_1406D98F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1408833DA(ULONG_PTR a1, char a2, ...)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  const EVENT_DESCRIPTOR *v8; // r15
  bool v9; // zf
  REGHANDLE v10; // rbx
  REGHANDLE v11; // rcx
  ULONGLONG v12; // r8
  BOOLEAN v13; // di
  int v14; // eax
  int v15; // eax
  int v16; // r11d
  int v17; // eax
  int v18; // r11d
  int v19; // eax
  int v20; // r11d
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r11d
  int v27; // eax
  int v28; // r11d
  PVOID v29; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v30[56]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h]
  PVOID v32; // [rsp+80h] [rbp-88h]
  unsigned __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+A8h] [rbp-60h] BYREF
  void *v37; // [rsp+2F8h] [rbp+1F0h] BYREF
  va_list va; // [rsp+2F8h] [rbp+1F0h]
  __int64 v39; // [rsp+300h] [rbp+1F8h] BYREF
  va_list va1; // [rsp+300h] [rbp+1F8h]
  __int64 v41; // [rsp+308h] [rbp+200h] BYREF
  va_list va2; // [rsp+308h] [rbp+200h]
  va_list va3; // [rsp+310h] [rbp+208h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v37 = va_arg(va1, void *);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD);
  v31 = 0LL;
  LODWORD(v32) = 0;
  v4 = 0;
  memset(&v30[8], 0, 48);
  if ( EtwProviderEnabled(qword_140C15E00, 0, 0xF0uLL) )
  {
    v5 = 0LL;
    v6 = *((_QWORD *)KeGetCurrentThread() + 23);
    v7 = *((_QWORD *)KeGetCurrentThread() + 68);
    if ( v6 == a1 )
      v5 = 8LL;
    v8 = *(const EVENT_DESCRIPTOR **)((char *)&off_14000AC48 + (a2 == 0 ? 0x10 : 0) + v5);
    if ( v6 == a1 )
    {
      v9 = a2 == 0;
      v12 = 0x800000000LL;
      v10 = qword_140C15E00;
      v11 = qword_140C15E00;
      if ( !v9 )
        v12 = 0x400000000LL;
    }
    else
    {
      v9 = a2 == 0;
      v10 = qword_140C15E00;
      v11 = qword_140C15E00;
      if ( v9 )
        v12 = 0x2000000000LL;
      else
        v12 = 0x1000000000LL;
    }
    v13 = EtwProviderEnabled(v11, 0, v12);
    if ( EtwEventEnabled(v10, v8) )
    {
      if ( v13 )
      {
        v29 = v37;
        v4 = sub_1406D98F8((__int64)&v30[8], a1, &v29, 1LL, 1);
      }
      v14 = sub_1402EDEB4(UserData, v6, &v33);
      v15 = sub_1402EDFB0((__int64)&UserData[v14], (__int64)KeGetCurrentThread());
      v17 = sub_1402EDEB4(&UserData[v15 + v16].Ptr, a1, &v34);
      v19 = sub_1402EDEB4(&UserData[v17 + v18].Ptr, v7, &v35);
      v21 = (unsigned int)(v19 + v20);
      v22 = v21 + 1;
      v21 *= 2LL;
      *(&UserData[0].Ptr + v21) = (ULONGLONG)va;
      *((_QWORD *)&UserData[0].Size + v21) = 8LL;
      v23 = v22;
      UserData[v23].Ptr = (ULONGLONG)va1;
      *(_QWORD *)&UserData[v23].Size = 8LL;
      v24 = v22 + 1;
      UserData[v24].Ptr = (ULONGLONG)va2;
      *(_QWORD *)&UserData[v24].Size = 4LL;
      v25 = v22 + 2;
      v26 = v22 + 3;
      v25 *= 2LL;
      *(&UserData[0].Ptr + v25) = (ULONGLONG)va3;
      *((_QWORD *)&UserData[0].Size + v25) = 4LL;
      if ( v13 && v4 )
        v27 = sub_140251AA8((__int64)&UserData[v26], (__int64)&v30[8]);
      else
        v27 = sub_1402EDF48(&UserData[v26].Ptr);
      EtwWrite(qword_140C15E00, v8, 0LL, v27 + v28, UserData);
      if ( v4 )
      {
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
      }
    }
  }
}
