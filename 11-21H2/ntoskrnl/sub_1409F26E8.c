/*
 * XREFs of sub_1409F26E8 @ 0x1409F26E8
 * Callers:
 *     sub_1409F2880 @ 0x1409F2880 (sub_1409F2880.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1409EF744 @ 0x1409EF744 (sub_1409EF744.c)
 *     sub_1409F2898 @ 0x1409F2898 (sub_1409F2898.c)
 */

void __fastcall sub_1409F26E8(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  ULONG_PTR v5; // rcx
  void *v6; // rcx

  sub_1409EF744(a1 + 16);
  v2 = (_QWORD **)(a1 + 1168);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    if ( v3 == *(_QWORD **)(a1 + 1152) )
      *(_QWORD *)(a1 + 1152) = 0LL;
    sub_1409F2898(v3);
  }
  *(_DWORD *)(a1 + 1184) = 0;
  v5 = *(_QWORD *)(a1 + 1192);
  if ( v5 )
  {
    sub_14026D048(v5, 1);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_DWORD *)(a1 + 1204) = 0;
    *(_DWORD *)(a1 + 1200) = 0;
    *(_DWORD *)(a1 + 1208) = 0;
  }
  v6 = *(void **)(a1 + 1160);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 1160) = 0LL;
  }
}
