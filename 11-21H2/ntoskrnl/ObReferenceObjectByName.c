/*
 * XREFs of ObReferenceObjectByName @ 0x14071EEC0
 * Callers:
 *     sub_140556AEC @ 0x140556AEC (sub_140556AEC.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     sub_140347840 @ 0x140347840 (sub_140347840.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407CD000 @ 0x1407CD000 (sub_1407CD000.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 CurrentSilo; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
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
  result = sub_1407CD000(v11, a1, &v18, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v18 )
    return 3221225523LL;
  if ( a3 || (a3 = v25, AccessState = SeCreateAccessState(v25, v26, a4, a5 + 76), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = sub_1407CB6C0(0LL, a6, a7, 0LL, 0LL, CurrentSilo, (__int64)a3, (__int64)v19, 0LL, (__int64)&v17);
    AccessState = v14;
    if ( v19[0] )
    {
      sub_14066960C((__int64)v19);
      v14 = AccessState;
    }
    *a8 = 0LL;
    if ( v14 >= 0 )
    {
      if ( dword_140D3CAD0 )
      {
        v15 = *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
        *(_QWORD *)&v23 = 0LL;
        *(_QWORD *)&v22 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v15] + 16;
        *((_QWORD *)&v22 + 1) = &v18;
        sub_1405F43E0((__int64)&v21);
      }
      if ( (unsigned __int8)sub_14072266C(v17, &AccessState) )
        *a8 = v17;
      else
        PsDereferenceSiloContext((void *)v17);
      sub_140347840();
    }
    if ( a3 == v25 )
    {
      sub_1403478A0((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  sub_14071F0D0(&v18);
  return (unsigned int)AccessState;
}
