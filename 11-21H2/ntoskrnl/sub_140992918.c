/*
 * XREFs of sub_140992918 @ 0x140992918
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140992918(__int64 a1, __int64 a2, char a3, int a4, unsigned int a5)
{
  _UNKNOWN **v5; // rax
  bool v9; // cc
  void *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // kr00_4
  unsigned int v13; // kr04_4
  const EVENT_DESCRIPTOR *v14; // rdx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER *p_LocalTime; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  int *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  char *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v43; // [rsp+150h] [rbp+48h] BYREF

  v5 = &retaddr;
  v43 = a4;
  LOWORD(v16) = 0;
  LocalTime.QuadPart = 0LL;
  v18 = 0LL;
  LOWORD(v17) = 0;
  if ( byte_140C5AE14 )
  {
    if ( a5 || (LOBYTE(v5) = EtwEventEnabled(RegHandle, &stru_1400391C8), (_BYTE)v5) )
    {
      v9 = a5 <= 1;
      if ( a5 == 1 )
      {
        LOBYTE(v5) = EtwEventEnabled(RegHandle, &stru_140039AF0);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v9 = a5 <= 1;
      }
      if ( v9 )
      {
        v5 = (_UNKNOWN **)sub_14036B86C(a2, 0x67446F50u);
        v10 = v5;
        if ( v5 )
        {
          v11 = *((_QWORD *)v5[39] + 5);
          if ( v11 )
          {
            LOWORD(v16) = *(_WORD *)(v11 + 128) >> 1;
            UserData.Ptr = (ULONGLONG)&v16;
            *(_QWORD *)&UserData.Size = 2LL;
            v22 = *(_QWORD *)(v11 + 136);
            v23 = 2 * (unsigned int)(unsigned __int16)v16;
            SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
            ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
            v25 = 8LL;
            p_LocalTime = &LocalTime;
            v28 = &v18;
            v27 = 2LL;
            v29 = 4LL;
            v31 = 4LL;
            LOWORD(v17) = a3 != 0;
            v26 = &v17;
            v12 = *(_DWORD *)(a1 + 20);
            v33 = 4LL;
            LODWORD(v18) = v12 / 0xA;
            v13 = *(_DWORD *)(a1 + 16);
            v35 = 4LL;
            v30 = (char *)&v18 + 4;
            v32 = a1 + 4;
            v34 = a1 + 8;
            v36 = a1 + 12;
            v38 = &v43;
            v40 = a1 + 80;
            HIDWORD(v18) = v13 / 0xA;
            v14 = &stru_1400391C8;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            if ( a5 )
              v14 = &stru_140039AF0;
            EtwWrite(RegHandle, v14, 0LL, 0xBu, &UserData);
          }
          LOBYTE(v5) = ObfDereferenceObjectWithTag(v10, 0x67446F50u);
        }
      }
    }
  }
  return (char)v5;
}
