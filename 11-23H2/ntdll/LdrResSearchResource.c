/*
 * XREFs of LdrResSearchResource @ 0x180005220
 * Callers:
 *     RtlLoadString @ 0x180003070 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180005190 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800F00E0 (LdrResFindResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800F106C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800F10C8 (LdrpResValidateFilePath.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        WCHAR *Handle,
        void *Src,
        DWORD a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  PWSTR v10; // r14
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // ecx
  unsigned int v16; // esi
  int v17; // ebx
  NTSTATUS result; // eax
  bool v19; // zf
  int v20; // eax
  SIZE_T *v21; // rcx
  DWORD v22; // r12d
  const WCHAR *v23; // rbx
  int v24; // eax
  PWSTR v25; // r9
  WCHAR *v26; // rdx
  int v27; // eax
  PVOID v28; // r14
  int v29; // [rsp+50h] [rbp-108h]
  DWORD Lcid; // [rsp+54h] [rbp-104h] BYREF
  PWSTR FilePath; // [rsp+58h] [rbp-100h]
  PVOID Module; // [rsp+60h] [rbp-F8h] BYREF
  PVOID ResourceDllBase; // [rsp+68h] [rbp-F0h] BYREF
  SIZE_T Size[2]; // [rsp+70h] [rbp-E8h] BYREF
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

  Lcid = a3;
  v10 = Handle;
  FilePath = Handle;
  v38 = a5;
  ResourceDllBase = a6;
  v37 = a7;
  v35 = a8;
  Module = 0LL;
  LODWORD(Size[0]) = 3538996;
  Size[1] = (SIZE_T)L"LdrResSearchResource Enter";
  v40 = 3407922;
  v41 = L"LdrResSearchResource Exit";
  v11 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll(Size, *(unsigned __int8 *)v14);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( !v10 || !Src || a7 && !v35 )
    goto LABEL_103;
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF00000) != 0 )
    goto LABEL_19;
  if ( Lcid < 3 && (v16 & 2) == 0 || Lcid > 4 )
  {
    v17 = -1073741583;
    goto LABEL_104;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( Lcid != 4 )
      return -1073741583;
  }
  else if ( Lcid != 4 )
  {
    goto LABEL_30;
  }
  if ( (v16 & 0x41) == 0 )
    return -1073741582;
LABEL_30:
  if ( (v16 & 0x100) != 0 )
  {
    v19 = (v16 & 0xE00) == 0;
    goto LABEL_32;
  }
  v20 = v16 & 0xC00;
  if ( (v16 & 0x200) != 0 )
  {
    v19 = v20 == 0;
LABEL_32:
    if ( !v19 )
      goto LABEL_19;
    goto LABEL_37;
  }
  if ( v20 == 3072 )
  {
LABEL_19:
    v17 = -1073741582;
LABEL_104:
    v29 = v17;
    goto LABEL_105;
  }
LABEL_37:
  v36 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_19;
  Size[0] = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || (v21 = (SIZE_T *)ResourceDllBase) == 0LL || !*(_QWORD *)ResourceDllBase )
    {
      v17 = -1073741811;
      v29 = -1073741811;
      goto LABEL_105;
    }
    Size[0] = *(_QWORD *)ResourceDllBase;
  }
  else
  {
    v21 = (SIZE_T *)ResourceDllBase;
  }
  if ( (v16 & 0x80000) != 0 )
  {
    if ( (v16 & 0x300) == 0 || !v21 || !*v21 )
    {
      v17 = -1073741811;
      v29 = -1073741811;
      goto LABEL_105;
    }
    Size[0] = *v21;
  }
  memmove(v43, Src, 8LL * Lcid);
  v22 = 3;
  if ( Lcid <= 3 )
    v22 = Lcid;
  if ( v22 == 3 )
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
      goto LABEL_69;
    }
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      DestinationString = 0LL;
      if ( RtlLcidToLocaleName((LCID)SourceString, &DestinationString, 2u, 1u) >= 0 )
      {
        if ( DestinationString.Buffer )
          RtlFreeUnicodeString(&DestinationString);
        goto LABEL_69;
      }
    }
LABEL_103:
    v17 = -1073741811;
    goto LABEL_104;
  }
LABEL_69:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
    {
LABEL_93:
      v10 = FilePath;
LABEL_94:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle(v10);
        if ( result < 0 )
          return result;
        v27 = LdrpResSearchResourceHandle(v10, v38, (__int64)ResourceDllBase, v37, v35);
      }
      else
      {
        v28 = ResourceDllBase;
        v17 = LdrpResSearchResourceMappedFile(
                (_DWORD)Module,
                Size[0],
                v16,
                (unsigned int)v43,
                v22,
                v38,
                (__int64)ResourceDllBase,
                v37,
                v35);
        v29 = v17;
        if ( v17 != -1073741686 )
          goto LABEL_105;
        if ( ((v43[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_105;
        if ( LdrLoadAlternateResourceModuleEx(Module, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_105;
        Size[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, Size, v16, 0LL) < 0 )
          goto LABEL_105;
        v27 = LdrpResSearchResourceMappedFile(
                (_DWORD)ResourceDllBase,
                Size[0],
                v16 | 0x1000000,
                (unsigned int)v43,
                v22,
                v38,
                (__int64)v28,
                v37,
                v35);
      }
      v17 = v27;
      v29 = v27;
LABEL_105:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v11 = (__int64)NtCurrentPeb()->SharedData + 555;
        v17 = v29;
      }
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v13 = (__int64)NtCurrentPeb()->SharedData + 554;
          v17 = v29;
        }
        LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v13);
      }
      return v17;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      v23 = FilePath;
      result = LdrpResValidateFilePath(FilePath);
    }
    else
    {
      v23 = FilePath;
      if ( (v16 & 0x1000) == 0 )
      {
LABEL_84:
        v24 = LdrpResMapFile(v23, &Module, Size);
        v17 = v24;
        v29 = v24;
        if ( v24 >= 0 )
        {
          v10 = FilePath;
          if ( (v16 & 0x400) != 0 )
          {
            v25 = 0LL;
            v26 = FilePath;
          }
          else
          {
            v25 = FilePath;
            v26 = 0LL;
          }
          result = LdrAddLoadAsDataTable(Module, v26, Size[0], v25, 0LL);
          if ( result < 0 )
            return result;
          goto LABEL_94;
        }
        if ( v24 != -1073741302 )
          goto LABEL_105;
        goto LABEL_93;
      }
      result = LdrpResValidateFileHandle(FilePath);
    }
    if ( result < 0 )
      return result;
    goto LABEL_84;
  }
  Module = v10;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_76;
  if ( ((unsigned __int8)v10 & 1) == 0 )
    Module = (PVOID)((unsigned __int64)v10 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize(Module, Size, v16, 0LL);
    if ( result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_94;
  }
  return result;
}
