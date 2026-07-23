/*
 * XREFs of sub_1402E1AB0 @ 0x1402E1AB0
 * Callers:
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 *     sub_140635600 @ 0x140635600 (sub_140635600.c)
 *     sub_140798BE4 @ 0x140798BE4 (sub_140798BE4.c)
 * Callees:
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402E1AB0(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v5; // rcx
  _QWORD *v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  int v13; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter4 = *a2;
  v5 = *(unsigned int *)(a1 + 4);
  v14 = 0;
  if ( (_DWORD)v5 != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, BugCheckParameter4);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  sub_1402E1BD0(a1, &v14);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v10 = (_QWORD *)(a1 + 56), (v11 = *(_QWORD *)(a1 + 56)) == 0)
    || a3 == 4 )
  {
    v8 = a2 + 8;
LABEL_4:
    *v8 = 0LL;
    **(_QWORD **)(a1 + 48) = v8;
    goto LABEL_5;
  }
  if ( !a3 )
  {
    *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = a2 + 8;
    if ( a1 + 56 == *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 48) = a2 + 8;
    goto LABEL_6;
  }
  v12 = 0LL;
  do
  {
    v13 = *(_DWORD *)(v11 + 12);
    if ( v12 )
    {
      if ( v13 != 6 )
        goto LABEL_17;
      v12 = v10;
    }
    else if ( !v13 || (v12 = v10, v13 != 6) )
    {
LABEL_17:
      v10 = (_QWORD *)v11;
      goto LABEL_18;
    }
    *v10 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      *(_QWORD *)v11 = 0LL;
    else
      *(_QWORD *)(a1 + 48) = v10;
    *(_QWORD *)v11 = *(_QWORD *)(a1 + 1184);
    *(_QWORD *)(a1 + 1184) = v11;
LABEL_18:
    v11 = *v10;
  }
  while ( *v10 );
  v8 = a2 + 8;
  if ( !v12 )
    goto LABEL_4;
  *v8 = *v12;
  *v12 = v8;
  if ( v12 == *(_QWORD **)(a1 + 48) )
LABEL_5:
    *(_QWORD *)(a1 + 48) = v8;
LABEL_6:
  result = sub_1402E1B84(a1, &v14);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
