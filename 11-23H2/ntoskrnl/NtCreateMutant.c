/*
 * XREFs of NtCreateMutant @ 0x1407B3810
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x14033ADD0 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(__int64 *a1, int a2, __int64 a3, char a4)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  __int64 v9; // rdx
  int inserted; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v14 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, a3, PreviousMode, v12, 56, 0, 0, &Object, 0LL);
  if ( inserted >= 0 )
  {
    LOBYTE(v9) = a4;
    KeInitializeMutantEx((__int64)Object, v9, ExpForceEnableMutantAutoboost != 0);
    inserted = ObInsertObjectEx((char *)Object, 0LL, a2, 0, 0, 0LL, &v14);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v14;
  }
  return (unsigned int)inserted;
}
