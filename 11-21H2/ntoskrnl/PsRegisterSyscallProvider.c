/*
 * XREFs of PsRegisterSyscallProvider @ 0x140659230
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140419DA0 @ 0x140419DA0 (sub_140419DA0.c)
 *     sub_14065843C @ 0x14065843C (sub_14065843C.c)
 *     sub_14065859C @ 0x14065859C (sub_14065859C.c)
 *     sub_14065994C @ 0x14065994C (sub_14065994C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PsRegisterSyscallProvider(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebp
  int v11; // edi
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = -1;
  if ( !byte_140D3B01E )
    return 3221225629LL;
  if ( *(_BYTE *)a2 != 1 )
    return 3221225561LL;
  Pool2 = ExAllocatePool2(256LL, 96LL, 1666413392LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  sub_140419DA0(Pool2, a1, (__int128 *)(a2 + 4), *(_QWORD *)(a2 + 24));
  v9 = sub_14065843C(a1[3], &v12);
  v10 = v12;
  v11 = v9;
  if ( v9 < 0 || (*(_DWORD *)(v8 + 92) = v12, v11 = sub_14065994C(v8), v11 < 0) )
  {
    if ( v10 != -1 )
      sub_14065859C(a1[3]);
    ObfDereferenceObjectWithTag(*(PVOID *)(v8 + 32), 0x63537350u);
    ExFreePoolWithTag((PVOID)v8, 0x63537350u);
  }
  else
  {
    *a3 = v8;
    return 0;
  }
  return (unsigned int)v11;
}
