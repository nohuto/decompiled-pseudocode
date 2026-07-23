/*
 * XREFs of sub_1406DE494 @ 0x1406DE494
 * Callers:
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14067A3F4 @ 0x14067A3F4 (sub_14067A3F4.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     sub_1406DE9B8 @ 0x1406DE9B8 (sub_1406DE9B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_1406DE494(__int64 a1, UNICODE_STRING *a2, void *a3, _DWORD *a4, char a5)
{
  NTSTATUS v6; // ebx
  NTSTATUS result; // eax
  PVOID v9; // r14
  unsigned int v10; // eax
  ULONG v11; // r13d
  unsigned __int16 *Pool2; // rdi
  ULONG v13; // r12d
  _DWORD *v14; // rcx
  PVOID v15; // r8
  _DWORD *v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // rax
  NTSTATUS v19; // eax
  int Length; // [rsp+20h] [rbp-A1h]
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-31h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  UNICODE_STRING *v27; // [rsp+A8h] [rbp-19h]
  PVOID v28[2]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID v29; // [rsp+C0h] [rbp-1h]

  v27 = a2;
  KeyHandle = a3;
  v29 = 0LL;
  v6 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  ResultLength = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v28 = 0LL;
  result = sub_14067A3F4(a3, P);
  if ( result >= 0 )
  {
    v9 = P[0];
    v10 = *((_DWORD *)P[0] + 6);
    v11 = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      return -1073741675;
    }
    else
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 1112239945LL);
      ExFreePoolWithTag(v9, 0);
      if ( Pool2 )
      {
        v13 = 0;
        do
        {
          v14 = *(_DWORD **)(a1 + 8);
          if ( v14 && *v14 == *a4 )
            break;
          v6 = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, Pool2, v11, &ResultLength);
          if ( v6 < 0 )
            break;
          if ( !a5
            || !wcsncmp(Pool2 + 8, L"MultifunctionAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1) )
          {
            Source.Buffer = Pool2 + 8;
            Source.Length = Pool2[6];
            Source.MaximumLength = Pool2[6];
            LOBYTE(Length) = 0;
            if ( (int)sub_1406DE960(&Handle, KeyHandle, &Source, 131097LL, Length) >= 0 )
            {
              Destination = *v27;
              RtlAppendUnicodeToString(&Destination, &word_140865B20);
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_27;
              v6 = sub_1406DE9B8(Handle);
              if ( v6 >= 0 )
              {
                v15 = v28[1];
                if ( v28[1] )
                {
                  if ( *((_DWORD *)v28[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v28[1] + *((unsigned int *)v28[1] + 2)) == **(_DWORD **)a1 )
                    {
                      v17 = (unsigned int)(*a4 + 1);
                      *a4 = v17;
                      v18 = *(_DWORD **)(a1 + 8);
                      if ( !v18 || *v18 == (_DWORD)v17 )
                      {
                        if ( *(_QWORD *)(a1 + 16) )
                        {
                          *(UNICODE_STRING *)P = Destination;
                          v19 = sub_1406DE008(a1, P, (__int64)v15, v17, (__int64)v28);
                        }
                        else
                        {
                          v19 = sub_14042A5E0(*(_QWORD *)(a1 + 56), &Destination);
                        }
                        v15 = v28[1];
                        v6 = v19;
                      }
                    }
                  }
                }
                if ( v28[0] )
                {
                  ExFreePoolWithTag(v28[0], 0);
                  v15 = v28[1];
                  v28[0] = 0LL;
                }
                if ( v15 )
                {
                  ExFreePoolWithTag(v15, 0);
                  v28[1] = 0LL;
                }
                if ( v29 )
                {
                  ExFreePoolWithTag(v29, 0);
                  v29 = 0LL;
                }
              }
              v16 = *(_DWORD **)(a1 + 8);
              if ( !v16 || *v16 != *a4 )
              {
LABEL_27:
                *(UNICODE_STRING *)P = Destination;
                v6 = sub_1406DE494(a1, (unsigned int)P, (_DWORD)Handle, (_DWORD)a4, a5 == 0);
                if ( v6 == -2147483622 )
                  v6 = 0;
              }
              ZwClose(Handle);
              Handle = 0LL;
            }
          }
          ++v13;
        }
        while ( v6 >= 0 );
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
