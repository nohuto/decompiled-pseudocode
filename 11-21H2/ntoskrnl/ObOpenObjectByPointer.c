/*
 * XREFs of ObOpenObjectByPointer @ 0x1407277A0
 * Callers:
 *     sub_14065EA54 @ 0x14065EA54 (sub_14065EA54.c)
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     sub_14066CC94 @ 0x14066CC94 (sub_14066CC94.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067DA70 @ 0x14067DA70 (sub_14067DA70.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_14069B8FC @ 0x14069B8FC (sub_14069B8FC.c)
 *     sub_1406BAD74 @ 0x1406BAD74 (sub_1406BAD74.c)
 *     sub_1406BC6A8 @ 0x1406BC6A8 (sub_1406BC6A8.c)
 *     sub_1406C0720 @ 0x1406C0720 (sub_1406C0720.c)
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     sub_1406ECA80 @ 0x1406ECA80 (sub_1406ECA80.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1407527F4 @ 0x1407527F4 (sub_1407527F4.c)
 *     sub_1407B69F0 @ 0x1407B69F0 (sub_1407B69F0.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_140859318 @ 0x140859318 (sub_140859318.c)
 *     sub_14085EA64 @ 0x14085EA64 (sub_14085EA64.c)
 *     sub_140861BA4 @ 0x140861BA4 (sub_140861BA4.c)
 *     sub_1409272A0 @ 0x1409272A0 (sub_1409272A0.c)
 *     sub_140927AE4 @ 0x140927AE4 (sub_140927AE4.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_14096E7E4 @ 0x14096E7E4 (sub_14096E7E4.c)
 *     ObOpenObjectByPointerWithTag @ 0x140985170 (ObOpenObjectByPointerWithTag.c)
 *     sub_1409A325C @ 0x1409A325C (sub_1409A325C.c)
 *     sub_1409D5860 @ 0x1409D5860 (sub_1409D5860.c)
 *     sub_1409E5A54 @ 0x1409E5A54 (sub_1409E5A54.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v16[20]; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v17[28]; // [rsp+120h] [rbp-138h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & *((_DWORD *)v11 + 18)) != 0 || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++dword_140C246E0;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(KeGetCurrentThread(), *((PEPROCESS *)KeGetCurrentThread() + 23), &SubjectContext);
        v14 = sub_140347A20(&SubjectContext, v16, v17, DesiredAccess, (PGENERIC_MAPPING)((char *)v11 + 76));
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v16;
      }
      v13 = sub_140731DA0(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
      if ( v13 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v16 )
      {
        sub_1403478A0((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v13;
    }
  }
  return result;
}
