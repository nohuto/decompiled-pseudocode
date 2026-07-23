/*
 * XREFs of sub_1406DE008 @ 0x1406DE008
 * Callers:
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14067A3F4 @ 0x14067A3F4 (sub_14067A3F4.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     sub_1406DE9B8 @ 0x1406DE9B8 (sub_1406DE9B8.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DE008(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edi
  int appended; // ebx
  ULONG *v8; // rax
  ULONG v9; // esi
  unsigned int v10; // r12d
  __int128 v11; // xmm7
  ULONG *v12; // rax
  ULONG v13; // edi
  unsigned int v14; // r15d
  __int128 v15; // xmm6
  int v17; // [rsp+28h] [rbp-E0h]
  char v18; // [rsp+28h] [rbp-E0h]
  _QWORD Destination[3]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  UNICODE_STRING String; // [rsp+90h] [rbp-78h] BYREF
  PVOID v24; // [rsp+A0h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v26[2]; // [rsp+B0h] [rbp-58h]
  PVOID v27; // [rsp+C0h] [rbp-48h]
  PVOID v28[2]; // [rsp+C8h] [rbp-40h]
  PVOID v29; // [rsp+D8h] [rbp-30h]
  char v30; // [rsp+E0h] [rbp-28h] BYREF

  v5 = a5;
  *(_OWORD *)&Destination[1] = *a2;
  v27 = 0LL;
  v29 = 0LL;
  v22 = a5;
  String.MaximumLength = 28;
  Handle = 0LL;
  String.Buffer = (wchar_t *)&v30;
  KeyHandle = 0LL;
  P = 0LL;
  v24 = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)v28 = 0LL;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], &word_140865B20);
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], off_140A39E10[**(int **)(a1 + 16)]);
    if ( appended >= 0 )
    {
      v8 = *(ULONG **)(a1 + 24);
      if ( v8 )
      {
        v9 = *v8;
        v10 = *v8 + 1;
      }
      else
      {
        v18 = 0;
        appended = sub_1406DE960(&Handle, 0LL, &Destination[1], 131097LL, v18);
        if ( appended < 0 )
          return (unsigned int)appended;
        appended = sub_14067A3F4(Handle, &P);
        ZwClose(Handle);
        Handle = 0LL;
        if ( appended < 0 )
          return (unsigned int)appended;
        v9 = 0;
        v10 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v11 = *(_OWORD *)&Destination[1];
      if ( v9 < v10 )
      {
        while ( 1 )
        {
          *(_OWORD *)&Destination[1] = v11;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v9, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], &word_140865B20);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v17) = 0;
          appended = sub_1406DE960(&Handle, 0LL, &Destination[1], 131097LL, v17);
          if ( appended >= 0 )
          {
            appended = sub_1406DE9B8(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_30:
          if ( ++v9 >= v10 )
            return (unsigned int)appended;
        }
        if ( !*(_QWORD *)(a1 + 32) )
        {
          v17 = v5;
          appended = sub_14042A5E0(*(_QWORD *)(a1 + 56), &Destination[1]);
          goto LABEL_23;
        }
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], &word_140865B20);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], off_140A39E10[**(int **)(a1 + 32)]);
          if ( appended >= 0 )
          {
            v12 = *(ULONG **)(a1 + 40);
            if ( v12 )
            {
              v13 = *v12;
              v14 = *v12 + 1;
            }
            else
            {
              LOBYTE(v17) = 0;
              if ( (int)sub_1406DE960(&KeyHandle, 0LL, &Destination[1], 131097LL, v17) < 0
                || (appended = sub_14067A3F4(KeyHandle, &v24), ZwClose(KeyHandle), KeyHandle = 0LL, appended < 0) )
              {
                appended = 0;
                goto LABEL_23;
              }
              v13 = 0;
              v14 = *((_DWORD *)v24 + 5);
              ExFreePoolWithTag(v24, 0);
              v24 = 0LL;
            }
            v15 = *(_OWORD *)&Destination[1];
            while ( v13 < v14 )
            {
              *(_OWORD *)&Destination[1] = v15;
              String.Length = 26;
              appended = RtlIntegerToUnicodeString(v13, 0xAu, &String);
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], &word_140865B20);
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
              if ( appended < 0 )
                break;
              LOBYTE(v17) = 0;
              appended = sub_1406DE960(&KeyHandle, 0LL, &Destination[1], 131097LL, v17);
              if ( appended >= 0 )
              {
                appended = sub_1406DE9B8(KeyHandle);
                ZwClose(KeyHandle);
                KeyHandle = 0LL;
                if ( appended >= 0 )
                {
                  v17 = v22;
                  appended = sub_14042A5E0(*(_QWORD *)(a1 + 56), &Destination[1]);
                  if ( v28[0] )
                  {
                    ExFreePoolWithTag(v28[0], 0);
                    v28[0] = 0LL;
                  }
                  if ( v28[1] )
                  {
                    ExFreePoolWithTag(v28[1], 0);
                    v28[1] = 0LL;
                  }
                  if ( v29 )
                  {
                    ExFreePoolWithTag(v29, 0);
                    v29 = 0LL;
                  }
                  if ( appended < 0 )
                    break;
                }
              }
              ++v13;
            }
            v5 = v22;
          }
        }
LABEL_23:
        if ( v26[0] )
        {
          ExFreePoolWithTag(v26[0], 0);
          v26[0] = 0LL;
        }
        if ( v26[1] )
        {
          ExFreePoolWithTag(v26[1], 0);
          v26[1] = 0LL;
        }
        if ( v27 )
        {
          ExFreePoolWithTag(v27, 0);
          v27 = 0LL;
        }
        if ( appended < 0 )
          return (unsigned int)appended;
        goto LABEL_30;
      }
    }
  }
  return (unsigned int)appended;
}
