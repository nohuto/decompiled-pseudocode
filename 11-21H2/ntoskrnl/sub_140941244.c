/*
 * XREFs of sub_140941244 @ 0x140941244
 * Callers:
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     sub_140941CFC @ 0x140941CFC (sub_140941CFC.c)
 *     sub_140941DDC @ 0x140941DDC (sub_140941DDC.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140941244(ULONG_PTR BugCheckParameter2, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  int v7; // eax
  void *Pool2; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rdi
  __int64 v17; // rdx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  _WORD *v20; // rcx
  __int64 v21; // rcx
  unsigned int i; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_27;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
  {
    sub_1403D99B4(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v13 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v13 )
    {
      sub_1403D99B4(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
      v14 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v14 )
      {
        sub_1403D99B4((ULONG)v14, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v15 )
    {
      v16 = (unsigned __int16 *)(v15 + 40);
      sub_1403D99B4(v15, (PVOID)0x310);
      if ( *v16 )
      {
        sub_1403D99B4((ULONG)v16, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v16 + 1), (PVOID)*v16);
      }
      v17 = *(_QWORD *)(BugCheckParameter2 + 312);
      v18 = (_WORD *)(*(_QWORD *)(v17 + 40) + 56LL);
      if ( *v18 )
      {
        sub_1403D99B4((ULONG)v18, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
        v17 = *(_QWORD *)(BugCheckParameter2 + 312);
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 16LL);
      if ( v19 )
      {
        v20 = (_WORD *)(v19 + 56);
        if ( *v20 )
        {
          sub_1403D99B4((ULONG)v20, (PVOID)2);
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
        }
      }
    }
LABEL_27:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v7 = 0;
  Pool2 = 0LL;
  for ( i = 0; ; v7 = i )
  {
    v9 = sub_14077DA5C(
           *(__int64 *)&qword_140D00AC0,
           *(_QWORD *)(v6 + 48),
           1,
           0,
           0LL,
           (__int64)qword_14000E368,
           (__int64)&v23,
           (__int64)Pool2,
           v7,
           (__int64)&i,
           0);
    v10 = v9;
    if ( v9 != -1073741789 )
      break;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x61706E50u);
    Pool2 = (void *)ExAllocatePool2(64LL, i, 1634758224LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0x61706E50u);
      return v11;
    }
  }
  else
  {
    *a2 = i >> 1;
    *a3 = Pool2;
  }
  return v10;
}
