/*
 * XREFs of Bulk_Stage_ProcessSegment @ 0x1C000E054
 * Callers:
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C000DF50 (Bulk_Stage_CalculateBytesTransferred.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_Stage_ProcessSegment(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rbx
  char v6; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 i; // rdx

  v5 = *(_QWORD *)(a3 + 16);
  v6 = 0;
  v8 = v5 + 16LL * a4;
  v9 = (*(_DWORD *)(a3 + 44) & 0xFFFFFFF0) + v5 - 16;
  if ( v8 > v9 )
    return v6;
  v10 = *a2;
  for ( i = v8 + *(_QWORD *)(a3 + 24) - v5; ; i += 16LL )
  {
    if ( i == v10 )
      v6 = 1;
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 != 1 )
    {
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 == 6 )
        return v6;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v8 + 12)) >> 2 == 7 )
      {
        if ( v6 )
          return v6;
        *a5 = 0;
      }
      else if ( v6 )
      {
        return v6;
      }
      goto LABEL_21;
    }
    if ( v6 )
      break;
    *a5 += *(_DWORD *)(v8 + 8) & 0x1FFFF;
LABEL_21:
    v8 += 16LL;
    if ( v8 > v9 )
      return v6;
  }
  switch ( *((_BYTE *)a2 + 11) )
  {
    case 2:
    case 3:
    case 4:
    case 6:
    case 0x1A:
LABEL_12:
      *a5 += (*(_DWORD *)(v8 + 8) & 0x1FFFF) - (a2[1] & 0xFFFFFF);
      break;
    case 0x1C:
      *a5 = a2[1] & 0xFFFFFF;
      break;
    case 0x24:
      goto LABEL_12;
  }
  return v6;
}
