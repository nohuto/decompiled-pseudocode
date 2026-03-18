/*
 * XREFs of PsGetSiloContext @ 0x140362B90
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x1407D9870 (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1520);
  else
    v3 = qword_140D49ED0;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
