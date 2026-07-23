/*
 * XREFs of sub_140850F5C @ 0x140850F5C
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

void __fastcall sub_140850F5C(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  bool v8; // cc
  void *v9; // rax
  void *v10; // rdi
  __int64 v11; // rax
  char *v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned int v16; // kr00_4
  unsigned int *v17; // r8
  unsigned int v18; // edx
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int16 *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char v33; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  _DWORD v36[10]; // [rsp+140h] [rbp+40h] BYREF

  v21 = 0;
  v22 = 0;
  v20 = 0;
  LocalTime.QuadPart = 0LL;
  if ( byte_140C5AE14 && (a4 || EtwEventEnabled(RegHandle, &stru_1400393B8)) )
  {
    v8 = a4 <= 1;
    if ( a4 == 1 )
    {
      if ( !EtwEventEnabled(RegHandle, &stru_140039C80) )
        return;
      v8 = 1;
    }
    if ( v8 )
    {
      v9 = sub_14036B86C(a2, 0x67446F50u);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)v9 + 39) + 40LL);
        if ( v11 )
        {
          v20 = *(_WORD *)(v11 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v20;
          *(_QWORD *)&UserData.Size = 2LL;
          v26 = *(_QWORD *)(v11 + 136);
          v27 = 2 * v20;
          v28 = 0;
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
          v30 = 8LL;
          p_LocalTime = &LocalTime;
          v12 = &v33;
          v32 = 2LL;
          v13 = 0;
          v14 = 10LL;
          v21 = a3 != 0;
          v31 = &v21;
          do
          {
            v15 = v13;
            *(_QWORD *)(v12 - 4) = 4LL;
            ++v13;
            v12 += 16;
            v16 = *(_DWORD *)(a1 + 4 * v15 + 36);
            v17 = &v36[v15];
            *(_QWORD *)(v12 - 28) = v17;
            *v17 = v16 / 0xA;
            --v14;
          }
          while ( v14 );
          v35 = 4LL;
          v18 = *(_DWORD *)(a1 + 16) / 0xAu;
          v34 = &v22;
          v22 = v18;
          v19 = &stru_1400393B8;
          if ( a4 )
            v19 = &stru_140039C80;
          EtwWrite(RegHandle, v19, 0LL, 0xFu, &UserData);
        }
        ObfDereferenceObjectWithTag(v10, 0x67446F50u);
      }
    }
  }
}
