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

void __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned __int64 a1, __int64 a2)
{
  unsigned int *v4; // rcx
  bool v5; // cc
  __int64 v6; // rax
  __int64 v7; // rbx
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
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _WORD *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v27; // [rsp+70h] [rbp+30h] BYREF

  v24 = a1;
  *(_OWORD *)a2 = 0LL;
  if ( (int)RtlImageNtHeaderEx(3, a1, 0LL, &v27) >= 0 )
  {
    v4 = v27;
    *(_DWORD *)a2 = v27[2];
    *(_DWORD *)(a2 + 4) = v4[22];
    v5 = v4[33] <= 2;
    v25 = v4[20];
    if ( !v5 )
    {
      v6 = v4[38];
      if ( (_DWORD)v6 )
      {
        if ( v4[39] >= 0x10 )
        {
          v7 = a1 + v6;
          if ( (unsigned int)ValidatePointer(&v24, a1 + v6, 16LL) )
          {
            if ( v7 )
            {
              ResourceDirectoryEntry = GetResourceDirectoryEntry(&v24, v8, *(unsigned __int16 *)(v7 + 12));
              if ( ResourceDirectoryEntry )
              {
                v10 = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                        &v24,
                        ResourceDirectoryEntry,
                        *(unsigned __int16 *)(v7 + 14),
                        16LL);
                if ( v10 )
                {
                  if ( (unsigned int)ValidatePointer(&v24, v7 + (*(_DWORD *)(v10 + 4) & 0x7FFFFFFF), 16LL) )
                  {
                    v13 = GetResourceDirectoryEntry(&v24, v11, *(unsigned __int16 *)(v12 + 12));
                    if ( v13 )
                    {
                      v15 = ((__int64 (__fastcall *)(unsigned __int64 *, __int64, _QWORD, __int64))FindDirectoryEntry)(
                              &v24,
                              v13,
                              *(unsigned __int16 *)(v14 + 14),
                              1LL);
                      if ( v15 )
                      {
                        if ( (unsigned int)ValidatePointer(&v24, v7 + (*(_DWORD *)(v15 + 4) & 0x7FFFFFFF), 16LL) )
                        {
                          v17 = GetResourceDirectoryEntry(&v24, v16, 0LL);
                          if ( v17 )
                          {
                            if ( *(int *)(v17 + 4) >= 0 )
                            {
                              if ( (unsigned int)ValidatePointer(&v24, v7 + *(unsigned int *)(v17 + 4), 16LL) )
                              {
                                if ( v18[1] >= 0x5C )
                                {
                                  v19 = a1 + *v18;
                                  if ( (unsigned int)ValidatePointer(&v24, v19, 92LL) )
                                  {
                                    if ( v19 )
                                    {
                                      if ( (unsigned int)ValidatePointer(&v24, v20, v21) )
                                      {
                                        v22 = (_WORD *)(v19 + 6);
                                        if ( (unsigned int)ValidatePointer(&v24, v19 + 6, 32LL) )
                                        {
                                          RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                          v25 = v19 + 6;
                                          if ( v19 != -6LL )
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
                                              WORD1(v24) = 32;
                                              LOWORD(v24) = v23 != 0 ? 2 * (16 - v23) : 0;
                                              if ( !(unsigned int)RtlCompareUnicodeString(
                                                                    &DestinationString.Length,
                                                                    (unsigned __int16 *)&v24,
                                                                    0) )
                                              {
                                                *(_DWORD *)(a2 + 8) = *(_DWORD *)(v19 + 48);
                                                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v19 + 52);
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
