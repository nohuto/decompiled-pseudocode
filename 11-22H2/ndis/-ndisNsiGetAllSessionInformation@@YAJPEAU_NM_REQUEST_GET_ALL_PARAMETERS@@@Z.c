/*
 * XREFs of ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00068F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0006930 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall ndisNsiGetAllSessionInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  unsigned int *v2; // rcx
  int v3; // edx
  int SessionCompartmentId; // eax
  _DWORD *v5; // rcx

  v2 = (unsigned int *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 8);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) < 2 )
      return 3221225474LL;
    else
      return 3221225485LL;
  }
  else
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(*v2);
    v5 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( v5 )
      *v5 = SessionCompartmentId;
    return 0LL;
  }
}
