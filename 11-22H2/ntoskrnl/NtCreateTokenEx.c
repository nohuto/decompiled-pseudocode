/*
 * XREFs of NtCreateTokenEx @ 0x1406BB530
 * Callers:
 *     NtCreateToken @ 0x1409CF100 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SeReleaseAcl @ 0x1406BA32C (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1406BA348 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406BB054 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406BB138 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x1406BB2A4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityQos @ 0x140735DE0 (SeCaptureSecurityQos.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1407F1020 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1407F1650 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  char **v17; // rbx
  char PreviousMode; // si
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  NTSTATUS result; // eax
  NTSTATUS v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG v26; // ebx
  int v27; // [rsp+20h] [rbp-1F8h]
  int v28; // [rsp+28h] [rbp-1F0h]
  int v29; // [rsp+28h] [rbp-1F0h]
  int v30; // [rsp+30h] [rbp-1E8h]
  int v31; // [rsp+30h] [rbp-1E8h]
  char v32; // [rsp+C0h] [rbp-158h] BYREF
  char v33; // [rsp+C1h] [rbp-157h]
  char v34; // [rsp+C2h] [rbp-156h]
  NTSTATUS v35; // [rsp+C4h] [rbp-154h]
  __int64 v36; // [rsp+C8h] [rbp-150h] BYREF
  unsigned int Policy; // [rsp+D0h] [rbp-148h] BYREF
  int GroupCount; // [rsp+D4h] [rbp-144h]
  int PrivilegeCount; // [rsp+D8h] [rbp-140h]
  ULONG Count; // [rsp+DCh] [rbp-13Ch]
  int v41; // [rsp+E0h] [rbp-138h]
  __int64 v42; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-120h] BYREF
  PVOID P; // [rsp+100h] [rbp-118h] BYREF
  PVOID v46; // [rsp+108h] [rbp-110h] BYREF
  __int64 v47; // [rsp+110h] [rbp-108h] BYREF
  __int64 v48; // [rsp+118h] [rbp-100h] BYREF
  __int64 v49; // [rsp+120h] [rbp-F8h] BYREF
  PSID v50; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v51; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+138h] [rbp-E0h] BYREF
  ACCESS_MASK v53; // [rsp+140h] [rbp-D8h]
  __int64 *v54; // [rsp+148h] [rbp-D0h]
  PLARGE_INTEGER v55; // [rsp+150h] [rbp-C8h]
  PTOKEN_GROUPS v56; // [rsp+158h] [rbp-C0h]
  PTOKEN_PRIVILEGES v57; // [rsp+160h] [rbp-B8h]
  char **v58; // [rsp+168h] [rbp-B0h]
  PTOKEN_SOURCE v59; // [rsp+170h] [rbp-A8h]
  __int64 QuadPart; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+180h] [rbp-98h] BYREF
  int v62[2]; // [rsp+188h] [rbp-90h]
  int v63[2]; // [rsp+190h] [rbp-88h] BYREF
  PHANDLE v64; // [rsp+198h] [rbp-80h]
  __int64 v65; // [rsp+1A0h] [rbp-78h] BYREF
  int v66; // [rsp+1A8h] [rbp-70h]
  void *Src; // [rsp+1B0h] [rbp-68h]
  PTOKEN_OWNER v68; // [rsp+1B8h] [rbp-60h]
  PTOKEN_MANDATORY_POLICY v69; // [rsp+1C0h] [rbp-58h]
  __int64 v70[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v41 = Type;
  *(_QWORD *)v62 = ObjectAttributes;
  v53 = DesiredAccess;
  v64 = TokenHandle;
  v69 = MandatoryPolicy;
  v54 = (__int64 *)AuthenticationId;
  v58 = (char **)PrimaryGroup;
  v17 = (char **)Owner;
  v68 = Owner;
  v59 = Source;
  v57 = Privileges;
  v56 = Groups;
  v55 = ExpirationTime;
  Src = User;
  v52 = 0LL;
  *(_QWORD *)v63 = 0LL;
  v32 = 0;
  v65 = 0LL;
  v66 = 0;
  v61 = 0LL;
  QuadPart = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  Count = 0;
  v48 = 0LL;
  v36 = 0x100000000LL;
  PrivilegeCount = 0;
  v49 = 0LL;
  v50 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  *(_OWORD *)v70 = 0LL;
  Policy = 0;
  v33 = 0;
  P = 0LL;
  v46 = 0LL;
  GroupCount = 0;
  v44 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v64 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v64;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( ((unsigned __int8)v55 & 3) == 0
      && ((unsigned __int8)v56 & 3) == 0
      && ((unsigned __int8)v57 & 3) == 0
      && ((unsigned __int8)v59 & 3) == 0
      && (!Owner || ((unsigned __int8)Owner & 3) == 0)
      && ((unsigned __int8)v58 & 3) == 0
      && (!DefaultDacl || ((unsigned __int8)DefaultDacl & 3) == 0)
      && ((unsigned __int8)v54 & 3) == 0
      && (!MandatoryPolicy || ((unsigned __int8)MandatoryPolicy & 3) == 0)
      && (!DeviceGroups || ((unsigned __int8)DeviceGroups & 3) == 0)
      && (!DeviceAttributes || ((unsigned __int8)DeviceAttributes & 3) == 0) )
    {
      if ( !UserAttributes )
        goto LABEL_33;
      if ( ((unsigned __int8)UserAttributes & 3) == 0 )
      {
        if ( (unsigned __int64)UserAttributes < 0x7FFFFFFF0000LL )
          v19 = (__int64)UserAttributes;
        goto LABEL_33;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_33:
  v21 = v41;
  if ( (unsigned int)(v41 - 1) > 1 )
    return -1073741656;
  LOBYTE(v19) = PreviousMode;
  result = SeCaptureSecurityQos(*(_QWORD *)v62, v19, &v32, &v65);
  if ( result >= 0 )
  {
    if ( v32 || v21 != 2 )
    {
      v35 = 0;
      v61 = *v54;
      QuadPart = v55->QuadPart;
      v23 = SeCaptureSidAndAttributesArray(Src, 0, v28, v30, (__int64)&v47, (__int64)&v51);
      v35 = v23;
      if ( v23 >= 0 )
      {
        Count = v56->GroupCount;
        v26 = Count;
        v23 = SeCaptureSidAndAttributesArray(v56->Groups, 0, v29, v31, (__int64)&v48, (__int64)&v36);
        v35 = v23;
        LODWORD(v36) = (v36 - 16 * v26 + 3) & 0xFFFFFFFC;
        v17 = (char **)v68;
      }
      if ( v23 >= 0 )
      {
        PrivilegeCount = v57->PrivilegeCount;
        v23 = SeCaptureLuidAndAttributesArray(
                (char *)v57->Privileges,
                PrivilegeCount,
                PreviousMode,
                v25,
                v27,
                v29,
                v31,
                &v49,
                (_DWORD *)&v51 + 1);
        v35 = v23;
      }
      if ( v17 && v23 >= 0 )
      {
        v23 = SeCaptureSid(*v17, PreviousMode, v24, v25, v27, 1, &v50);
        v35 = v23;
      }
      if ( v23 >= 0 )
      {
        v23 = SeCaptureSid(*v58, PreviousMode, v24, v25, v27, 1, (PSID *)&v42);
        v35 = v23;
      }
      if ( DefaultDacl && v23 >= 0 && DefaultDacl->DefaultDacl )
      {
        v23 = SeCaptureAcl(
                (char *)DefaultDacl->DefaultDacl,
                PreviousMode,
                v24,
                v25,
                512,
                v29,
                (PVOID *)&v43,
                (unsigned int *)&v52);
        v35 = v23;
      }
      *(struct _TOKEN_SOURCE *)v70 = *v59;
      if ( DeviceGroups && v23 >= 0 )
      {
        GroupCount = DeviceGroups->GroupCount;
        v23 = SeCaptureSidAndAttributesArray(DeviceGroups->Groups, 0, v29, v31, (__int64)&v44, (__int64)&v52 + 4);
        v35 = v23;
      }
      if ( UserAttributes && v23 >= 0 )
      {
        LOBYTE(v25) = PreviousMode;
        v23 = SepCaptureTokenSecurityAttributesInformation(
                (_DWORD)UserAttributes,
                (unsigned int)&v36 + 4,
                1,
                v25,
                0,
                (__int64)&P);
        v35 = v23;
      }
      if ( DeviceAttributes && v23 >= 0 )
      {
        LOBYTE(v25) = PreviousMode;
        v23 = SepCaptureTokenSecurityAttributesInformation(
                (_DWORD)DeviceAttributes,
                (unsigned int)&v36 + 4,
                1,
                v25,
                0,
                (__int64)&v46);
        v35 = v23;
      }
      if ( v69 && v23 >= 0 )
      {
        Policy = v69->Policy;
        v33 = 1;
      }
      if ( v23 >= 0 )
        v23 = SepCreateTokenEx(
                (HANDLE *)v63,
                PreviousMode,
                v53,
                *(_QWORD **)v62,
                v41,
                SHIDWORD(v65),
                (__int64)&v61,
                &QuadPart,
                (_SID_AND_ATTRIBUTES *)v47,
                Count,
                (_SID_AND_ATTRIBUTES *)v48,
                v36,
                PrivilegeCount,
                (struct _ERESOURCE *)v49,
                v50,
                (void *)v42,
                (void *)v43,
                v70,
                (__int64)P,
                (__int64)v46,
                GroupCount,
                v44,
                (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v33 != 0)),
                0);
      if ( v47 )
        SeReleaseLuidAndAttributesArray((void *)v47, PreviousMode);
      if ( v48 )
        SeReleaseLuidAndAttributesArray((void *)v48, PreviousMode);
      if ( v49 )
        SeReleaseLuidAndAttributesArray((void *)v49, PreviousMode);
      if ( v50 )
        SeReleaseSid(v50, PreviousMode, 1);
      if ( v42 )
        SeReleaseSid((void *)v42, PreviousMode, 1);
      if ( v43 )
        SeReleaseAcl((void *)v43, PreviousMode);
      if ( v44 )
        SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v46 )
        SepFreeCapturedTokenSecurityAttributesInformation(v46);
      if ( v23 >= 0 )
        *v64 = *(HANDLE *)v63;
      return v23;
    }
    else
    {
      return -1073741659;
    }
  }
  return result;
}
