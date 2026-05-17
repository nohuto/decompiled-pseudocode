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

__int64 __fastcall LdrResSearchResource(
        wchar_t *Handle,
        void *Src,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  wchar_t *v10; // r14
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ebx
  __int64 result; // rax
  bool v19; // zf
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // r9
  int v23; // r12d
  wchar_t *v24; // rbx
  int v25; // eax
  wchar_t *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r14
  int v29; // [rsp+50h] [rbp-108h]
  unsigned int v30; // [rsp+54h] [rbp-104h] BYREF
  wchar_t *String2; // [rsp+58h] [rbp-100h]
  wchar_t *v32; // [rsp+60h] [rbp-F8h]
  __int64 v33; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-D8h]
  int v36; // [rsp+88h] [rbp-D0h]
  __int64 v37; // [rsp+90h] [rbp-C8h]
  __int64 v38; // [rsp+98h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-B8h] BYREF
  int v40; // [rsp+B0h] [rbp-A8h] BYREF
  const wchar_t *v41; // [rsp+B8h] [rbp-A0h]
  _BYTE v42[48]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+F0h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+100h] [rbp-58h]

  v30 = a3;
  v10 = Handle;
  String2 = Handle;
  v38 = a5;
  v33 = a6;
  v37 = a7;
  v35 = a8;
  v32 = 0LL;
  LODWORD(v34[0]) = 3538996;
  v34[1] = L"LdrResSearchResource Enter";
  v40 = 3407922;
  v41 = L"LdrResSearchResource Exit";
  v11 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll(v34, *(unsigned __int8 *)v14);
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
  if ( v30 < 3 && (v16 & 2) == 0 || v30 > 4 )
  {
    v17 = -1073741583;
    goto LABEL_104;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( v30 != 4 )
      return 3221225713LL;
  }
  else if ( v30 != 4 )
  {
    goto LABEL_30;
  }
  if ( (v16 & 0x41) == 0 )
    return 3221225714LL;
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
  if ( (v16 & 0x8000) != 0 && (~v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_19;
  v34[0] = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || (v21 = (_QWORD *)v33) == 0LL || !*(_QWORD *)v33 )
    {
      v17 = -1073741811;
      v29 = -1073741811;
      goto LABEL_105;
    }
    v34[0] = *(_QWORD *)v33;
  }
  else
  {
    v21 = (_QWORD *)v33;
  }
  if ( (v16 & 0x80000) != 0 )
  {
    if ( (v16 & 0x300) == 0 || !v21 || !*v21 )
    {
      v17 = -1073741811;
      v29 = -1073741811;
      goto LABEL_105;
    }
    v34[0] = *v21;
  }
  memmove(v43, Src, 8LL * v30);
  v23 = 3;
  if ( v30 <= 3 )
    v23 = v30;
  if ( v23 == 3 )
  {
    if ( (unsigned __int64)SourceString >= 0x10000 )
    {
      if ( *SourceString )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
          return 3221225485LL;
      }
      else
      {
        v30 = 0;
      }
      SourceString = (PCWSTR)(unsigned __int16)v30;
      goto LABEL_69;
    }
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      DestinationString = 0LL;
      LOBYTE(v22) = 1;
      if ( (int)RtlLcidToLocaleName((unsigned int)SourceString, &DestinationString, 2LL, v22) >= 0 )
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
      v10 = String2;
LABEL_94:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle(v10);
        if ( (int)result < 0 )
          return result;
        v27 = LdrpResSearchResourceHandle(v10, v38, v33, v37, v35);
      }
      else
      {
        v28 = v33;
        v17 = LdrpResSearchResourceMappedFile((_DWORD)v32, v34[0], v16, (unsigned int)v43, v23, v38, v33, v37, v35);
        v29 = v17;
        if ( v17 != -1073741686 )
          goto LABEL_105;
        if ( ((v43[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_105;
        if ( (int)LdrLoadAlternateResourceModuleEx((_DWORD)v32, 62190, (unsigned int)&v33, 0, 0x1000000) < 0 )
          goto LABEL_105;
        v34[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(v33, v34, v16, 0LL) < 0 )
          goto LABEL_105;
        v27 = LdrpResSearchResourceMappedFile(v33, v34[0], v16 | 0x1000000, (unsigned int)v43, v23, v38, v28, v37, v35);
      }
      v17 = v27;
      v29 = v27;
LABEL_105:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v11 = (__int64)NtCurrentPeb()->SharedData + 555;
        v17 = v29;
      }
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
      v24 = String2;
      result = LdrpResValidateFilePath(String2);
    }
    else
    {
      v24 = String2;
      if ( (v16 & 0x1000) == 0 )
      {
LABEL_84:
        v25 = LdrpResMapFile(v24);
        v17 = v25;
        v29 = v25;
        if ( v25 >= 0 )
        {
          v10 = String2;
          if ( (v16 & 0x400) != 0 )
            v26 = String2;
          else
            v26 = 0LL;
          result = LdrAddLoadAsDataTable(v32, v26, 0LL);
          if ( (int)result < 0 )
            return result;
          goto LABEL_94;
        }
        if ( v25 != -1073741302 )
          goto LABEL_105;
        goto LABEL_93;
      }
      result = LdrpResValidateFileHandle(String2);
    }
    if ( (int)result < 0 )
      return result;
    goto LABEL_84;
  }
  v32 = v10;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_76;
  if ( ((unsigned __int8)v10 & 1) == 0 )
    v32 = (wchar_t *)((unsigned __int64)v10 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v42, 48LL, 0LL),
        (int)result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize(v32, v34, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_94;
  }
  return result;
}
