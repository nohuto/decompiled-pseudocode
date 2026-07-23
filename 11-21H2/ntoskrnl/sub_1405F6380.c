/*
 * XREFs of sub_1405F6380 @ 0x1405F6380
 * Callers:
 *     sub_14045F42A @ 0x14045F42A (sub_14045F42A.c)
 *     sub_1405F903C @ 0x1405F903C (sub_1405F903C.c)
 * Callees:
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_1405F6380(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _DWORD **v4; // rdi

  v2 = *a2;
  *(_OWORD *)a1 = 0LL;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 3) )
    {
LABEL_10:
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = v2 + 8;
      return v2;
    }
    v4 = (_DWORD **)(a2 + 2);
    while ( 1 )
    {
      if ( **v4 == -1 || *(_BYTE *)(v2 + 2) != 2 )
      {
        v2 = *(_QWORD *)(v2 + 8);
      }
      else
      {
        v2 = sub_1405F67D0(v4, v2 + 8, 2LL);
        if ( !v2 )
          return -1LL;
      }
      if ( *(_BYTE *)(v2 + 3) )
        goto LABEL_10;
    }
  }
  return v2;
}
