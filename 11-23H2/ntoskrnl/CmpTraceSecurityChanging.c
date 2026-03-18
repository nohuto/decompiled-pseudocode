/*
 * XREFs of CmpTraceSecurityChanging @ 0x14070DCAC
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CED4 (CmpFreeTransientPoolWithTag.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140297514 (RtlLengthSecurityDescriptorStrict.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BB0 (CmpConstructNameWithStatus.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9330 (RtlFindUnicodeSubstring.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r13d
  int v8; // eax
  unsigned __int16 *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned __int16 v14; // r9
  __int64 v15; // r10
  int v16; // ecx
  unsigned __int16 *v17[2]; // [rsp+30h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  __int64 v21; // [rsp+70h] [rbp-71h]
  _DWORD v22[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  __int64 v25; // [rsp+90h] [rbp-51h]
  _DWORD v26[2]; // [rsp+98h] [rbp-49h] BYREF
  unsigned __int16 **v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  _DWORD *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  __int64 v31; // [rsp+C0h] [rbp-21h]
  _DWORD v32[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  __int64 v35; // [rsp+E0h] [rbp-1h]
  _DWORD v36[2]; // [rsp+E8h] [rbp+7h] BYREF

  v17[0] = 0LL;
  v7 = a3;
  v8 = CmpConstructNameWithStatus(a1, v17, a3);
  v9 = v17[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( RtlFindUnicodeSubstring(v17[0]) )
    {
      v12 = RtlLengthSecurityDescriptorStrict();
      if ( v12 > 0xFFFF )
        LOWORD(v12) = -1;
      v13 = RtlLengthSecurityDescriptorStrict();
      if ( v13 > 0xFFFF )
        LOWORD(v13) = -1;
      RtlLengthSecurityDescriptorStrict();
      if ( (unsigned int)dword_140C043C8 > 5 && tlgKeywordOn((__int64)&dword_140C043C8, 2LL) )
      {
        v16 = *v9;
        v21 = *((_QWORD *)v9 + 1);
        v23 = v26;
        v19 = v22;
        v26[0] = (unsigned __int16)v12;
        v27 = v17;
        v29 = v32;
        v32[0] = (unsigned __int16)v13;
        v33 = v36;
        v36[0] = v14;
        v22[0] = v16;
        v22[1] = 0;
        v26[1] = 0;
        v32[1] = 0;
        v36[1] = 0;
        v20 = v15;
        v24 = v15;
        v25 = a2;
        LODWORD(v17[0]) = v7;
        v28 = 4LL;
        v30 = v15;
        v31 = a4;
        v34 = v15;
        v35 = a5;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C043C8,
          (unsigned __int8 *)word_14003734A,
          0LL,
          0LL,
          0xBu,
          &v18);
      }
    }
    v10 = 0;
  }
  if ( v9 )
    CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  return v10;
}
