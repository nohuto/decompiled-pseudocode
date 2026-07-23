/*
 * XREFs of sub_1406F4904 @ 0x1406F4904
 * Callers:
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 * Callees:
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_140270274 @ 0x140270274 (sub_140270274.c)
 *     sub_14027031C @ 0x14027031C (sub_14027031C.c)
 *     sub_14027034C @ 0x14027034C (sub_14027034C.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     sub_1402874E8 @ 0x1402874E8 (sub_1402874E8.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DC0E8 @ 0x1402DC0E8 (sub_1402DC0E8.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1406F4878 @ 0x1406F4878 (sub_1406F4878.c)
 *     sub_14096BF70 @ 0x14096BF70 (sub_14096BF70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F4904(volatile signed __int64 *a1)
{
  volatile signed __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  ULONG_PTR v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r14
  __int64 v9; // r13
  void *v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v14; // rax
  BOOL v15; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = a1 + 8;
  v3 = *((_DWORD *)a1 + 14);
  v5 = *(_DWORD *)(*a1 + 12);
  v6 = (ULONG_PTR)(a1 + 16);
  v15 = *((_QWORD *)a1 + 8) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v8 = (__int64 *)sub_140270274((__int64)a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      sub_1402DC0E8(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        *((_QWORD *)KeGetCurrentThread() + 23));
    sub_1402879F8(v8);
  }
  else if ( (DWORD1(xmmword_140D06900[0]) & 0x400001) != 0 )
  {
    sub_14096BF70(a1, 0LL, v7);
  }
  v9 = sub_14027034C((__int64)a1);
  v10 = 0LL;
  v11 = sub_1402874E8((__int64)a1);
  if ( (v3 & 0x82) == 0x80 )
    v10 = (void *)sub_140276A48(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      sub_14026EA80(*((_QWORD *)a1 + 12), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    sub_1406F4878((__int64)a1);
  }
  if ( v11 )
  {
    v14 = sub_14030EC14((__int64)a1);
    sub_1405C4B8C(v14, v15, v11);
  }
  if ( (a1[7] & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v12 = 8LL * *((_QWORD *)a1 + 15);
  else
    v12 = 0LL;
  sub_14027031C(a1, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v12 )
    sub_140366814(v12);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v9;
}
