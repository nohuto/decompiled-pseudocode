/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x180053020
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x180052FA8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     ValidatePointer @ 0x18005329C (ValidatePointer.c)
 *     GetResourceDirectoryEntry @ 0x1800532DC (GetResourceDirectoryEntry.c)
 *     FindDirectoryEntry @ 0x180053320 (FindDirectoryEntry.c)
 */

void __fastcall WerEscalationReadImageVersionInfoForModuleBase(char *BaseOfImage, __int64 a2)
{
  PIMAGE_NT_HEADERS v4; // rcx
  bool v5; // cc
  __int64 VirtualAddress; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 ResourceDirectoryEntry; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  char *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _WORD *v22; // rsi
  __int64 v23; // rax
  _UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&String2.Length = BaseOfImage;
  *(_OWORD *)a2 = 0LL;
  if ( RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders) >= 0 )
  {
    v4 = OutHeaders;
    *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
    *(_DWORD *)(a2 + 4) = v4->OptionalHeader.CheckSum;
    v5 = v4->OptionalHeader.NumberOfRvaAndSizes <= 2;
    String2.Buffer = (wchar_t *)v4->OptionalHeader.SizeOfImage;
    if ( !v5 )
    {
      VirtualAddress = v4->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v4->OptionalHeader.DataDirectory[2].Size >= 0x10 )
        {
          v7 = &BaseOfImage[VirtualAddress];
          if ( (unsigned int)ValidatePointer(&String2, &BaseOfImage[VirtualAddress], 16LL) )
          {
            if ( v7 )
            {
              ResourceDirectoryEntry = GetResourceDirectoryEntry(&String2, v8, *((unsigned __int16 *)v7 + 6));
              if ( ResourceDirectoryEntry )
              {
                v10 = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                        &String2,
                        ResourceDirectoryEntry,
                        *((unsigned __int16 *)v7 + 7),
                        16LL);
                if ( v10 )
                {
                  if ( (unsigned int)ValidatePointer(&String2, &v7[*(_DWORD *)(v10 + 4) & 0x7FFFFFFF], 16LL) )
                  {
                    v13 = GetResourceDirectoryEntry(&String2, v11, *(unsigned __int16 *)(v12 + 12));
                    if ( v13 )
                    {
                      v15 = ((__int64 (__fastcall *)(_UNICODE_STRING *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                              &String2,
                              v13,
                              *(unsigned __int16 *)(v14 + 14),
                              1LL);
                      if ( v15 )
                      {
                        if ( (unsigned int)ValidatePointer(&String2, &v7[*(_DWORD *)(v15 + 4) & 0x7FFFFFFF], 16LL) )
                        {
                          v17 = GetResourceDirectoryEntry(&String2, v16, 0LL);
                          if ( v17 )
                          {
                            if ( *(int *)(v17 + 4) >= 0 )
                            {
                              if ( (unsigned int)ValidatePointer(&String2, &v7[*(unsigned int *)(v17 + 4)], 16LL) )
                              {
                                if ( v18[1] >= 0x5C )
                                {
                                  v19 = &BaseOfImage[*v18];
                                  if ( (unsigned int)ValidatePointer(&String2, v19, 92LL) )
                                  {
                                    if ( v19 )
                                    {
                                      if ( (unsigned int)ValidatePointer(&String2, v20, v21) )
                                      {
                                        v22 = v19 + 6;
                                        if ( (unsigned int)ValidatePointer(&String2, v19 + 6, 32LL) )
                                        {
                                          RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                          String2.Buffer = (wchar_t *)(v19 + 6);
                                          if ( v19 != (char *)-6LL )
                                          {
                                            v23 = 16LL;
                                            do
                                            {
                                              if ( !*v22 )
                                                break;
                                              ++v22;
                                              --v23;
                                            }
                                            while ( v23 );
                                            if ( v23 )
                                            {
                                              String2.MaximumLength = 32;
                                              String2.Length = v23 != 0 ? 2 * (16 - v23) : 0;
                                              if ( !RtlCompareUnicodeString(&DestinationString, &String2, 0) )
                                              {
                                                *(_DWORD *)(a2 + 8) = *((_DWORD *)v19 + 12);
                                                *(_DWORD *)(a2 + 12) = *((_DWORD *)v19 + 13);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
