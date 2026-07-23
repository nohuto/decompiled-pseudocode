/*
 * XREFs of sub_1409C6000 @ 0x1409C6000
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 * Callees:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 */

__int64 __fastcall sub_1409C6000(__int64 a1, PVOID *a2)
{
  int v4; // edi
  _QWORD *v5; // rsi
  unsigned int ServerSiloServiceSessionId; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[224]; // [rsp+F0h] [rbp-10h] BYREF

  Object = 0LL;
  v4 = sub_14021F764(0LL, &Object);
  if ( v4 < 0 )
    goto LABEL_7;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v12, 0, sizeof(v12));
  SeCreateAccessState(
    (int)&AccessState,
    (int)v12,
    0,
    qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)]
  + 76);
  sub_1402F89B0(
    (signed __int64 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL),
    (unsigned __int64)AccessState.SubjectSecurityContext.PrimaryToken,
    0x75536553u);
  ObfReferenceObjectWithTag(qword_140D3CCB8, 0x75536553u);
  v5 = Object;
  AccessState.SubjectSecurityContext.PrimaryToken = qword_140D3CCB8;
  v4 = sub_140729C30((char *)Object, &AccessState, 0, 0, 0, 0LL, 0LL);
  sub_1403478A0((__int64)&AccessState);
  SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  if ( v4 < 0 )
    goto LABEL_7;
  sub_140659D50(v5);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1 && (v4 = sub_1407530D0((__int64)v5, ServerSiloServiceSessionId, v7, v8), v4 < 0)
    || (v4 = sub_1409C664C(*a2, a1), v4 < 0) )
  {
    ObfDereferenceObject(*a2);
LABEL_7:
    *a2 = 0LL;
  }
  return (unsigned int)v4;
}
