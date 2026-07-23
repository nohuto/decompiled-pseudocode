/*
 * XREFs of SiGetEspFromFirmware @ 0x140A600E4
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140A5FCF0 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140229714 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x14041CD90 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14041D9F0 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x14041DA10 (ZwQueryBootOptions.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 *     SiGetDeviceNumberInformation @ 0x140A5F78C (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5FB64 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140A5FCD0 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x140A60560 (SiIsValidWindowsBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall SiGetEspFromFirmware(int a1, void *a2, ULONG a3)
{
  ULONG v3; // r14d
  void *v4; // r15
  ULONG *v5; // r12
  int *v6; // r13
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  NTSTATUS result; // eax
  signed int i; // ebx
  ULONG v11; // eax
  void *Pool2; // rax
  ULONG v13; // eax
  _BOOT_OPTIONS *v14; // rax
  ULONG v15; // r14d
  NTSTATUS v16; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v18; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v21; // r14d
  ULONG v22; // eax
  ULONG *v23; // rax
  ULONG v24; // ebx
  unsigned int *v25; // rax
  ULONG v26; // r8d
  unsigned int *v27; // r14
  int v28; // eax
  _WORD *v29; // rdx
  __int64 v30; // rax
  ULONG v31; // ecx
  unsigned int v32; // [rsp+30h] [rbp-28h] BYREF
  int v33; // [rsp+34h] [rbp-24h] BYREF
  PVOID v34; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v36[4]; // [rsp+48h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Count; // [rsp+B8h] [rbp+60h] BYREF

  BufferLength = a3;
  v3 = 0;
  Count = 0;
  v4 = 0LL;
  v32 = 0;
  v5 = 0LL;
  v33 = 0;
  v6 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)v36);
  if ( result >= 0 )
  {
    BufferLength = 0;
    i = ZwEnumerateBootEntries(0LL, &BufferLength);
    if ( i == -1073741789 )
    {
      while ( 1 )
      {
        v11 = BufferLength;
        if ( v3 >= BufferLength )
          break;
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          v11 = BufferLength;
        }
        Pool2 = (void *)ExAllocatePool2(256LL, v11, 1263556947LL);
        v4 = Pool2;
        if ( !Pool2 )
          goto LABEL_11;
        v3 = BufferLength;
        i = ZwEnumerateBootEntries(Pool2, &BufferLength);
        if ( i != -1073741789 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( i >= 0 )
      {
        if ( BufferLength )
        {
          v13 = 24;
          BufferLength = 24;
          while ( 1 )
          {
            if ( v6 )
            {
              ExFreePoolWithTag(v6, 0);
              v13 = BufferLength;
            }
            v14 = (_BOOT_OPTIONS *)ExAllocatePool2(256LL, v13, 1263556947LL);
            v6 = (int *)v14;
            if ( !v14 )
              break;
            v15 = BufferLength;
            v16 = ZwQueryBootOptions(v14, &BufferLength);
            i = v16;
            if ( v16 != -1073741789 )
            {
              if ( v16 < 0 )
                goto LABEL_46;
              EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
              v18 = EfiBootEntryById;
              if ( EfiBootEntryById
                && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
                    v7 = (wchar_t *)P,
                    i = NtFilePath,
                    NtFilePath >= 0) )
              {
                IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v18, P);
                v21 = 0;
                if ( IsValidWindowsBootEntry )
                  goto LABEL_46;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              else
              {
                v21 = 0;
              }
              for ( i = ZwQueryBootEntryOrder(0LL, &Count); i == -1073741789; i = ZwQueryBootEntryOrder(v23, &Count) )
              {
                v22 = Count;
                if ( v21 >= Count )
                  goto LABEL_46;
                if ( v5 )
                {
                  ExFreePoolWithTag(v5, 0);
                  v22 = Count;
                }
                v23 = (ULONG *)ExAllocatePool2(256LL, 4LL * v22, 1263556947LL);
                v5 = v23;
                if ( !v23 )
                  goto LABEL_11;
                v21 = Count;
              }
              if ( i )
                goto LABEL_46;
              if ( Count )
              {
                v24 = 0;
                do
                {
                  v25 = SiGetEfiBootEntryById((unsigned int *)v4, v5[v24]);
                  v27 = v25;
                  if ( v25 )
                  {
                    v28 = SiBootEntryGetNtFilePath((__int64)v25, (_FILE_PATH **)&v34);
                    v8 = (wchar_t *)v34;
                    if ( v28 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v27, v34) )
                    {
                      if ( v7 )
                      {
                        if ( wcsicmp(v7 + 6, v8 + 6) )
                        {
                          i = -1073740719;
                          goto LABEL_46;
                        }
                      }
                      else
                      {
                        v7 = v8;
                        v34 = 0LL;
                        v8 = 0LL;
                      }
                    }
                    if ( v8 )
                    {
                      ExFreePoolWithTag(v8, 0);
                      v8 = 0LL;
                      v34 = 0LL;
                    }
                    v26 = Count;
                  }
                  ++v24;
                }
                while ( v24 < v26 );
                i = v7 == 0LL ? 0xC0000225 : 0;
                goto LABEL_46;
              }
              goto LABEL_10;
            }
            v13 = BufferLength;
            if ( v15 >= BufferLength )
              goto LABEL_46;
          }
LABEL_11:
          i = -1073741801;
        }
        else
        {
LABEL_10:
          i = -1073741275;
        }
      }
    }
LABEL_46:
    BiReleasePrivilege(v36);
    if ( i >= 0 )
    {
      if ( v7 )
      {
        if ( a1 )
        {
          v29 = v7 + 6;
          v30 = -1LL;
          do
            ++v30;
          while ( v29[v30] );
          v31 = 2 * v30 + 2;
          BufferLength = v31;
          if ( v31 <= 0x6A )
            memmove(a2, v29, v31);
          else
            i = -1073741789;
        }
        else
        {
          i = SiGetDeviceNumberInformation(v7 + 6, &v32, &v33);
          if ( i >= 0 )
            i = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)a2, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v32, 0LL);
        }
      }
      else
      {
        i = -1073741823;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return i;
  }
  return result;
}
