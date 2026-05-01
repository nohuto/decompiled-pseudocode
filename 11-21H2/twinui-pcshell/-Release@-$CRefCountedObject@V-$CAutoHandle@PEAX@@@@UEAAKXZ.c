/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x18003DB30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoHandle<void *>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  char *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
    operator delete((void *)a1, 0x18uLL);
  }
  return v2;
}
