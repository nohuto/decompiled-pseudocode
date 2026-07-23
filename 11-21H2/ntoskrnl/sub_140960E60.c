/*
 * XREFs of sub_140960E60 @ 0x140960E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D75C @ 0x14056D75C (sub_14056D75C.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     sub_140960D10 @ 0x140960D10 (sub_140960D10.c)
 *     sub_1409E93FC @ 0x1409E93FC (sub_1409E93FC.c)
 *     sub_1409E9458 @ 0x1409E9458 (sub_1409E9458.c)
 */

int __fastcall sub_140960E60(int a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // edi
  struct _PCW_BUFFER *v6; // r14
  int v7; // esi
  const void *v8; // rbx
  __int64 v9; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _PCW_DATA v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  struct _PCW_DATA v20; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v21[48]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v22[48]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR SourceString[12]; // [rsp+230h] [rbp+130h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(v21, 0, 0xB8uLL);
  memset(v22, 0, 0xB8uLL);
  Id = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
  {
    sub_1409E9458();
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    sub_1409E93FC();
    return 0;
  }
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0;
  v5 = 0;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  v16 = 0LL;
  if ( word_140D05000 )
  {
    while ( 1 )
    {
      memset(v21, 0, 0xB8uLL);
      v7 = 0;
      sub_14056D75C(&v17, qword_140D31700[v5]);
      if ( !(unsigned int)sub_140354698((__int64)&v17, &v13) )
      {
        do
        {
          sub_14026428C(v13, (__int64)&v16, 0LL);
          *((_QWORD *)&v18 + 1) = v16;
          LOWORD(v19) = WORD4(v16);
          *(_QWORD *)&v18 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&Id, (unsigned __int16 **)&v18) )
          {
            v8 = (const void *)(qword_140D088C0[Id] + 35008);
            sub_140960D10(v21, (__int64)v8);
            sub_140960D10(v22, v9);
            LODWORD(Data) = v7;
            sub_1402E1280(SourceString, 0x16uLL, L"%u,%u", v5, Data);
            RtlInitUnicodeString(&DestinationString, SourceString);
            v20.Data = v8;
            v20.Size = 184;
            result = PcwAddInstance(v6, &DestinationString, Id, 1u, &v20);
            if ( result < 0 )
              return result;
            ++v7;
          }
        }
        while ( !(unsigned int)sub_140354698((__int64)&v17, &v13) );
        if ( v7 )
        {
          sub_1402E1280(SourceString, 0x16uLL, L"%u,_Total", v5);
          RtlInitUnicodeString(&DestinationString, SourceString);
          v15.Data = v21;
          v15.Size = 184;
          result = PcwAddInstance(v6, &DestinationString, v5 + dword_140D068E8, 1u, &v15);
          if ( result < 0 )
            break;
        }
      }
      if ( ++v5 >= (unsigned __int16)word_140D05000 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    sub_1402E1280(SourceString, 0x16uLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, SourceString);
    v15.Data = v22;
    v15.Size = 184;
    return PcwAddInstance(v6, &DestinationString, dword_140D068E8 + (unsigned __int16)word_140D05000, 1u, &v15);
  }
  return result;
}
