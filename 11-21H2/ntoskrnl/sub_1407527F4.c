/*
 * XREFs of sub_1407527F4 @ 0x1407527F4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_1407527F4(signed __int32 *Object, signed __int32 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  NTSTATUS v7; // eax
  signed __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v14, 0, sizeof(v14));
  if ( !_bittest(Object + 543, 0x16u) || !_bittest(a2 + 543, 0x16u) )
    return 3221225596LL;
  _InterlockedOr(v10, 0);
  v4 = *((_QWORD *)Object + 316);
  v5 = *((_QWORD *)a2 + 316);
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || Object[628] < 0 || a2[628] < 0 )
    return 3221226597LL;
  Handle = 0LL;
  v11 = 0LL;
  v6 = SeCreateAccessStateEx(
         0LL,
         (struct _KPROCESS *)a2,
         &PassedAccessState,
         v14,
         0x28u,
         (GENERIC_MAPPING *)((char *)PsProcessType + 76));
  if ( v6 >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v6 = v7;
    if ( v7 >= 0 )
    {
      sub_1403478A0((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      v6 = SeCreateAccessStateEx(
             0LL,
             (struct _KPROCESS *)Object,
             &PassedAccessState,
             v14,
             0x28u,
             (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v6 < 0 )
        goto LABEL_14;
      v7 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v11);
      v6 = v7;
      if ( v7 >= 0 )
      {
        _InterlockedOr(Object + 543, 0x200000u);
        *((_QWORD *)Object + 316) = *((_QWORD *)a2 + 316);
        if ( (Object[628] | a2[628]) < 0 )
        {
          v9 = _InterlockedIncrement64(&qword_140C0BAF8);
          v6 = -1073740699;
          *((_QWORD *)Object + 316) = v9;
          *((_QWORD *)Object + 317) = v9;
        }
        sub_140255E2C((__int64)Object);
        goto LABEL_13;
      }
      v11 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v7 == -1073741790 )
      v6 = -1073740699;
LABEL_13:
    sub_1403478A0((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_14:
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
