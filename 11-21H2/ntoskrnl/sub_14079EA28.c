/*
 * XREFs of sub_14079EA28 @ 0x14079EA28
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_14079EA28(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rsi
  const EVENT_DESCRIPTOR *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  REGHANDLE v21; // rcx
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+228h] [rbp+120h] BYREF
  va_list va; // [rsp+228h] [rbp+120h]
  __int64 v28; // [rsp+230h] [rbp+128h] BYREF
  va_list va1; // [rsp+230h] [rbp+128h]
  __int64 v30; // [rsp+238h] [rbp+130h] BYREF
  va_list va2; // [rsp+238h] [rbp+130h]
  va_list va3; // [rsp+240h] [rbp+138h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(qword_140C15E00, 0, 0xFuLL);
  if ( result )
  {
    v5 = 0LL;
    v6 = *((_QWORD *)KeGetCurrentThread() + 23);
    v7 = *((_QWORD *)KeGetCurrentThread() + 68);
    if ( v7 == a1 )
      v5 = 8LL;
    v8 = *(const EVENT_DESCRIPTOR **)((char *)off_1400072E8 + (a2 != 0 ? 0 : 0x10) + v5);
    result = EtwEventEnabled(qword_140C15E00, v8);
    if ( result )
    {
      v9 = sub_1402EDEB4(UserData, v6, &v22);
      v10 = sub_1402EDFB0((__int64)&UserData[v9], (__int64)KeGetCurrentThread());
      v12 = sub_1402EDEB4(&UserData[v10 + v11].Ptr, a1, &v23);
      v14 = sub_1402EDEB4(&UserData[v12 + v13].Ptr, v7, &v24);
      v16 = v14 + v15;
      v17 = v16;
      *(&UserData[0].Reserved + 1 * v17) = 0;
      UserData[v17].Ptr = (ULONGLONG)va;
      UserData[v17].Size = 8;
      v18 = v16 + 1;
      *(&UserData[0].Reserved + 1 * v18) = 0;
      UserData[v18].Ptr = (ULONGLONG)va1;
      UserData[v18].Size = 8;
      v19 = v16 + 2;
      v16 += 3;
      v19 *= 2LL;
      *(&UserData[0].Reserved + 2 * v19) = 0;
      *(&UserData[0].Ptr + v19) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v19) = 4;
      v20 = v16;
      *(&UserData[0].Reserved + 1 * v20) = 0;
      UserData[v20].Ptr = (ULONGLONG)va3;
      v21 = qword_140C15E00;
      UserData[v20].Size = 4;
      return EtwWrite(v21, v8, 0LL, v16 + 1, UserData);
    }
  }
  return result;
}
