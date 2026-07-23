/*
 * XREFs of RtlpGetRegistryHandle @ 0x1406C61F0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1406C5A00 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1407D45B0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1407E5680 (RtlCheckRegistryKey.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407F8004 (RtlpGetTimeZoneInfoHandle.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14083F75C (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083FC80 (RtlpUpdateDynamicTimeZones.c)
 *     RtlCreateRegistryKey @ 0x140864530 (RtlCreateRegistryKey.c)
 *     RtlDeleteRegistryValue @ 0x140873F40 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FADA0 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v13; // eax
  struct _KPRCB *v14; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v16; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  CurrentUserKeyPath = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v11 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v11
        || (Size = L->Size,
            AllocateEx = L->AllocateEx,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v11 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v11 = CurrentPrcb->Number;
      }
      Destination.Buffer = v11;
      if ( v11 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_13;
        if ( (_DWORD)v8 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          RtlFreeUnicodeString(&CurrentUserKeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_13:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v13 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v13 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v13;
            }
          }
        }
        v14 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v16 = v14->PPLookasideList[8].P;
        ++v16->TotalFrees;
        if ( LOWORD(v16->ListHead.Alignment) < v16->Depth
          || (++v16->FreeMisses,
              v16 = v14->PPLookasideList[8].L,
              ++v16->TotalFrees,
              LOWORD(v16->ListHead.Alignment) < v16->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v16->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v16->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v16->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
