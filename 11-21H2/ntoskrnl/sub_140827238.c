/*
 * XREFs of sub_140827238 @ 0x140827238
 * Callers:
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_140827378 @ 0x140827378 (sub_140827378.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140827238()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rax
  __int64 v7; // r8
  int v8; // edi
  int v9; // eax
  void *v11; // rsi
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&qword_140D00AC0;
  v1 = 0LL;
  qword_140D00AC8 = 0LL;
  v12 = 0LL;
  v2 = **(_DWORD **)&qword_140D00AC0;
  Pool2 = ExAllocatePool2(256LL, 64LL, 1111770192LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = v0;
  *(_DWORD *)(Pool2 + 8) = v2;
  *(_DWORD *)(Pool2 + 12) = -805306368;
  v5 = (_QWORD *)(Pool2 + 16);
  v5[1] = v5;
  *v5 = v5;
  v6 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1111770192LL);
  *(_QWORD *)(v4 + 56) = v6;
  if ( v6 )
  {
    v8 = ExInitializeResourceLite(v6);
    if ( v8 >= 0 )
    {
      v9 = sub_1408274C4(v4, L"SYSTEM", 0LL, 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v12);
      v1 = v12;
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = sub_1406C1D24((_QWORD *)v4, v12);
        if ( v8 >= 0 )
        {
          v8 = sub_140827378(v0, v4);
          if ( v8 >= 0 )
          {
            qword_140D00AC8 = v4;
            return (unsigned int)v8;
          }
        }
      }
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(v4 + 56), 0);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( v1 )
    sub_140A30510(v4, v1, v7);
  v11 = *(void **)(v4 + 56);
  if ( v11 )
  {
    ExDeleteResourceLite(*(PERESOURCE *)(v4 + 56));
    ExFreePoolWithTag(v11, 0);
  }
  ExFreePoolWithTag((PVOID)v4, 0);
  return (unsigned int)v8;
}
