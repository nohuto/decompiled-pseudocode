/*
 * XREFs of sub_140782F2C @ 0x140782F2C
 * Callers:
 *     sub_14078314C @ 0x14078314C (sub_14078314C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_140782C4C @ 0x140782C4C (sub_140782C4C.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140782F2C(__int128 *a1, int a2, _OWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  int v9; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID v12; // rdi
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  char *v15; // rsi
  __int64 v17; // [rsp+28h] [rbp-E0h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  char *DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  PVOID v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  struct _ACCESS_STATE AccessState; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v28[224]; // [rsp+148h] [rbp+40h] BYREF

  P = 0LL;
  DestinationString_8 = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v28, 0, sizeof(v28));
  v8 = *((_QWORD *)a1 + 2);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString_8, (PCWSTR)(*(_QWORD *)(v8 + 8) + 18LL));
  v9 = sub_140782C4C((__int64)&DestinationString_8, &P);
  if ( v9 >= 0 )
  {
    v10 = a1[1];
    v21 = *a1;
    v11 = a1[2];
    v12 = P;
    v24 = HIDWORD(v10);
    v22 = 0LL;
    v26 = *((_QWORD *)&v11 + 1);
    v25 = P;
    v23 = 640;
    v9 = SeCreateAccessState((int)&AccessState, (int)v28, a2, (__int64)&xmmword_140A38358);
    if ( v9 >= 0 )
    {
      v13 = *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken;
      v14 = *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken;
      AccessState.SubjectSecurityContext = SubjectContext;
      v9 = sub_14072B3B0(0, qword_140D06B20, (int)&v21, 0, v17, 168, 0, 0, &DestinationString, 0LL);
      if ( v9 >= 0 )
      {
        v15 = DestinationString;
        memset(DestinationString, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v15, NotificationEvent, 0);
        *((_DWORD *)v15 + 28) = 4096;
        *((_DWORD *)v15 + 36) = 4096;
        *(_OWORD *)(v15 + 24) = *a3;
        v9 = sub_140729C30(v15, &AccessState, a2, 0, 0, 0LL, 0LL);
        if ( v9 >= 0 )
        {
          *a4 = v15;
          v9 = 0;
        }
      }
      *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken = v13;
      *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken = v14;
      sub_1403478A0((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
    if ( v12 && v12 != (PVOID)qword_140D06B18 )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)v9;
}
