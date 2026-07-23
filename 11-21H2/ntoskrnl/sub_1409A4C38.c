/*
 * XREFs of sub_1409A4C38 @ 0x1409A4C38
 * Callers:
 *     sub_1409A3450 @ 0x1409A3450 (sub_1409A3450.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_1409A4C38(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rcx
  unsigned __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v7; // r9
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // rax

  v1 = *(unsigned __int64 **)(a1 + 280);
  v3 = (unsigned __int64)v1;
  while ( 1 )
  {
    v4 = (unsigned __int64 *)v3;
    if ( !v3 )
      break;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v4;
    if ( (v3 & 1) != 0 )
      break;
LABEL_11:
    result = v3;
    if ( !v3 )
      return result;
    for ( i = *(_QWORD **)(v3 + 48); i != (_QWORD *)(v3 + 48); i = (_QWORD *)*i )
    {
      v7 = i - 1;
      v8 = i;
      if ( !_bittest(*(const signed __int32 **)(a1 + 64), *((_DWORD *)i - 2)) )
      {
        v9 = (_QWORD *)*i;
        v10 = (_QWORD *)i[1];
        i = v10;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = v10;
        ExFreePoolWithTag(v7, 0x52507454u);
      }
    }
  }
  ++v1;
  result = *(_QWORD *)(a1 + 280);
  while ( (unsigned __int64)v1 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5) )
  {
    v3 = *v1;
    if ( (*v1 & 1) == 0 )
      goto LABEL_11;
    ++v1;
  }
  return result;
}
