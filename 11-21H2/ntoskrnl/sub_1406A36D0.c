/*
 * XREFs of sub_1406A36D0 @ 0x1406A36D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_1406A36D0(HANDLE Handle, unsigned __int64 a2)
{
  KPROCESSOR_MODE v4; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+18h]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v6 = a2;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    v9 = *(_QWORD *)a2;
  }
  else
  {
    v9 = *(_QWORD *)a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0x10u, MmSectionObjectType, v4, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = sub_1406A377C(Object, &v9, 0LL);
    ObfDereferenceObject(Object);
    *(_QWORD *)a2 = v9;
    return v8;
  }
  return result;
}
