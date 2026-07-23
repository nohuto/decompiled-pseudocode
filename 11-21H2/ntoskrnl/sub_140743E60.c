/*
 * XREFs of sub_140743E60 @ 0x140743E60
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_1406769E0 @ 0x1406769E0 (sub_1406769E0.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140743E60(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, PVOID *a5, ULONG *a6)
{
  wchar_t *v6; // rax
  unsigned int v7; // ebx
  void *v8; // r14
  void *v9; // rsi
  BOOLEAN v10; // r13
  PVOID *v11; // r15
  ULONG *v12; // r12
  wchar_t v13; // cx
  wchar_t *v14; // rax
  int v15; // eax
  int v16; // eax
  PVOID v17; // rax
  int v18; // eax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  wchar_t *v23; // rax
  ULONG v24; // eax
  ULONG v25; // eax
  int v26; // eax
  wchar_t *v27; // [rsp+48h] [rbp-59h] BYREF
  __int16 v28[2]; // [rsp+50h] [rbp-51h] BYREF
  ULONG BufferLength; // [rsp+54h] [rbp-4Dh] BYREF
  PACL Dacl; // [rsp+58h] [rbp-49h] BYREF
  PACL Sacl; // [rsp+60h] [rbp-41h] BYREF
  void *v32; // [rsp+68h] [rbp-39h] BYREF
  void *v33; // [rsp+70h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+F8h] [rbp+57h] BYREF
  __int64 v37; // [rsp+100h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+108h] [rbp+67h]
  __int16 v39; // [rsp+110h] [rbp+6Fh] BYREF

  v37 = a2;
  v36 = a1;
  v32 = 0LL;
  v33 = 0LL;
  v6 = a4;
  Dacl = 0LL;
  v7 = 0;
  Sacl = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v10 = 0;
  LOBYTE(v37) = 0;
  LOBYTE(v36) = 0;
  BufferLength = 0;
  SaclPresent = 0;
  v28[0] = 0;
  v39 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a4 )
    return 87LL;
  v11 = a5;
  if ( !a5 )
    return 87LL;
  v12 = a6;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v13 = *v6;
    if ( *v6 )
    {
      switch ( v13 )
      {
        case 'D':
          if ( v6[1] != 58 )
            goto LABEL_60;
          v14 = v6 + 2;
          if ( Dacl )
            goto LABEL_60;
          if ( *v14 != 40 )
          {
            v7 = sub_1406769E0(v14, 1, v28, &v27);
            if ( v7 )
              goto LABEL_29;
            v14 = v27;
          }
          v7 = sub_140675DA8(v14, 1, &Dacl, &v27);
          if ( v7 )
            goto LABEL_29;
          v6 = v27;
          v10 = 1;
          break;
        case 'G':
          v7 = 87;
          if ( v6[1] != 58 || v9 )
            goto LABEL_29;
          v20 = sub_140675CC0(v6 + 2, &v33, &v27, &v36);
          v9 = v33;
          goto LABEL_40;
        case 'O':
          v7 = 87;
          if ( v6[1] != 58 || v8 )
            goto LABEL_29;
          v20 = sub_140675CC0(v6 + 2, &v32, &v27, &v37);
          v8 = v32;
LABEL_40:
          v7 = v20;
          if ( v20 )
            goto LABEL_29;
          v6 = v27;
          break;
        case ' ':
          ++v6;
          break;
        default:
          if ( v13 != 83 || v6[1] != 58 || (v23 = v6 + 2, Sacl) )
          {
LABEL_60:
            v7 = 87;
            goto LABEL_29;
          }
          if ( *v23 != 40 )
          {
            v7 = sub_1406769E0(v23, 2, &v39, &v27);
            if ( v7 )
              goto LABEL_29;
            v23 = v27;
          }
          v7 = sub_140675DA8(v23, 0, &Sacl, &v27);
          if ( v7 )
            goto LABEL_29;
          v6 = v27;
          SaclPresent = 1;
          break;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v15 < 0 )
    v7 = RtlNtStatusToDosError(v15);
  WORD1(SecurityDescriptor[0]) |= v28[0] | v39;
  if ( !v7 )
  {
    if ( !v8
      || (v21 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 0), v21 >= 0)
      || (v24 = RtlNtStatusToDosError(v21), (v7 = v24) == 0) )
    {
      if ( !v9
        || (v22 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0), v22 >= 0)
        || (v25 = RtlNtStatusToDosError(v22), (v7 = v25) == 0) )
      {
        if ( !v10
          || (v16 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, v10, Dacl, 0), v16 >= 0)
          || (v7 = RtlNtStatusToDosError(v16)) == 0 )
        {
          if ( !SaclPresent
            || (v26 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, Sacl, 0), v26 >= 0)
            || (v7 = RtlNtStatusToDosError(v26)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v11, &BufferLength) == -1073741789 )
            {
              v7 = 0;
              v17 = sub_14067757C(BufferLength);
              *v11 = v17;
              if ( v17 )
              {
                v18 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v17, &BufferLength);
                if ( v18 >= 0 )
                  goto LABEL_27;
                v7 = RtlNtStatusToDosError(v18);
                if ( *v11 )
                  ExFreePoolWithTag(*v11, 0);
                *v11 = 0LL;
                if ( !v7 )
                {
LABEL_27:
                  if ( v12 )
                    *v12 = BufferLength;
                }
              }
              else
              {
                v7 = 8;
              }
            }
            else
            {
              v7 = 122;
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (_BYTE)v37 == 1 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (_BYTE)v36 == 1 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  if ( Sacl )
    ExFreePoolWithTag(Sacl, 0);
  return v7;
}
