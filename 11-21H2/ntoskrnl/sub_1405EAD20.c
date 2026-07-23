/*
 * XREFs of sub_1405EAD20 @ 0x1405EAD20
 * Callers:
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 * Callees:
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F2358 @ 0x1405F2358 (sub_1405F2358.c)
 */

__int64 __fastcall sub_1405EAD20(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 **v9; // r8
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    v5 = sub_1405F2358(a1, v4);
    v6 = *(__int64 **)(v5 + 8);
    if ( *v6 == v5 )
    {
      *a2 = v5;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(v5 + 8) = a2;
    }
    else
    {
      sub_1405F1BBC(13, 0, v5, 0, *v6, 0LL);
    }
  }
  v7 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (__int64 **)(v8 + 96);
  v10 = a2 + 2;
  result = *(_QWORD *)(v8 + 96);
  v12 = *(_QWORD *)(result + 8);
  if ( v12 != v8 + 96 )
    return sub_1405F1BBC(13, 0, (_DWORD)v9, v12, 0LL, 0LL);
  *v10 = result;
  v10[1] = (__int64)v9;
  *(_QWORD *)(result + 8) = v10;
  *v9 = v10;
  return result;
}
