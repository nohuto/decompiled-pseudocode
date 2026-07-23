/*
 * XREFs of sub_140693C24 @ 0x140693C24
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140216C84 @ 0x140216C84 (sub_140216C84.c)
 *     sub_140216D54 @ 0x140216D54 (sub_140216D54.c)
 *     sub_140216DE8 @ 0x140216DE8 (sub_140216DE8.c)
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_140216EB4 @ 0x140216EB4 (sub_140216EB4.c)
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_1402172E4 @ 0x1402172E4 (sub_1402172E4.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140693EA8 @ 0x140693EA8 (sub_140693EA8.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 *     sub_14097CFDC @ 0x14097CFDC (sub_14097CFDC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140693C24(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // r9
  char *v4; // rbx
  void *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD *v16; // rax
  ULONG_PTR v17; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v20; // rax
  void *v21; // rcx

  v1 = BugCheckParameter2 + 1664;
  sub_1402172E4(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) )
    {
      v16 = *(_QWORD **)v4;
      v17 = 0LL;
      while ( v16 )
      {
        v17 = (ULONG_PTR)v16;
        v16 = (_QWORD *)*v16;
      }
      if ( !v17 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v17 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v17, 0LL, *(_QWORD *)(v17 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
        if ( !v21 )
          break;
        ExFreePoolWithTag(v21, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  v5 = sub_140282AD0(v1);
  v6 = sub_140216EE8(BugCheckParameter2);
  sub_140216EB4(BugCheckParameter2, v7, 4LL);
  v8 = sub_14032A72C(BugCheckParameter2);
  sub_140216E18(v8, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 376);
    if ( v10 )
      sub_14097CFDC(BugCheckParameter2, v10);
    ExCleanupAutoExpandPushLock(v9 + 392);
  }
  v11 = (unsigned __int64 *)*((_QWORD *)v5 + 5);
  if ( v11 )
  {
    sub_140334400(v11);
    *((_QWORD *)v5 + 5) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v5 + 4);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v5 + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x10) != 0 )
    sub_1406FECE0(2LL, -4LL, BugCheckParameter2);
  sub_14028CE10(v8, 4 - v6);
  sub_140216DE8(v1);
  sub_140216D54(v1);
  v13 = *(void **)(BugCheckParameter2 + 1368);
  if ( v13 )
    sub_140693EA8(v13);
  v14 = *(void **)(BugCheckParameter2 + 2552);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return sub_140216C84(v8);
}
