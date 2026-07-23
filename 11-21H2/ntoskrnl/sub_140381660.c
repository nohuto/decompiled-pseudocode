/*
 * XREFs of sub_140381660 @ 0x140381660
 * Callers:
 *     sub_14037EAF8 @ 0x14037EAF8 (sub_14037EAF8.c)
 *     sub_14037EC9C @ 0x14037EC9C (sub_14037EC9C.c)
 *     sub_1403815D4 @ 0x1403815D4 (sub_1403815D4.c)
 *     sub_1405FAB9C @ 0x1405FAB9C (sub_1405FAB9C.c)
 * Callees:
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 *     sub_1403823DC @ 0x1403823DC (sub_1403823DC.c)
 */

__int64 __fastcall sub_140381660(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // eax
  signed int v4; // ebp
  __int64 v6; // rsi
  int v7; // edi
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx

  v3 = *(unsigned __int16 *)(a2 + 10);
  v4 = -1;
  v6 = a1;
  if ( (_WORD)v3 )
  {
    LOBYTE(a1) = *(_BYTE *)(a1 + 552);
    v7 = v3 >> a1;
  }
  else
  {
    v7 = -1;
  }
  *(_WORD *)(a2 + 10) = a3 + v3;
  *(_DWORD *)(v6 + 560) += a3;
  result = *(unsigned __int16 *)(a2 + 10);
  if ( (_WORD)result )
  {
    LOBYTE(a1) = *(_BYTE *)(v6 + 552);
    v4 = (unsigned int)result >> a1;
  }
  if ( v7 != v4 )
  {
    result = sub_1403813C0(a1, a2, 1, 0);
    v9 = *(_QWORD **)a2;
    if ( v7 >= 0 )
    {
      sub_1403823DC(v6, v6 + 16 * (v7 + 18LL), v9);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto FatalListEntryError_26;
      result = v9[1];
      if ( *(_QWORD **)result != v9 )
        goto FatalListEntryError_26;
      *(_QWORD *)result = v10;
      *(_QWORD *)(v10 + 8) = result;
      if ( *(_QWORD *)(v6 + 16 * (v7 + 18LL)) == v6 + 16 * (v7 + 18LL) )
      {
        result = (unsigned int)(1 << v7);
        *(_DWORD *)(v6 + 284) ^= result;
      }
    }
    if ( v4 >= 0 )
    {
      v11 = (_QWORD *)(v6 + 16 * (v4 + 18LL));
      if ( (_QWORD *)*v11 == v11 )
      {
        *(_DWORD *)(v6 + 284) ^= 1 << v4;
      }
      else
      {
        v12 = *(unsigned int *)(v11[1] + 16LL);
        _BitScanReverse((unsigned int *)&v13, v12);
        sub_1403813C0(v13, *(_QWORD *)(v6 + 8 * v13) + 16 * (v12 ^ (unsigned int)(1 << v13)), 1, 0);
      }
      result = v11[1];
      if ( *(_QWORD **)result == v11 )
      {
        *v9 = v11;
        v9[1] = result;
        *(_QWORD *)result = v9;
        v11[1] = v9;
        return result;
      }
FatalListEntryError_26:
      __fastfail(3u);
    }
    v9[1] = v9;
    *v9 = v9;
  }
  return result;
}
