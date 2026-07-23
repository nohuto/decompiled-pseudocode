/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1800E97D0
 * Callers:
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058F20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180059AD0 (RtlExpandEnvironmentStrings_U.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009F050 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800E9738 (RtlpEnsureTailingSlashAndAddToList.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap; // rax
  _QWORD *v2; // rbx
  HANDLE v3; // rdi
  NTSTATUS v4; // eax
  signed __int64 v5; // rcx
  HANDLE v6; // rcx
  ULONG v7; // edi
  ULONG i; // edx
  _UNICODE_STRING *p_Value; // rdx
  NTSTATUS v10; // eax
  signed __int64 v11; // rdi
  _QWORD *v12; // r8
  __int64 v13; // rax
  PVOID v14; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Value; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+78h] [rbp-90h] BYREF
  int v21; // [rsp+84h] [rbp-84h]
  _BYTE v22[4]; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+8Ch] [rbp-7Ch]
  int v24; // [rsp+90h] [rbp-78h]
  char v25; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v26[4]; // [rsp+298h] [rbp+190h] BYREF
  int v27; // [rsp+29Ch] [rbp+194h]
  char v28; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v29; // [rsp+4B8h] [rbp+3B0h] BYREF

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = 0LL;
  Value.Buffer = 0LL;
  ValueName.Buffer = 0LL;
  result = qword_180181820;
  *(_DWORD *)&Value.Length = 34078720;
  *(_DWORD *)&ValueName.Length = 0x2000000;
  if ( qword_180181820 == -1 )
  {
    ValueName.Buffer = (wchar_t *)&v25;
    Value.Buffer = (wchar_t *)&v28;
    Destination.Buffer = (wchar_t *)&v29;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      KeyHandle = qword_180185350;
      v3 = qword_180185350;
      if ( !qword_180185350 )
      {
        v4 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1801327A8);
        v5 = (signed __int64)KeyHandle;
        if ( v4 < 0 )
          v5 = -1LL;
        KeyHandle = (HANDLE)v5;
        v3 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&qword_180185350, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(KeyHandle);
          KeyHandle = v3;
        }
        else
        {
          v3 = KeyHandle;
        }
      }
      if ( v3 != (HANDLE)-1LL
        && NtQueryValueKey(
             v3,
             (PUNICODE_STRING)&stru_180132788,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             ResultLength) >= 0
        && ResultLength[0] == 16
        && v21 == 1
        || RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&stru_180132798, &Value) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)&Value) >= 0 )
      {
        v6 = KeyHandle;
        if ( KeyHandle != (HANDLE)-1LL )
        {
          v7 = 0;
          for ( i = 0; ; i = v7 )
          {
            v10 = ZwEnumerateValueKey(v6, i, KeyValueBasicInformation, v22, 0x20Cu, ResultLength);
            if ( v10 == -2147483622 )
              break;
            if ( v10 != -2147483643 )
            {
              if ( v10 < 0 )
                break;
              if ( v24 )
              {
                if ( (unsigned int)(v23 - 1) <= 1 )
                {
                  ValueName.Length = v24;
                  if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v26, 0x214u, ResultLength) >= 0
                    && (unsigned int)(v23 - 1) <= 1 )
                  {
                    p_Value = &Value;
                    Value.Length = 2 * ((ResultLength[0] - 12) >> 1) - 2;
                    if ( v27 == 2 )
                    {
                      if ( RtlExpandEnvironmentStrings_U(0LL, &Value, &Destination, 0LL) < 0 )
                        goto LABEL_29;
                      p_Value = &Destination;
                    }
                    RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)p_Value);
                  }
                }
              }
            }
LABEL_29:
            v6 = KeyHandle;
            ++v7;
          }
        }
      }
    }
    v11 = _InterlockedCompareExchange64(&qword_180181820, (signed __int64)v2, -1LL);
    if ( v11 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v2;
          if ( (_QWORD *)*v2 == v2 )
            break;
          if ( (_QWORD *)v12[1] != v2 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
            __fastfail(3u);
          v14 = LdrpHeap;
          *v2 = v13;
          *(_QWORD *)(v13 + 8) = v2;
          RtlFreeHeap(v14, 0, v12);
        }
        RtlFreeHeap(LdrpHeap, 0, v2);
      }
      return v11;
    }
  }
  return result;
}
