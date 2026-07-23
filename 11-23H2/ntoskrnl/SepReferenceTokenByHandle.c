/*
 * XREFs of SepReferenceTokenByHandle @ 0x1402B0550
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x1407266E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9860 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140733390 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID *Object,
        _BYTE *a6,
        _QWORD *DominatesTrust)
{
  *a6 = 0;
  *DominatesTrust = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
    return ObReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, 0x74726853u, Object, 0LL);
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return -1073741790;
  return SepReferenceTokenUsingPseudoHandle((int)a1, a2, (int)Object, (int)a6, (BOOLEAN)DominatesTrust);
}
