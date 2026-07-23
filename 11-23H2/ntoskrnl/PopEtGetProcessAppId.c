/*
 * XREFs of PopEtGetProcessAppId @ 0x1407B1320
 * Callers:
 *     PoEnergyContextStart @ 0x1407B122C (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopEtGetProcessImageInfo @ 0x1407B14B8 (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessVersionInfo @ 0x1407B1514 (PopEtGetProcessVersionInfo.c)
 *     PopEtAppIdIntern @ 0x1407B1620 (PopEtAppIdIntern.c)
 *     PopEtAppIdDereference @ 0x1407B2C10 (PopEtAppIdDereference.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B32AC (PopEtGetProcessSidAndPackageIdentity.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  int ProcessVersionInfo; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 i; // rcx
  WCHAR v14; // ax
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-90h]
  __int64 *v21; // [rsp+78h] [rbp-88h]
  wchar_t *Buffer; // [rsp+80h] [rbp-80h]
  _WORD *v23; // [rsp+88h] [rbp-78h]
  _WORD *v24; // [rsp+90h] [rbp-70h]
  _BYTE *v25; // [rsp+98h] [rbp-68h]
  __int16 v26; // [rsp+A0h] [rbp-60h]
  __int16 v27; // [rsp+A2h] [rbp-5Eh]
  __int16 v28; // [rsp+A4h] [rbp-5Ch]
  __int16 v29; // [rsp+A6h] [rbp-5Ah]
  _BYTE v30[80]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v31[200]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR SourceString[16]; // [rsp+290h] [rbp+190h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  DestinationString = 0LL;
  memset(v31, 0, 0x188uLL);
  memset(v30, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 1472);
  v15 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v14 = *(unsigned __int8 *)(a1 + i + 1448);
      SourceString[i] = v14;
      if ( !(_BYTE)v14 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v17);
  PopEtGetProcessSidAndPackageIdentity(a1, v30, v31);
  v20 = &v17;
  memset(v19, 0, sizeof(v19));
  ProcessVersionInfo = PopEtGetProcessVersionInfo(a1, &v15);
  v6 = v15;
  v21 = &v15;
  v25 = v30;
  if ( ProcessVersionInfo < 0 )
    v6 = 0LL;
  v15 = v6;
  v29 = 4 * (v30[1] + 2);
  Buffer = p_DestinationString->Buffer;
  v26 = p_DestinationString->Length >> 1;
  v23 = &v31[2];
  v27 = v31[0];
  v24 = &v31[130];
  v28 = v31[1];
  v8 = PopEtAppIdIntern(v19, &v16);
  if ( v8 < 0 )
  {
    v11 = v16;
  }
  else
  {
    v11 = 0LL;
    *a2 = v16;
    v8 = 0;
  }
  if ( v11 )
    PopEtAppIdDereference(v11, v7, v9, v10);
  return (unsigned int)v8;
}
