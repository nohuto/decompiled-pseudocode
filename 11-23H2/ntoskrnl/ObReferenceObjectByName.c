/*
 * XREFs of ObReferenceObjectByName @ 0x1406C2C50
 * Callers:
 *     IopGetDriverPathInformation @ 0x140555624 (IopGetDriverPathInformation.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C23F4 (IopGetLegacyVetoListDrivers.c)
 *     AlpcpCreateClientPort @ 0x140717744 (AlpcpCreateClientPort.c)
 *     ObShutdownSystem @ 0x14097AE00 (ObShutdownSystem.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E200 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x140232210 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140232270 (SepDeleteAccessState.c)
 *     PsDereferenceSiloContext @ 0x14036A270 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B83CC (SeSetLearningModeObjectInformation.c)
 *     SeCreateAccessState @ 0x1406C2E60 (SeCreateAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2F00 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1406C2F6C (ObpCheckObjectReference.c)
 *     ObpUnlockDirectory @ 0x1406C3248 (ObpUnlockDirectory.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x1406EF1A0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int AccessState; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25[20]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[224]; // [rsp+180h] [rbp+80h] BYREF

  memset(v26, 0, sizeof(v26));
  v17 = 0LL;
  v18 = 0LL;
  memset(v25, 0, sizeof(v25));
  v20 = 0LL;
  v24 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v11) = a6;
  result = ObpCaptureObjectName(v11, a1, &v18, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v18 )
    return 3221225523LL;
  if ( a3 || (a3 = v25, AccessState = SeCreateAccessState(v25, v26, a4, a5 + 76), (AccessState & 0x80000000) == 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = ObpLookupObjectName(0LL, a6, a7, 0, 0LL, (__int64)CurrentSilo, (__int64)a3, (__int64)v19, 0LL, (__int64)&v17);
    AccessState = v14;
    if ( v19[0] )
    {
      ObpUnlockDirectory(v19);
      v14 = AccessState;
    }
    *a8 = 0LL;
    if ( v14 >= 0 )
    {
      if ( SepLearningModeTokenCount )
      {
        v15 = *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
        *(_QWORD *)&v23 = 0LL;
        *(_QWORD *)&v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v15] + 16;
        *((_QWORD *)&v22 + 1) = &v18;
        SeSetLearningModeObjectInformation((__int64)&v21);
      }
      if ( (unsigned __int8)ObpCheckObjectReference(v17, (PNTSTATUS)&AccessState) )
        *a8 = v17;
      else
        PsDereferenceSiloContext((void *)v17);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v25 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(&v18);
  return AccessState;
}
