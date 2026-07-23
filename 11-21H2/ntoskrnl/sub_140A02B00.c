/*
 * XREFs of sub_140A02B00 @ 0x140A02B00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140A07BFC @ 0x140A07BFC (sub_140A07BFC.c)
 */

__int64 __fastcall sub_140A02B00(void *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax
  NTSTATUS v6; // esi
  __int64 v7; // r8
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !qword_140C10D30 )
    return 3221225508LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  v4 = (__int64 *)a2;
  if ( a2 && v3 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    v9 = *(_QWORD *)v5;
    v4 = &v9;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0x100000u, qword_140C10D30, v3, &Object, 0LL);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = v3;
    v6 = sub_140A07BFC(Object, v4, v7);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
