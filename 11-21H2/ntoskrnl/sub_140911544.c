/*
 * XREFs of sub_140911544 @ 0x140911544
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 */

__int64 __fastcall sub_140911544(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // rsi
  _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _PRIVILEGE_SET *v10; // rax
  __int64 PrivilegeCount; // rcx
  unsigned int v12; // eax
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-44h] BYREF
  _PRIVILEGE_SET *v15; // [rsp+60h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+68h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess[0] = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v7 = SeAccessCheck(
         NewDescriptor,
         &SubjectSecurityContext,
         0,
         2u,
         0,
         0LL,
         &stru_140C0BB38,
         AccessMode,
         GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v7 )
  {
    v9 = AccessStatus;
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  v10 = (_PRIVILEGE_SET *)sub_140367AF0(v8, v4, 0x63466D43u);
  v6 = v10;
  v15 = v10;
  if ( v10 )
  {
    memmove(v10, Src, v4);
    PrivilegeCount = v6->PrivilegeCount;
    v12 = 20 * PrivilegeCount;
    if ( (unsigned __int64)(20 * PrivilegeCount) > 0xFFFFFFFF || v12 + 4 < v12 )
    {
      v9 = -1073741811;
    }
    else
    {
      if ( v12 + 4 != (_DWORD)v4 )
      {
LABEL_4:
        v9 = -1073741820;
        goto LABEL_12;
      }
      v9 = sub_14092317C(PrivilegeCount, &v6->Control, (unsigned int)PrivilegeCount);
    }
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_12:
  if ( v6 )
    SeFreePrivileges(v6);
  return v9;
}
