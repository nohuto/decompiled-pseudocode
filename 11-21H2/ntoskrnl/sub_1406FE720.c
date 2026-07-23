/*
 * XREFs of sub_1406FE720 @ 0x1406FE720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402493D4 @ 0x1402493D4 (sub_1402493D4.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_14028ACE8 @ 0x14028ACE8 (sub_14028ACE8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140696EC8 @ 0x140696EC8 (sub_140696EC8.c)
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 *     sub_1409C6578 @ 0x1409C6578 (sub_1409C6578.c)
 *     sub_1409CCBCC @ 0x1409CCBCC (sub_1409CCBCC.c)
 *     sub_1409CD6CC @ 0x1409CD6CC (sub_1409CD6CC.c)
 *     sub_1409CE8C4 @ 0x1409CE8C4 (sub_1409CE8C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406FE720(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rtt
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    sub_1409CD6CC(a1);
    v21 = *(void **)(a1 + 1144);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      sub_1409CE8C4(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( byte_140C5AEB0 )
    sub_1409CCBCC(a1);
  v3 = *(_DWORD *)(a1 + 200);
  if ( (v3 & 0x400000) != 0 )
  {
    _InterlockedDecrement(&dword_140D3CAD0);
    v3 = *(_DWORD *)(a1 + 200);
  }
  if ( (v3 & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1080);
    if ( v4 )
      sub_1406AB17C(*(_DWORD *)(a1 + 120), v4);
    v5 = *(_QWORD *)(a1 + 1088);
    if ( v5 )
      sub_140696EC8(*(_QWORD *)(a1 + 216), v5);
    v6 = *(_QWORD *)(a1 + 1152);
    if ( v6 )
      sub_140696EC8(*(_QWORD *)(a1 + 216), v6);
    v7 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v7 + 3);
    v8 = v7[3];
    v9 = v8 - 1;
    v10 = v8 == 1;
    if ( v8 - 1 <= 0 )
    {
LABEL_35:
      if ( !v10 )
        __fastfail(0xEu);
      v19 = v7[1];
      v20 = v7[20];
      v22 = v19;
      sub_14069BBC0(&v22, v20);
    }
    else
    {
      while ( 1 )
      {
        v11 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 3, v9, v8);
        if ( v11 == v8 )
          break;
        v9 = v8 - 1;
        v10 = v8 == 1;
        if ( v8 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v12 = *(void **)(a1 + 1160);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = *(void **)(a1 + 1112);
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    sub_1409C6578(a1 + 88, 0LL);
  v14 = *(_QWORD *)(a1 + 1136);
  if ( v14 )
    sub_14028ACE8(v14);
  sub_14028AB90(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v15 = *(void **)(a1 + 176);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( *(_QWORD *)(a1 + 792) )
    sub_1402493D4(a1);
  v16 = *(void **)(a1 + 784);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v17 )
  {
    ExDeleteResourceLite(v17);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v18 = *(void **)(a1 + 1104);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
