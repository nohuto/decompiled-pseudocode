/*
 * XREFs of sub_1405D2284 @ 0x1405D2284
 * Callers:
 *     sub_140395BDC @ 0x140395BDC (sub_140395BDC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140990C30 @ 0x140990C30 (sub_140990C30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1405D2284(__int64 a1, __int64 a2, unsigned __int16 *a3, ...)
{
  REGHANDLE v5; // rbx
  struct _DEVICE_OBJECT *v6; // rbx
  bool v7; // di
  int v8; // eax
  wchar_t *Buffer; // r15
  bool v10; // bl
  wchar_t *v11; // r14
  int v12; // edx
  __int64 v13; // rcx
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  va_list v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  _DWORD *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  _DWORD v34[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  __int64 v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  __int64 *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  _DWORD *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  wchar_t *v45; // [rsp+170h] [rbp+70h]
  _DWORD v46[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  wchar_t *v49; // [rsp+190h] [rbp+90h]
  _DWORD v50[2]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  _DWORD v54[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  va_list va; // [rsp+238h] [rbp+138h] BYREF

  va_start(va, a3);
  v15 = a1;
  DestinationString = 0LL;
  v17 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_1404370A0);
  RtlInitUnicodeString(&v17, &word_1404370A0);
  if ( byte_140C5AE16 )
  {
    v5 = CallbackContext;
    if ( EtwEventEnabled(CallbackContext, &stru_14003C118) )
    {
      v14 = qword_140C21FA8;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v23 = 8LL;
      v22 = &v15;
      v25 = 8LL;
      va_copy(v24, va);
      v27 = 8LL;
      v26 = &qword_140C21FA8;
      EtwWriteEx(v5, &stru_14003C118, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      if ( *(_DWORD *)(a2 + 12) < 5u && !dword_140D014AC )
      {
        v6 = *(struct _DEVICE_OBJECT **)(v15 + 32);
        v7 = (int)sub_140990C30(v6, DevicePropertyClassName) >= 0;
        v8 = sub_140990C30(v6, DevicePropertyClassGuid);
        Buffer = DestinationString.Buffer;
        v10 = v8 >= 0;
        v11 = v17.Buffer;
        if ( (unsigned int)dword_140C04570 > 5 && sub_1402A2000((__int64)&dword_140C04570, 0x400000000000LL) )
        {
          v18 = qword_140C21FA8;
          v30 = 8LL;
          v29 = &v18;
          v12 = *(unsigned __int16 *)(v15 + 40);
          v13 = *(_QWORD *)(v15 + 48);
          v31 = v34;
          v19 = *(_QWORD *)(a2 + 32);
          v35 = &v19;
          v37 = a2 + 48;
          v39 = a2 + 88;
          v20 = *(_QWORD *)(a2 + 40);
          v41 = &v20;
          v43 = v46;
          v46[0] = DestinationString.Length;
          v47 = v50;
          v50[0] = v17.Length;
          v51 = v54;
          v53 = *((_QWORD *)a3 + 1);
          v54[0] = *a3;
          p_DestinationString = &DestinationString;
          v33 = v13;
          v34[0] = v12;
          v32 = 2LL;
          v34[1] = 0;
          v36 = 8LL;
          v38 = 40LL;
          v40 = 40LL;
          v42 = 8LL;
          v44 = 2LL;
          v45 = Buffer;
          v46[1] = 0;
          v48 = 2LL;
          v49 = v11;
          v50[1] = 0;
          v52 = 2LL;
          v54[1] = 0;
          *(_QWORD *)&DestinationString.Length = 0x1000000LL;
          v56 = 8LL;
          sub_14020A9C4((__int64)&dword_140C04570, (unsigned __int8 *)byte_14002FC91, 0LL, 0LL, 0x10u, &v28);
        }
        if ( v7 )
          ExFreePoolWithTag(Buffer, 0x67696450u);
        if ( v10 )
          ExFreePoolWithTag(v11, 0x67696450u);
      }
    }
  }
}
