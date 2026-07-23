/*
 * XREFs of sub_14077FDA0 @ 0x14077FDA0
 * Callers:
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406DEF70 (RtlCheckRegistryKey.c)
 *     RtlDeleteRegistryValue @ 0x1406E8410 (RtlDeleteRegistryValue.c)
 *     sub_1406F1A04 @ 0x1406F1A04 (sub_1406F1A04.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_140836228 @ 0x140836228 (sub_140836228.c)
 *     sub_14083673C @ 0x14083673C (sub_14083673C.c)
 *     RtlCreateRegistryKey @ 0x1408609D0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_14077FDA0(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v10; // rdi
  wchar_t *v11; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v13; // eax
  struct _KPRCB *v14; // r8
  wchar_t *Buffer; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
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
      v10 = *((_QWORD *)CurrentPrcb + 272);
      ++*(_DWORD *)(v10 + 20);
      v11 = (wchar_t *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v10);
      if ( v11 )
        goto LABEL_6;
      ++*(_DWORD *)(v10 + 24);
      v17 = *((_QWORD *)CurrentPrcb + 273);
      ++*(_DWORD *)(v17 + 20);
      v11 = (wchar_t *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
      if ( v11
        || (v18 = *(unsigned int *)(v17 + 44),
            v19 = *(unsigned int *)(v17 + 36),
            ++*(_DWORD *)(v17 + 24),
            (v11 = (wchar_t *)sub_14042A5E0(v19, v18)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v11 = *((_DWORD *)CurrentPrcb + 9);
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
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)qword_140A39180[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, &word_140865B20);
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
        v16 = *((_QWORD *)v14 + 272);
        ++*(_DWORD *)(v16 + 28);
        if ( *(_WORD *)v16 < *(_WORD *)(v16 + 16)
          || (++*(_DWORD *)(v16 + 32),
              v16 = *((_QWORD *)v14 + 273),
              ++*(_DWORD *)(v16 + 28),
              *(_WORD *)v16 < *(_WORD *)(v16 + 16)) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++*(_DWORD *)(v16 + 32);
          sub_14042A5E0(Buffer, Buffer);
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
