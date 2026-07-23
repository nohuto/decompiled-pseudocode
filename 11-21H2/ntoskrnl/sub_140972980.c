/*
 * XREFs of sub_140972980 @ 0x140972980
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     sub_1409C03F8 @ 0x1409C03F8 (sub_1409C03F8.c)
 */

char __fastcall sub_140972980(__int64 a1, _DWORD *a2, int a3, char a4)
{
  _RTL_BITMAP *v5; // rdi
  ULONG StartingIndex; // [rsp+40h] [rbp+8h] BYREF
  ULONG v8; // [rsp+58h] [rbp+20h] BYREF

  StartingIndex = 0;
  v8 = 0;
  if ( a4 )
    v5 = *(_RTL_BITMAP **)(a1 + 8);
  else
    v5 = *(_RTL_BITMAP **)a1;
  sub_1409C03F8(a3, *a2, 34404, (unsigned int)&StartingIndex, (__int64)&v8);
  if ( v8 >= v5->SizeOfBitMap )
  {
    *(_DWORD *)(a1 + 16) = -1073741701;
    return 1;
  }
  if ( !RtlAreBitsClear(v5, StartingIndex, v8 - StartingIndex + 1) )
  {
    *(_DWORD *)(a1 + 16) = -1073741746;
    return 1;
  }
  return 0;
}
