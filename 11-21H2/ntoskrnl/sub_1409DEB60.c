/*
 * XREFs of sub_1409DEB60 @ 0x1409DEB60
 * Callers:
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1409DE468 @ 0x1409DE468 (sub_1409DE468.c)
 *     sub_1409DE67C @ 0x1409DE67C (sub_1409DE67C.c)
 *     sub_1409DE730 @ 0x1409DE730 (sub_1409DE730.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409DEB60(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, ULONG_PTR *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rbx
  PSLIST_ENTRY v11; // rax
  ULONG_PTR v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-E8h]
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int128 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+70h] [rbp-A8h]
  PVOID v26[12]; // [rsp+90h] [rbp-88h] BYREF

  memset(v26, 0, sizeof(v26));
  v9 = 0;
  *a5 = 0LL;
  v10 = sub_1409DE468(a1, a2);
  if ( v10 )
  {
    v11 = sub_14075E074((__int64)&off_140C037A0);
    v12 = (ULONG_PTR)v11;
    if ( v11
      && (int)sub_14075D4B8(a2, a3, a4, (__int64)v11, *(_DWORD *)(a1 + 56)) >= 0
      && !sub_1409DE67C((__int64)v10, v12) )
    {
      v21 = *(_OWORD *)v10;
      v22 = *((_OWORD *)v10 + 1);
      v23 = *((_OWORD *)v10 + 2);
      v24 = *((_OWORD *)v10 + 3);
      v25 = *((_OWORD *)v10 + 4);
      v13 = *((_OWORD *)v10 + 5);
      v10[11] = 0LL;
      v14 = *v10;
      *(_OWORD *)&v26[10] = v13;
      if ( *(_QWORD **)(v14 + 8) != v10 )
        goto LABEL_20;
      v15 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v15 != v10 )
        goto LABEL_20;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = sub_14075D4B8(a2, a3, a4, (__int64)v10, *(_DWORD *)(a1 + 56));
      if ( v16 < 0 )
      {
        v17 = (void *)v10[11];
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        *(_OWORD *)v10 = v21;
        *((_OWORD *)v10 + 1) = v22;
        *((_OWORD *)v10 + 2) = v23;
        *((_OWORD *)v10 + 3) = v24;
        *((_OWORD *)v10 + 4) = v25;
        *((_OWORD *)v10 + 5) = v13;
      }
      v18 = v10[7] + 56LL;
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
LABEL_20:
        __fastfail(3u);
      *v10 = v19;
      v10[1] = v18;
      *(_QWORD *)(v19 + 8) = v10;
      *(_QWORD *)v18 = v10;
      if ( v16 >= 0 )
      {
        if ( v26[11] )
          ExFreePoolWithTag(v26[11], 0);
        *a5 = (ULONG_PTR)v10;
        v9 = 2;
      }
    }
    sub_1407838E0((__int64 *)&off_140C037A0, (ULONG_PTR)v10);
    if ( v12 )
      sub_1407838E0((__int64 *)&off_140C037A0, v12);
  }
  else
  {
    return (unsigned int)sub_1409DE730(a1, a2, a3, a4, a5);
  }
  return v9;
}
