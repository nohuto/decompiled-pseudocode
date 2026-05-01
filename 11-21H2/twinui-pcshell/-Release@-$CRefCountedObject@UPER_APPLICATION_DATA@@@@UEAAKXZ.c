/*
 * XREFs of ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180165A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1PER_APPLICATION_DATA@@QEAA@XZ @ 0x180165AAC (--1PER_APPLICATION_DATA@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRefCountedObject<PER_APPLICATION_DATA>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 12);
  if ( !v2 && a1 )
  {
    PER_APPLICATION_DATA::~PER_APPLICATION_DATA((PER_APPLICATION_DATA *)(a1 + 2));
    operator delete((void *)a1, 0x38uLL);
  }
  return v2;
}
