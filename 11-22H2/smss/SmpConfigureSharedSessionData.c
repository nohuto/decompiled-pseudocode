/*
 * XREFs of SmpConfigureSharedSessionData @ 0x140008400
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpCopyListToSharedSection @ 0x140008A58 (SmpCopyListToSharedSection.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009B40 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140014B37 (memcpy_0.c)
 */

__int64 SmpConfigureSharedSessionData()
{
  __int64 result; // rax
  PVOID *v1; // rbx
  PVOID *v2; // rax
  PVOID *v3; // rcx
  PVOID **v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  NTSTATUS v9; // edx
  signed __int32 v10; // ecx
  __int64 v11; // rax
  signed __int32 v12; // ecx
  char *v13; // rbx
  __int64 Length; // rax
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // rdx
  char *v19; // rax
  signed __int32 v20; // ecx
  signed __int32 v21; // ecx
  char *v22; // [rsp+58h] [rbp-B0h] BYREF
  char *v23; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall *v27)(wchar_t *, int, __int64, int, int, _DWORD *); // [rsp+A8h] [rbp-60h] BYREF
  int v28; // [rsp+B0h] [rbp-58h]
  const wchar_t *v29; // [rsp+B8h] [rbp-50h]
  int *v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int v33; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall *v34)(const wchar_t *, __int64, const WCHAR *, __int64, __int64, _DWORD *); // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E8h] [rbp-20h]
  const wchar_t *v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  int v40; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v41)(const wchar_t *, __int64, const WCHAR *, __int64, __int64, _DWORD *); // [rsp+118h] [rbp+10h]
  int v42; // [rsp+120h] [rbp+18h]
  const wchar_t *v43; // [rsp+128h] [rbp+20h]
  int *v44; // [rsp+130h] [rbp+28h]
  int v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  int v47; // [rsp+148h] [rbp+40h]
  __int64 (__fastcall *v48)(int, int, int, int, int, __int64); // [rsp+150h] [rbp+48h]
  int v49; // [rsp+158h] [rbp+50h]
  const wchar_t *v50; // [rsp+160h] [rbp+58h]
  int *v51; // [rsp+168h] [rbp+60h]
  int v52; // [rsp+170h] [rbp+68h]
  __int64 v53; // [rsp+178h] [rbp+70h]
  int v54; // [rsp+180h] [rbp+78h]
  __int64 v55; // [rsp+188h] [rbp+80h]
  int v56; // [rsp+190h] [rbp+88h]
  __int128 v57; // [rsp+198h] [rbp+90h]
  int v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  int v60; // [rsp+1B8h] [rbp+B0h]

  v28 = 17;
  v31 = 0;
  v30 = &dword_14002C628;
  v34 = SmpBuildSubSystemLists;
  v27 = SmpConfigureSubSystems;
  v35 = 16;
  v29 = L"SubSystems";
  v37 = &dword_14002C628;
  v36 = L"Required";
  v41 = SmpBuildSubSystemLists;
  v43 = L"Optional";
  v42 = 16;
  v48 = SmpConfigureExecute;
  v44 = &dword_14002C628;
  v50 = L"Execute";
  v51 = &dword_14002C628;
  qword_14002C648 = (__int64)&qword_14002C640;
  qword_14002C640 = (__int64)&qword_14002C640;
  v32 = 0LL;
  v33 = 0;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  v49 = 2;
  v52 = 0;
  v53 = 0LL;
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0;
  qword_14002C638 = (__int64)&BaseAddress;
  BaseAddress = &BaseAddress;
  qword_14002C658 = (__int64)&qword_14002C650;
  qword_14002C650 = (__int64)&qword_14002C650;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v27, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v1 = (PVOID *)BaseAddress;
    while ( v1 != &BaseAddress )
    {
      v2 = (PVOID *)*v1;
      v3 = v1;
      v1 = v2;
      if ( v2[1] != v3 )
        goto LABEL_32;
      v4 = (PVOID **)v3[1];
      if ( *v4 != v3 )
        goto LABEL_32;
      *v4 = v2;
      v2[1] = v4;
      SmpDeallocSavedRegistryEntry(v3);
    }
    if ( (__int64 *)qword_14002C650 == &qword_14002C650 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = qword_14002C658;
      v6 = *(_QWORD **)(qword_14002C658 + 8);
      if ( *(__int64 **)qword_14002C658 != &qword_14002C650 || *v6 != qword_14002C658 )
LABEL_32:
        __fastfail(3u);
      qword_14002C658 = *(_QWORD *)(qword_14002C658 + 8);
      *v6 = &qword_14002C650;
    }
    SmpInitExecuteCmd = v5;
    v7 = (16LL * (unsigned int)dword_14002C628 + 105) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 )
      v8 = *(unsigned __int16 *)(v5 + 16);
    else
      v8 = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    MaximumSize.QuadPart = v7
                         + (unsigned int)dword_14002C62C
                         + v8
                         + SmpS0InitCmd.Length
                         + SmpDefaultLibPath.Length
                         + 6LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
    if ( v9 >= 0 )
    {
      ViewSize = 0LL;
      v9 = NtMapViewOfSection(
             SmpSharedSection,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &SmpMappedView,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             4u);
      if ( v9 >= 0 )
      {
        *(_DWORD *)SmpMappedView = 0;
        if ( SmpS0CommandOverride )
          *(_DWORD *)SmpMappedView = 1;
        v13 = (char *)SmpMappedView + v7;
        *((_QWORD *)SmpMappedView + 1) = v13 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
        memcpy_0(v13, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
        Length = SmpDefaultLibPath.Length;
        *(_WORD *)&v13[SmpDefaultLibPath.Length] = 0;
        v15 = &v13[Length + 2];
        *((_QWORD *)SmpMappedView + 3) = v15 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
        memcpy_0(v15, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
        v16 = SmpS0InitCmd.Length;
        *(_WORD *)&v15[SmpS0InitCmd.Length] = 0;
        v17 = &v15[v16 + 2];
        *((_QWORD *)SmpMappedView + 5) = v17 - (_BYTE *)SmpMappedView;
        v18 = SmpInitExecuteCmd;
        if ( SmpInitExecuteCmd && *(_QWORD *)(SmpInitExecuteCmd + 24) )
        {
          *((_WORD *)SmpMappedView + 24) = *(_WORD *)(SmpInitExecuteCmd + 16);
          memcpy_0(v17, *(const void **)(v18 + 24), *(unsigned __int16 *)(v18 + 16));
          v19 = &v17[*(unsigned __int16 *)(SmpInitExecuteCmd + 16)];
          v17 = v19;
        }
        else
        {
          *((_WORD *)SmpMappedView + 24) = 0;
          v19 = v17;
        }
        *(_WORD *)v17 = 0;
        v22 = v19 + 2;
        v23 = (char *)SmpMappedView + 104;
        SmpCopyListToSharedSection((unsigned int)&qword_14002C640, 0, 1, 0, (__int64)&v23, (__int64)&v22);
        SmpCopyListToSharedSection((unsigned int)&SmpSubSystemsRequired, 1, 0, 1, (__int64)&v23, (__int64)&v22);
        SmpCopyListToSharedSection((unsigned int)&qword_14002C650, 0, 1, 2, (__int64)&v23, (__int64)&v22);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
        v9 = NtDuplicateObject(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               SmpSharedSection,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &SmpSharedSection,
               4u,
               2u,
               9u);
        if ( v9 >= 0 )
        {
          ViewSize = 0LL;
          SmpMappedView = 0LL;
          v9 = NtMapViewOfSection(
                 SmpSharedSection,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &SmpMappedView,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 2u);
          if ( v9 >= 0 )
            return 0LL;
          v21 = _InterlockedIncrement(SmpGlobalLog) % 64;
          v11 = 2LL * v21;
          SmpGlobalLog[4 * v21 + 2] = 8135;
        }
        else
        {
          v20 = _InterlockedIncrement(SmpGlobalLog) % 64;
          v11 = 2LL * v20;
          SmpGlobalLog[4 * v20 + 2] = 8109;
        }
      }
      else
      {
        v12 = _InterlockedIncrement(SmpGlobalLog) % 64;
        v11 = 2LL * v12;
        SmpGlobalLog[4 * v12 + 2] = 8004;
      }
    }
    else
    {
      v10 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v11 = 2LL * v10;
      SmpGlobalLog[4 * v10 + 2] = 7974;
    }
    SmpGlobalLog[2 * v11 + 3] = v9;
    *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = 0LL;
    return (unsigned int)v9;
  }
  return result;
}
