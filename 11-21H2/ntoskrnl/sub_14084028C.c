/*
 * XREFs of sub_14084028C @ 0x14084028C
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140815360 @ 0x140815360 (sub_140815360.c)
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14083FC00 @ 0x14083FC00 (sub_14083FC00.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 *     sub_1409DB15C @ 0x1409DB15C (sub_1409DB15C.c)
 */

__int64 __fastcall sub_14084028C(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  PSLIST_ENTRY v6; // rsi
  char v7; // r14
  NTSTATUS v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rax
  WCHAR v11; // cx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  WCHAR *v15; // r9
  WCHAR v16; // cx
  int v17; // eax
  char v18; // cl
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  ULONG v23; // r15d
  PSLIST_ENTRY v24; // rax
  int v25; // eax
  ULONG v26; // r14d
  int v27; // eax
  __int64 Data1; // rax
  __int64 v29; // rax
  const EVENT_DESCRIPTOR *v30; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v36; // [rsp+50h] [rbp-B0h]
  HANDLE KeyHandlea; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DWORD KeyInformation[38]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[64]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR v42[64]; // [rsp+190h] [rbp+90h] BYREF

  Handle = 0LL;
  v36 = 0LL;
  KeyHandlea = 0LL;
  ResultLength = 0;
  v6 = 0LL;
  Value = 0;
  v34 = 0;
  v35 = 0;
  v38 = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  if ( KeyHandle && Guid )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
    if ( v8 >= 0 )
    {
      if ( KeyInformation[3] >= 0x80u )
      {
        v8 = -2147483643;
      }
      else
      {
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        memset(SourceString, 0, sizeof(SourceString));
        memset(v42, 0, sizeof(v42));
        v9 = 0;
        v10 = 0LL;
        while ( 1 )
        {
          v11 = *(_WORD *)((char *)&KeyInformation[4] + v10 * 2);
          if ( v11 == 59 )
            break;
          SourceString[v10] = v11;
          ++v9;
          ++v10;
          if ( v9 >= 0x40 )
            goto LABEL_69;
        }
        v12 = v9;
        if ( v12 >= 64 )
          sub_140502A3C();
        v13 = v9 + 1;
        SourceString[v12] = 0;
        v14 = 0;
        if ( (unsigned int)v13 >= 0x40 )
        {
LABEL_69:
          v8 = -1073741823;
          goto LABEL_34;
        }
        v15 = (WCHAR *)&KeyInformation[4] + v13;
        while ( 1 )
        {
          v16 = *v15;
          v42[v14] = *v15;
          if ( !v16 )
            break;
          LODWORD(v13) = v13 + 1;
          ++v15;
          ++v14;
          if ( (unsigned int)v13 >= 0x40 )
            goto LABEL_69;
        }
        if ( v14 == 1 && v42[0] == 42 )
          v7 = 1;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v8 = RtlGUIDFromString(&DestinationString, Guid);
        if ( v8 >= 0 )
        {
          if ( !v7 )
          {
            RtlInitUnicodeString(&DestinationString, v42);
            v8 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
            if ( v8 < 0 )
              goto LABEL_34;
            LOWORD(Guid[1].Data1) = Value;
          }
          v8 = sub_140840870((PCWSTR)&KeyInformation[4]);
          if ( v8 >= 0 )
          {
            v17 = sub_140840760(Handle, &v34, (__int64)&ResultLength);
            v8 = v17;
            if ( v17 < 0 )
            {
              if ( v17 != -1073741772 )
                goto LABEL_34;
              BYTE2(Guid[1].Data1) = -1;
            }
            else
            {
              v18 = v34;
              if ( !v34 )
                v18 = -1;
              BYTE2(Guid[1].Data1) = v18;
            }
            v19 = sub_140840760(Handle, &v38, (__int64)&ResultLength);
            v8 = v19;
            if ( v19 >= 0 )
            {
              v20 = v38;
              if ( !v38 )
                v20 = -1LL;
              *(_QWORD *)Guid[1].Data4 = v20;
              goto LABEL_29;
            }
            if ( v19 == -1073741772 )
            {
              *(_QWORD *)Guid[1].Data4 = -1LL;
LABEL_29:
              v21 = sub_140840760(Handle, &v35, (__int64)&ResultLength);
              v8 = v21;
              if ( v21 >= 0 )
              {
                *(_DWORD *)&Guid[2].Data2 = v35;
              }
              else
              {
                if ( v21 != -1073741772 )
                  goto LABEL_34;
                *(_DWORD *)&Guid[2].Data2 = 0;
              }
              if ( (int)sub_140840870(L"EndEvents") < 0 )
              {
LABEL_33:
                v8 = 0;
                goto LABEL_34;
              }
              v23 = 0;
              while ( 1 )
              {
                v24 = sub_14081538C(0, 0x30u);
                v6 = v24;
                if ( !v24 )
                  goto LABEL_76;
                *v24 = 0LL;
                v24[1] = 0LL;
                v24[2] = 0LL;
                v25 = sub_14083F908(KeyHandlea, v23++, (GUID *)v24);
                v8 = v25;
                if ( v25 == -2147483622 )
                  break;
                if ( v25 < 0 )
                  goto LABEL_34;
                v29 = *(unsigned int *)&Guid[3].Data2;
                if ( (unsigned int)v29 >= 0x10 )
                {
                  if ( EtwEventEnabled(qword_140C16E68, &stru_140038180) )
                  {
                    v30 = &stru_140038180;
LABEL_68:
                    sub_1409DB15C(v30, Guid, LOWORD(Guid[1].Data1));
                  }
                  goto LABEL_69;
                }
                *(_QWORD *)&Guid[65].Data4[8 * v29] = v6;
                ++*(_DWORD *)&Guid[3].Data2;
              }
              if ( !*(_DWORD *)&Guid[3].Data2 )
                goto LABEL_33;
              if ( !v7 )
              {
                if ( (int)sub_140840870(L"ContextProviders") < 0 )
                  goto LABEL_33;
                v26 = 0;
                while ( 1 )
                {
                  if ( !v6 )
                  {
                    v6 = sub_14081538C(0, 0x30u);
                    if ( !v6 )
                      break;
                  }
                  *v6 = 0LL;
                  v6[1] = 0LL;
                  v6[2] = 0LL;
                  v27 = sub_14083FC00(v36, v26++, (GUID *)v6);
                  v8 = v27;
                  if ( v27 == -2147483622 )
                    goto LABEL_33;
                  if ( v27 < 0 )
                    goto LABEL_34;
                  Data1 = Guid[3].Data1;
                  if ( (unsigned int)Data1 >= 0x7C )
                  {
                    if ( !EtwEventEnabled(qword_140C16E68, &stru_1400383C8) )
                      goto LABEL_69;
                    v30 = &stru_1400383C8;
                    goto LABEL_68;
                  }
                  *(_QWORD *)&Guid[3].Data4[8 * Data1] = v6;
                  v6 = 0LL;
                  ++Guid[3].Data1;
                }
LABEL_76:
                v8 = -1073741670;
                goto LABEL_34;
              }
              goto LABEL_69;
            }
          }
        }
      }
    }
LABEL_34:
    if ( Handle )
      ZwClose(Handle);
    if ( v36 )
      ZwClose(v36);
    if ( KeyHandlea )
      ZwClose(KeyHandlea);
    if ( v6 )
      sub_140815360(0, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
