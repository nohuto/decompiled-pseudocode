/*
 * XREFs of sub_14024A824 @ 0x14024A824
 * Callers:
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14024A824(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int v6; // r14d
  char v8; // r15
  REGHANDLE v10; // rdi
  int v11; // r8d
  __int64 v12; // r9
  char *v13; // rdx
  char v14; // al
  REGHANDLE v15; // rbx
  const EVENT_DESCRIPTOR *v16; // rdx
  int ActivityId; // [rsp+28h] [rbp-91h]
  int RelatedActivityId; // [rsp+30h] [rbp-89h]
  ULONG UserDataCount; // [rsp+38h] [rbp-81h]
  char v21; // [rsp+48h] [rbp-71h] BYREF
  char v22; // [rsp+49h] [rbp-70h] BYREF
  char v23; // [rsp+4Ah] [rbp-6Fh] BYREF
  int v24; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-61h] BYREF
  char *v27; // [rsp+68h] [rbp-51h]
  __int64 v28; // [rsp+70h] [rbp-49h]
  char *v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+80h] [rbp-39h]
  char *v31; // [rsp+88h] [rbp-31h]
  __int64 v32; // [rsp+90h] [rbp-29h]
  __int64 v33[4]; // [rsp+98h] [rbp-21h] BYREF
  int *v34; // [rsp+B8h] [rbp-1h]
  __int64 v35; // [rsp+C0h] [rbp+7h]
  __int64 *v36; // [rsp+C8h] [rbp+Fh]
  __int64 v37; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  __int64 v39; // [rsp+118h] [rbp+5Fh] BYREF

  v5 = &retaddr;
  v39 = a1;
  v6 = a5;
  v8 = a3;
  if ( a4 == 2 )
  {
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      LOBYTE(v5) = sub_1402A2000(&dword_140C03A00, 0x400000000000LL, a3, 4LL);
      if ( (_BYTE)v5 )
      {
        v34 = &v24;
        v13 = byte_14002FA18;
        UserDataCount = 3;
        goto LABEL_12;
      }
    }
  }
  else if ( a4 == 3 )
  {
    _m_prefetchw(&dword_140C0B8B0);
    LODWORD(v5) = _InterlockedAnd(&dword_140C0B8B0, 0);
    if ( (_DWORD)v5 )
    {
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        LOBYTE(v5) = sub_1402A2000(&dword_140C03A00, 0x400000000000LL, a3, 4LL);
        if ( (_BYTE)v5 )
        {
          v25 = 0x1000000LL;
          v34 = &v24;
          v13 = (char *)&byte_14002FA57;
          v37 = 8LL;
          v36 = &v25;
          UserDataCount = v12;
LABEL_12:
          v35 = v12;
          v24 = v6;
          LOBYTE(v5) = sub_14024A9B0(
                         (int)&dword_140C03A00,
                         (int)v13,
                         v11,
                         1,
                         ActivityId,
                         RelatedActivityId,
                         UserDataCount,
                         (__int64)v33);
        }
      }
    }
  }
  if ( byte_140C5AE14 )
  {
    v10 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_14000EB78)
      || EtwEventEnabled(v10, &stru_14000EB68)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &stru_14000EB58), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v14 = -1;
        }
        else
        {
          v14 = v8;
          if ( a2 == 3 )
            v14 = -2;
        }
      }
      else
      {
        v14 = -3;
      }
      v21 = v14;
      v22 = a4;
      UserData.Ptr = (ULONGLONG)&v39;
      v23 = v6;
      v27 = &v21;
      v29 = &v22;
      v31 = &v23;
      *(_QWORD *)&UserData.Size = 8LL;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 1LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &stru_14000EB78);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(v10, &stru_14000EB78, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        v15 = RegHandle;
        LOBYTE(v5) = EtwEventEnabled(RegHandle, &stru_14000EB68);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v16 = &stru_14000EB68;
      }
      else
      {
        if ( a4 != 3 )
          return (char)v5;
        v15 = RegHandle;
        LOBYTE(v5) = EtwEventEnabled(RegHandle, &stru_14000EB58);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v16 = &stru_14000EB58;
      }
      LOBYTE(v5) = EtwWriteEx(v15, v16, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v5;
}
