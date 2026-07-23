/*
 * XREFs of sub_1406634A0 @ 0x1406634A0
 * Callers:
 *     NtOpenThread @ 0x140663470 (NtOpenThread.c)
 *     sub_140663910 @ 0x140663910 (sub_140663910.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetThreadId @ 0x140230790 (PsGetThreadId.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406634A0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  int v10; // r12d
  __int64 v11; // rcx
  bool v12; // cl
  ULONG v13; // esi
  char v14; // al
  KPROCESSOR_MODE AccessMode; // r15
  NTSTATUS v16; // edi
  KPROCESSOR_MODE v17; // dl
  char v19; // [rsp+42h] [rbp-2F6h] BYREF
  KPROCESSOR_MODE v20; // [rsp+43h] [rbp-2F5h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-2F0h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-2E8h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-2E0h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-2D8h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-2D0h] BYREF
  HANDLE ThreadId[2]; // [rsp+70h] [rbp-2C8h] BYREF
  ULONG HandleAttributes; // [rsp+80h] [rbp-2B8h]
  HANDLE Handle; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-2A8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-298h] BYREF
  _BYTE v31[224]; // [rsp+140h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-118h] BYREF
  int *v33; // [rsp+230h] [rbp-108h]
  __int64 v34; // [rsp+238h] [rbp-100h]
  int *v35; // [rsp+240h] [rbp-F8h]
  __int64 v36; // [rsp+248h] [rbp-F0h]
  unsigned int *v37; // [rsp+250h] [rbp-E8h]
  __int64 v38; // [rsp+258h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+260h] [rbp-D8h] BYREF
  unsigned int *v40; // [rsp+280h] [rbp-B8h]
  __int64 v41; // [rsp+288h] [rbp-B0h]
  int *v42; // [rsp+290h] [rbp-A8h]
  __int64 v43; // [rsp+298h] [rbp-A0h]
  int *v44; // [rsp+2A0h] [rbp-98h]
  __int64 v45; // [rsp+2A8h] [rbp-90h]
  _QWORD **v46; // [rsp+2B0h] [rbp-88h]
  __int64 v47; // [rsp+2B8h] [rbp-80h]
  char *v48; // [rsp+2C0h] [rbp-78h]
  __int64 v49; // [rsp+2C8h] [rbp-70h]
  KPROCESSOR_MODE *v50; // [rsp+2D0h] [rbp-68h]
  __int64 v51; // [rsp+2D8h] [rbp-60h]
  __int64 *v52; // [rsp+2E0h] [rbp-58h]
  __int64 v53; // [rsp+2E8h] [rbp-50h]

  v25 = (_QWORD *)a1;
  Handle = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v31, 0, sizeof(v31));
  v10 = 0;
  if ( a5 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) == 0 )
    {
      v12 = *(_QWORD *)(a3 + 16) != 0LL;
      v13 = *(_DWORD *)(a3 + 24) & 0x1DF2;
      HandleAttributes = v13;
      if ( !a4 )
      {
        v14 = 0;
        goto LABEL_8;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ThreadId = *a4;
        v14 = 1;
        v13 = HandleAttributes;
LABEL_8:
        AccessMode = PreviousMode;
        goto LABEL_11;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v12 = *(_QWORD *)(a3 + 16) != 0LL;
  AccessMode = PreviousMode;
  v13 = *(_DWORD *)(a3 + 24) & (PreviousMode != 0 ? 7666 : 73714);
  if ( a4 )
  {
    *(_OWORD *)ThreadId = *a4;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
LABEL_11:
  if ( v12 || !v14 )
  {
    v16 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v16 = SeCreateAccessState(&PassedAccessState, v31, a2, (char *)PsThreadType + 76);
      if ( v16 < 0 )
        break;
      if ( (v13 & 0x400) == 0 || (v17 = 1, v10) )
        v17 = AccessMode;
      if ( SeSinglePrivilegeCheck(stru_140D3CA18, v17) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      if ( ThreadId[0] )
      {
        v16 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
        if ( v16 < 0 )
        {
LABEL_27:
          sub_1403478A0((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          break;
        }
      }
      else
      {
        v16 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v16 < 0 )
          goto LABEL_27;
        ThreadId[0] = *((HANDLE *)Thread + 153);
      }
      v16 = ObOpenObjectByPointer(Thread, v13, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
      sub_1403478A0((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      ObfDereferenceObject(Thread);
      if ( v16 >= 0 )
      {
        *v25 = Handle;
        if ( v10 && (unsigned int)dword_140C03048 > 5 && sub_1402A2000((__int64)&dword_140C03048, 0x400000000000LL) )
        {
          v21 = (unsigned int)PsGetThreadId(Thread);
          v40 = &v21;
          v41 = 4LL;
          v22 = (unsigned int)ThreadId[0];
          v42 = (int *)&v22;
          v43 = 4LL;
          v23 = a2;
          v44 = (int *)&v23;
          v45 = 4LL;
          LODWORD(v25) = v13;
          v46 = &v25;
          v47 = 4LL;
          v19 = a5;
          v48 = &v19;
          v49 = 1LL;
          v20 = AccessMode;
          v50 = &v20;
          v51 = 1LL;
          v29 = 0x1000000LL;
          v52 = &v29;
          v53 = 8LL;
          sub_14020A9C4((__int64)&dword_140C03048, (unsigned __int8 *)word_140034112, 0LL, 0LL, 9u, &v39);
        }
        break;
      }
      if ( (v13 & 0x400) == 0 || v16 != -1073741790 || v10 )
        break;
      v10 = 1;
    }
  }
  v21 = v16;
  v22 = a2;
  v23 = (unsigned int)ThreadId[1];
  LODWORD(v25) = ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v25;
  *(_QWORD *)&UserData.Size = 4LL;
  v33 = (int *)&v23;
  v34 = 4LL;
  v35 = (int *)&v22;
  v36 = 4LL;
  v37 = &v21;
  v38 = 4LL;
  EtwWrite(qword_140C15DF8, &stru_14000E640, 0LL, 4u, &UserData);
  return (unsigned int)v16;
}
