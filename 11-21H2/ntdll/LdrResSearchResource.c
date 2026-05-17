/*
 * XREFs of LdrResSearchResource @ 0x180064700
 * Callers:
 *     RtlLoadString @ 0x180061E40 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180064670 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800EF1C0 (LdrResFindResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrAddLoadAsDataTable @ 0x180067BB0 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800EFF04 (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800EFF60 (LdrpResValidateFilePath.c)
 */

__int64 __fastcall LdrResSearchResource(
        HANDLE Handle,
        void *Src,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // ebx
  __int64 result; // rax
  bool v19; // zf
  int v20; // eax
  unsigned __int64 *v21; // rcx
  int v22; // r12d
  wchar_t *v23; // rbx
  int v24; // eax
  void *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // r14
  int v28; // [rsp+50h] [rbp-108h]
  unsigned int v29; // [rsp+54h] [rbp-104h] BYREF
  void *Srca; // [rsp+58h] [rbp-100h]
  wchar_t *String2; // [rsp+60h] [rbp-F8h]
  __int64 v32; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int64 v33[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+80h] [rbp-D8h]
  int v35; // [rsp+88h] [rbp-D0h]
  __int64 v36; // [rsp+90h] [rbp-C8h]
  __int64 v37; // [rsp+98h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-B8h] BYREF
  int v39; // [rsp+B0h] [rbp-A8h] BYREF
  const wchar_t *v40; // [rsp+B8h] [rbp-A0h]
  _BYTE v41[48]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v42[2]; // [rsp+F0h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+100h] [rbp-58h]

  v29 = a3;
  v10 = (unsigned __int64)Handle;
  Srca = Handle;
  v37 = a5;
  v32 = a6;
  v36 = a7;
  v34 = a8;
  String2 = 0LL;
  LODWORD(v33[0]) = 3538996;
  v33[1] = (unsigned __int64)L"LdrResSearchResource Enter";
  v39 = 3407922;
  v40 = L"LdrResSearchResource Exit";
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
    LdrpTraceLoadMUIDll(v33, *(unsigned __int8 *)v14);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( !v10 || !Src || a7 && !v34 )
    goto LABEL_103;
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF00000) != 0 )
    goto LABEL_19;
  if ( v29 < 3 && (v16 & 2) == 0 || v29 > 4 )
  {
    v17 = -1073741583;
    goto LABEL_104;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( v29 != 4 )
      return 3221225713LL;
  }
  else if ( v29 != 4 )
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
    v28 = v17;
    goto LABEL_105;
  }
LABEL_37:
  v35 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_19;
  v33[0] = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || (v21 = (unsigned __int64 *)v32) == 0LL || !*(_QWORD *)v32 )
    {
      v17 = -1073741811;
      v28 = -1073741811;
      goto LABEL_105;
    }
    v33[0] = *(_QWORD *)v32;
  }
  else
  {
    v21 = (unsigned __int64 *)v32;
  }
  if ( (v16 & 0x80000) != 0 )
  {
    if ( (v16 & 0x300) == 0 || !v21 || !*v21 )
    {
      v17 = -1073741811;
      v28 = -1073741811;
      goto LABEL_105;
    }
    v33[0] = *v21;
  }
  memmove(v42, Src, 8LL * v29);
  v22 = 3;
  if ( v29 <= 3 )
    v22 = v29;
  if ( v22 == 3 )
  {
    if ( (unsigned __int64)SourceString >= 0x10000 )
    {
      if ( *SourceString )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString.Length, &v29) )
          return 3221225485LL;
      }
      else
      {
        v29 = 0;
      }
      SourceString = (PCWSTR)(unsigned __int16)v29;
      goto LABEL_69;
    }
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      DestinationString = 0LL;
      if ( (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&DestinationString, 2, 1) >= 0 )
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
      v10 = (unsigned __int64)Srca;
LABEL_94:
      if ( v35 )
      {
        result = LdrpResValidateFileHandle(v10);
        if ( (int)result < 0 )
          return result;
        v26 = LdrpResSearchResourceHandle((HANDLE)v10, v37, v32, v36, v34);
      }
      else
      {
        v27 = v32;
        v17 = LdrpResSearchResourceMappedFile((_DWORD)String2, v33[0], v16, (unsigned int)v42, v22, v37, v32, v36, v34);
        v28 = v17;
        if ( v17 != -1073741686 )
          goto LABEL_105;
        if ( ((v42[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_105;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)String2, 62190, &v32, 0LL, 0x1000000) < 0 )
          goto LABEL_105;
        v33[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(v32, v33, v16, 0) < 0 )
          goto LABEL_105;
        v26 = LdrpResSearchResourceMappedFile(v32, v33[0], v16 | 0x1000000u, (unsigned int)v42, v22, v37, v27, v36, v34);
      }
      v17 = v26;
      v28 = v26;
LABEL_105:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v11 = (__int64)NtCurrentPeb()->SharedData + 555;
        v17 = v28;
      }
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v13 = (__int64)NtCurrentPeb()->SharedData + 554;
          v17 = v28;
        }
        LdrpTraceLoadMUIDll(&v39, *(unsigned __int8 *)v13);
      }
      return v17;
    }
    if ( (v16 & 0x1400) == 0x1400 )
    {
      v23 = (wchar_t *)Srca;
      result = LdrpResValidateFilePath(Srca);
    }
    else
    {
      v23 = (wchar_t *)Srca;
      if ( (v16 & 0x1000) == 0 )
      {
LABEL_84:
        v24 = LdrpResMapFile(v23);
        v17 = v24;
        v28 = v24;
        if ( v24 >= 0 )
        {
          v10 = (unsigned __int64)Srca;
          if ( (v16 & 0x400) != 0 )
            v25 = Srca;
          else
            v25 = 0LL;
          result = LdrAddLoadAsDataTable(String2, v25, 0LL);
          if ( (int)result < 0 )
            return result;
          goto LABEL_94;
        }
        if ( v24 != -1073741302 )
          goto LABEL_105;
        goto LABEL_93;
      }
      result = LdrpResValidateFileHandle(Srca);
    }
    if ( (int)result < 0 )
      return result;
    goto LABEL_84;
  }
  String2 = (wchar_t *)v10;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_76;
  if ( (v10 & 1) == 0 )
    String2 = (wchar_t *)(v10 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, v10 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v41, 48LL, 0LL), (int)result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize((__int64)String2, v33, v16, 0);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_94;
  }
  return result;
}
