/*
 * XREFs of sub_140929080 @ 0x140929080
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     sub_1406E9FB0 @ 0x1406E9FB0 (sub_1406E9FB0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_140929080(ULONG_PTR a1, void *a2)
{
  char v3; // si
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+50h] [rbp-98h] BYREF

  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object[0] = 0LL;
  result = sub_140732D40(a1, 2048, (__int64)PsProcessType, v3, 0x4F676244u, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = v3;
    v6 = Object[0];
    if ( sub_14066CFE4(v5, *((_QWORD *)KeGetCurrentThread() + 23), (__int64)Object[0]) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[124];
      if ( (v8 & 1) == 0
        || (memset(v10, 0, 0x68uLL), v10[2] = 0LL, v10[1] = v8, v7 = sub_140358A20(2u, 12, 0, (__int64)v10), v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(a2, 2u, qword_140D05120, v3, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = sub_1406E9FB0((ULONG_PTR)v6, (__int64)Object[0]);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return (unsigned int)v7;
  }
  return result;
}
