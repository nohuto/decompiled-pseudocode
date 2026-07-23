/*
 * XREFs of LdrResSearchResource @ 0x180005220
 * Callers:
 *     RtlLoadString @ 0x180003040 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180005190 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800EECD0 (LdrResFindResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF514 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800EFC5C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800EFCB8 (LdrpResValidateFilePath.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        unsigned __int64 DosFileName,
        void *Src,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // ecx
  unsigned int v15; // esi
  bool v16; // zf
  int v17; // ebx
  int v18; // r13d
  NTSTATUS result; // eax
  PVOID v20; // r12
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  WCHAR *v26; // r9
  WCHAR *v27; // rdx
  int v28; // eax
  int MappingSize; // eax
  int v30; // [rsp+50h] [rbp-108h]
  PVOID DllHandle; // [rsp+58h] [rbp-100h] BYREF
  SIZE_T Size[2]; // [rsp+60h] [rbp-F8h] BYREF
  DWORD Lcid; // [rsp+70h] [rbp-E8h] BYREF
  PVOID ResourceDllBase; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+80h] [rbp-D8h]
  int v36; // [rsp+88h] [rbp-D0h]
  __int64 v37; // [rsp+90h] [rbp-C8h]
  __int64 v38; // [rsp+98h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-B8h] BYREF
  int v40; // [rsp+B0h] [rbp-A8h] BYREF
  const wchar_t *v41; // [rsp+B8h] [rbp-A0h]
  _BYTE MemoryInformation[48]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+F0h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+100h] [rbp-58h]

  v9 = a3;
  v38 = a5;
  v37 = a6;
  ResourceDllBase = a7;
  v35 = a8;
  DllHandle = 0LL;
  LODWORD(Size[0]) = 3538996;
  Size[1] = (SIZE_T)L"LdrResSearchResource Enter";
  v40 = 3407922;
  v41 = L"LdrResSearchResource Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    LdrpTraceLoadMUIDll(Size, *(unsigned __int8 *)v23);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( !DosFileName || !Src || a7 && !v35 )
    goto LABEL_56;
  v14 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v14 = a4;
  v15 = v14 | 0x1000;
  if ( (v14 & 0x2000) != 0 )
    v15 = v14;
  if ( (v15 & 0xFFF80000) != 0 )
    goto LABEL_23;
  if ( (unsigned int)v9 < 3 && (v15 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v17 = -1073741583;
    goto LABEL_24;
  }
  if ( (v15 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v15 & 0x41) == 0 )
    return -1073741582;
LABEL_18:
  if ( (v15 & 0x100) != 0 )
  {
    v16 = (v15 & 0xE00) == 0;
    goto LABEL_20;
  }
  v24 = v15 & 0xC00;
  if ( (v15 & 0x200) != 0 )
  {
    v16 = v24 == 0;
LABEL_20:
    if ( v16 )
      goto LABEL_21;
LABEL_23:
    v17 = -1073741582;
LABEL_24:
    v30 = v17;
    goto LABEL_36;
  }
  if ( v24 == 3072 )
    goto LABEL_23;
LABEL_21:
  v36 = v15 & 0x8000;
  if ( (v15 & 0x8000) != 0 && (~(_WORD)v15 & 0x810) != 0 || (v15 & 0x3000) == 0x3000 || (v15 & 0x18) == 0x18 )
    goto LABEL_23;
  Size[0] = 0LL;
  if ( (v15 & 0x20000) != 0 )
  {
    if ( (v15 & 0x400) == 0 || !v37 || !*(_QWORD *)v37 )
    {
      v17 = -1073741811;
      v30 = -1073741811;
      v22 = 2147353477LL;
      goto LABEL_37;
    }
    Size[0] = *(_QWORD *)v37;
  }
  memmove(v43, Src, 8 * v9);
  v18 = 3;
  if ( (unsigned int)v9 <= 3 )
    v18 = v9;
  if ( v18 == 3 )
  {
    if ( (unsigned __int64)SourceString >= 0x10000 )
    {
      if ( *SourceString )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return -1073741811;
      }
      else
      {
        Lcid = 0;
      }
      SourceString = (PCWSTR)(unsigned __int16)Lcid;
    }
    else if ( SourceString )
    {
      if ( ((unsigned __int16)SourceString & 0x3FF) == 0
        || SourceString == (PCWSTR)127
        || (DestinationString = 0LL, RtlLcidToLocaleName((LCID)SourceString, &DestinationString, 2u, 1u) < 0) )
      {
LABEL_56:
        v17 = -1073741811;
        goto LABEL_24;
      }
      if ( DestinationString.Buffer )
        RtlFreeUnicodeString(&DestinationString);
    }
  }
  if ( (v15 & 0x300) == 0 )
  {
    if ( (v15 & 0x400) == 0 && ((v15 & 0x800) == 0 || (~v15 & 0x8000) == 0) )
    {
LABEL_33:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle(DosFileName);
        if ( result < 0 )
          return result;
        v28 = LdrpResSearchResourceHandle((HANDLE)DosFileName, v38, v37, (__int64)ResourceDllBase, v35);
      }
      else
      {
        v20 = ResourceDllBase;
        v21 = v37;
        v17 = LdrpResSearchResourceMappedFile(
                (_DWORD)DllHandle,
                Size[0],
                v15,
                (unsigned int)v43,
                v18,
                v38,
                v37,
                (__int64)ResourceDllBase,
                v35);
        v30 = v17;
        if ( v17 != -1073741686 )
          goto LABEL_36;
        if ( ((v43[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_36;
        if ( LdrLoadAlternateResourceModuleEx(DllHandle, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_36;
        Size[0] = 0LL;
        MappingSize = LdrpResGetMappingSize(ResourceDllBase, Size, v15, 0LL);
        if ( MappingSize < 0 )
          goto LABEL_36;
        v28 = LdrpResSearchResourceMappedFile(
                (_DWORD)ResourceDllBase,
                Size[0],
                v15 | 0x1000000,
                (unsigned int)v43,
                v18,
                v38,
                v21,
                (__int64)v20,
                v35);
      }
      v17 = v28;
      v30 = v28;
LABEL_36:
      v22 = 2147353477LL;
LABEL_37:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v22 = (__int64)NtCurrentPeb()->SharedData + 555;
        v17 = v30;
      }
      if ( (*(_BYTE *)v22 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v13 = (__int64)NtCurrentPeb()->SharedData + 554;
          v17 = v30;
        }
        LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v13);
      }
      return v17;
    }
    if ( (v15 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath((PCWSTR)DosFileName);
    }
    else
    {
      if ( (v15 & 0x1000) == 0 )
        goto LABEL_96;
      result = LdrpResValidateFileHandle(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_96:
    v25 = LdrpResMapFile((PCWSTR)DosFileName, &DllHandle, Size);
    v17 = v25;
    v30 = v25;
    if ( v25 < 0 )
    {
      if ( v25 != -1073741302 )
        goto LABEL_36;
    }
    else
    {
      if ( (v15 & 0x400) != 0 )
      {
        v26 = 0LL;
        v27 = (WCHAR *)DosFileName;
      }
      else
      {
        v26 = (WCHAR *)DosFileName;
        v27 = 0LL;
      }
      result = LdrAddLoadAsDataTable(DllHandle, v27, Size[0], v26, 0LL);
      if ( result < 0 )
        return result;
    }
    goto LABEL_33;
  }
  DllHandle = (PVOID)DosFileName;
  if ( (v15 & 0x200) == 0 )
    goto LABEL_85;
  if ( (DosFileName & 1) == 0 )
    DllHandle = (PVOID)(DosFileName | 1);
  if ( (v15 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_85:
    result = LdrpResGetMappingSize(DllHandle, Size, v15, 0LL);
    if ( result >= 0 || (v15 & 0x1000) == 0 )
      goto LABEL_33;
  }
  return result;
}
