/*
 * XREFs of ObReferenceObjectByName @ 0x14071EEC0
 * Callers:
 *     IopGetDriverPathInformation @ 0x140556AEC (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x140799218 (IopGetLegacyVetoListDrivers.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x140347840 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x1407CD000 (ObpCaptureObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
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
  DmaAdapter = 0LL;
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
  if ( a3 || (a3 = v25, AccessState = SeCreateAccessState(v25, v26, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = ObpLookupObjectName(
            0LL,
            a6,
            a7,
            0LL,
            0LL,
            (__int64)CurrentSilo,
            (__int64)a3,
            (__int64)v19,
            0LL,
            (__int64)&DmaAdapter);
    AccessState = v14;
    if ( v19[0] )
    {
      ObpUnlockDirectory((__int64)v19);
      v14 = AccessState;
    }
    *a8 = 0LL;
    if ( v14 >= 0 )
    {
      if ( SepLearningModeTokenCount )
      {
        v15 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
        *(_QWORD *)&v23 = 0LL;
        *(_QWORD *)&v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v15] + 16;
        *((_QWORD *)&v22 + 1) = &v18;
        SeSetLearningModeObjectInformation((__int64)&v21);
      }
      if ( (unsigned __int8)ObpCheckObjectReference((int)DmaAdapter, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v25 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(&v18);
  return (unsigned int)AccessState;
}
