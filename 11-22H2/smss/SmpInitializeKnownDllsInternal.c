/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x140008F50
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140008C00 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpRandomizeDllList @ 0x140009760 (SmpRandomizeDllList.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x14001AB9C (SmpTerminate.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4, char a5)
{
  int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rbx
  const UNICODE_STRING *v11; // r15
  __int64 v12; // rbx
  BOOL v13; // edx
  struct _UNICODE_STRING *v14; // r14
  PWSTR Buffer; // rax
  __m128i *Heap; // rbx
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // di
  int v20; // eax
  int v21; // ebx
  PVOID *v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // rbx
  PVOID *v25; // r12
  PVOID *v26; // rdi
  __int16 v27; // cx
  int v28; // eax
  _QWORD *v29; // rcx
  PVOID *v30; // r8
  __int64 v31; // r9
  PVOID *v32; // rcx
  PVOID **v33; // rax
  PVOID v34; // r8
  __int64 v35; // r8
  __int64 v36; // rax
  char v38[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ObjectInformationLength; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v41; // [rsp+3Ch] [rbp-C4h]
  PVOID v42; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v43; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h]
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  int ObjectInformation; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-28h]
  struct _UNICODE_STRING *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  _WORD *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  _QWORD v60[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v62[2]; // [rsp+120h] [rbp+20h] BYREF
  int (__fastcall *v63)(__int16 **, const char *); // [rsp+128h] [rbp+28h]
  _QWORD *v64; // [rsp+130h] [rbp+30h]
  HANDLE Handle; // [rsp+138h] [rbp+38h]
  int v66; // [rsp+140h] [rbp+40h]
  int *v67; // [rsp+148h] [rbp+48h]
  int v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+154h] [rbp+54h]
  __int16 v70; // [rsp+158h] [rbp+58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+170h] [rbp+70h] BYREF

  v45 = a3;
  v50 = a1;
  v46 = a4;
  v41 = 0;
  BaseAddress = 0LL;
  v39 = 0;
  v7 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v39);
  if ( v7 >= 0 )
  {
    ObjectAttributes.Length = 48;
    v60[1] = &v42;
    ObjectAttributes.RootDirectory = a2;
    v64 = v60;
    v63 = SmpProcessModuleImports;
    v58 = SmpKnownDllSecurityDescriptor;
    v67 = &v54;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v62[0] = 64;
    v62[1] = 7;
    v54 = 48;
    v55 = a1;
    v57 = 80;
    v56 = 0LL;
    v59 = 0LL;
    v66 = 983071;
    v68 = 16;
    while ( 1 )
    {
      v43 = &v42;
      v9 = 0;
      v42 = &v42;
      if ( v39 )
        break;
LABEL_49:
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v22 = (PVOID *)v42;
      BaseAddress = 0LL;
      v23 = 0;
      v39 = 0;
      if ( v42 == &v42 )
        return 0;
      do
      {
        v24 = SmpKnownDllsList;
        v25 = v22;
        v26 = v22;
        v22 = (PVOID *)*v22;
        if ( (__int64 *)SmpKnownDllsList == &SmpKnownDllsList )
        {
LABEL_57:
          v39 = ++v23;
        }
        else
        {
          while ( 1 )
          {
            String1 = *(UNICODE_STRING *)(v24 + 16);
            if ( *(_WORD *)(v24 + 16) )
            {
              v27 = **(_WORD **)(v24 + 24);
              if ( v27 == 95 || v27 == 42 )
              {
                ++String1.Buffer;
                String1.Length -= 2;
                String1.MaximumLength -= 2;
              }
            }
            if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)v26 + 1, 1u) )
              break;
            v24 = *(_QWORD *)v24;
            if ( (__int64 *)v24 == &SmpKnownDllsList )
              goto LABEL_57;
          }
          v32 = (PVOID *)*v25;
          v33 = (PVOID **)v26[1];
          if ( *((PVOID **)*v25 + 1) != v26 || *v33 != v26 )
            goto LABEL_74;
          *v33 = v32;
          v32[1] = v33;
          RtlFreeUnicodeString((PUNICODE_STRING)v26 + 2);
          v34 = v26[6];
          if ( v34 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v34);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v26);
          v23 = v39;
        }
      }
      while ( v22 != &v42 );
      if ( !v23 )
        return 0;
      v28 = SmpRandomizeDllList(&v42, &BaseAddress, &v39);
      v29 = v42;
      v7 = v28;
      v30 = v43;
      if ( *((PVOID **)v42 + 1) != &v42
        || *v43 != &v42
        || (*v43 = v42, v29[1] = v30, v31 = qword_14002BB98, *(__int64 **)(SmpKnownDllsList + 8) != &SmpKnownDllsList)
        || *(__int64 **)qword_14002BB98 != &SmpKnownDllsList
        || *(_QWORD **)(*v29 + 8LL) != v29
        || *v30 != v29 )
      {
LABEL_74:
        __fastfail(3u);
      }
      *(_QWORD *)qword_14002BB98 = v29;
      qword_14002BB98 = v29[1];
      *(_QWORD *)v29[1] = &SmpKnownDllsList;
      v29[1] = v31;
      if ( v28 < 0 )
      {
        v35 = v50;
        v36 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v36 + 2] = 5092;
        SmpGlobalLog[2 * v36 + 3] = v7;
        *(_QWORD *)&SmpGlobalLog[2 * v36 + 4] = v35;
        return (unsigned int)v7;
      }
    }
    while ( 1 )
    {
      v10 = SmpExcludeKnownDllsList;
      v11 = (const UNICODE_STRING *)*((_QWORD *)BaseAddress + 2 * v9 + 1);
      if ( (__int64 *)SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)(v10 + 16), v11 + 1, 1u) )
        {
          v10 = *(_QWORD *)v10;
          if ( (__int64 *)v10 == &SmpExcludeKnownDllsList )
            goto LABEL_10;
        }
        if ( v10 )
          goto LABEL_48;
      }
LABEL_10:
      v12 = SmpExcludeKnownDllsList;
      if ( (__int64 *)SmpExcludeKnownDllsList == &SmpExcludeKnownDllsList )
        goto LABEL_15;
      while ( RtlCompareUnicodeString((PCUNICODE_STRING)(v12 + 16), v11 + 2, 1u) )
      {
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == &SmpExcludeKnownDllsList )
          goto LABEL_15;
      }
      if ( !v12 )
      {
LABEL_15:
        v13 = 0;
        v14 = (struct _UNICODE_STRING *)&v11[2];
        if ( v11[1].Length >= 2u )
        {
          Buffer = v11[1].Buffer;
          v13 = *Buffer == 95;
          if ( *Buffer == 42 )
          {
            if ( (a5 & 2) != 0 )
              goto LABEL_48;
            v14 = (struct _UNICODE_STRING *)&v11[2];
          }
          else if ( (a5 & 3) == 1 )
          {
            goto LABEL_48;
          }
        }
        v69 = 0x1000000;
        if ( v13 )
        {
          if ( v45 || !v46 )
            goto LABEL_48;
          v69 = 17825792;
          v14 = (struct _UNICODE_STRING *)&v11[2];
        }
        ObjectAttributes.ObjectName = v14;
        if ( (*(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 188LL) & 0x40000) != 0 )
        {
          ObjectInformation = 0;
          v52 = 0LL;
          ObjectInformationLength = 0;
          if ( NtQueryObject(
                 ObjectAttributes.RootDirectory,
                 ObjectNameInformation,
                 &ObjectInformation,
                 0,
                 &ObjectInformationLength) == -1073741820 )
          {
            ObjectInformationLength += 2;
            ObjectInformationLength += ObjectAttributes.ObjectName->Length;
            Heap = (__m128i *)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                0,
                                ObjectInformationLength);
            if ( Heap )
            {
              if ( NtQueryObject(
                     ObjectAttributes.RootDirectory,
                     ObjectNameInformation,
                     Heap,
                     ObjectInformationLength,
                     &ObjectInformationLength) >= 0 )
              {
                v17 = _mm_cvtsi128_si32(*Heap);
                Destination = (struct _UNICODE_STRING)*Heap;
                Destination.MaximumLength = ObjectAttributes.ObjectName->Length + v17 + 2;
                if ( RtlAppendUnicodeToString(&Destination, L"\\") >= 0
                  && RtlAppendUnicodeStringToString(&Destination, ObjectAttributes.ObjectName) >= 0 )
                {
                  NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgSetTracepoint, &Destination, 0x10u, 0LL, 0, 0LL);
                }
              }
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
            }
          }
        }
        if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
        {
          v56 = v14;
          v60[0] = v14;
          if ( v58 )
          {
            v18 = v58[1];
            v19 = v18 & 8;
            v41 = v19;
            v58[1] = v18 | 8;
          }
          else
          {
            v19 = v41;
          }
          v20 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v62);
          v21 = v20;
          if ( v58 )
            v58[1] ^= (v58[1] ^ v19) & 8;
          if ( v20 >= 0 )
          {
            if ( (v70 & 0x2000) == 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
              v21 = -1073740945;
              goto LABEL_78;
            }
            NtClose(Handle);
          }
          else
          {
            v38[0] = 1;
            if ( v20 == -1073740760 )
            {
              if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v38) < 0 || v38[0] )
              {
LABEL_42:
                RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
LABEL_78:
                Parameters[2] = (unsigned __int64)v14;
                Parameters[0] = (unsigned __int64)&DestinationString;
                Parameters[1] = v21;
                SmpTerminate(Parameters, 5u, 3u);
                JUMPOUT(0x14000974DLL);
              }
            }
            else if ( v20 != -1073741771 )
            {
              goto LABEL_42;
            }
          }
          NtClose(FileHandle);
        }
      }
LABEL_48:
      if ( ++v9 >= v39 )
        goto LABEL_49;
    }
  }
  v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
  SmpGlobalLog[2 * v8 + 2] = 4756;
  SmpGlobalLog[2 * v8 + 3] = v7;
  *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = a1;
  return (unsigned int)v7;
}
