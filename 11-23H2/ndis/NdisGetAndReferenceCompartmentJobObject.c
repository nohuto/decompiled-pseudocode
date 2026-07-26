/*
 * XREFs of NdisGetAndReferenceCompartmentJobObject @ 0x1C0006350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetAndReferenceCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // r9
  unsigned int v8; // ebx
  KIRQL v9; // bp
  unsigned int v10; // eax
  char *v11; // r14
  char *i; // rsi

  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v7 = qword_1C00F5DA8;
  v8 = 0;
  v9 = v6;
  while ( 1 )
  {
    if ( v7 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8 )
      goto LABEL_10;
    if ( *((_DWORD *)v7 + 4) == a1 )
      break;
    if ( *((_DWORD *)v7 + 4) > a1 )
      goto LABEL_10;
    v7 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v7;
  }
  if ( !v7 )
  {
LABEL_10:
    *a2 = 0;
    v8 = -1073741275;
    goto LABEL_8;
  }
  v10 = *((_DWORD *)v7 + 430);
  if ( v10 > *a2 )
  {
    *a2 = v10;
    v8 = 261;
  }
  else
  {
    v11 = (char *)v7 + 1728;
    *a2 = 0;
    for ( i = (char *)*((_QWORD *)v7 + 216); i != v11; i = *(char **)i )
    {
      ObfReferenceObject(*((PVOID *)i + 2));
      *(_QWORD *)(a3 + 8LL * (*a2)++) = *((_QWORD *)i + 2);
    }
  }
LABEL_8:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  return v8;
}
