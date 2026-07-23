/*
 * XREFs of sub_14021EEF0 @ 0x14021EEF0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x14021E9A0 (RtlDeleteElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x14021EA30 (RtlInsertElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x1405EB310 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14021EEF0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // eax

  v3 = *a1;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v9 = sub_14042A5E0(a1, a2, v3 + 40);
    if ( !v9 )
      break;
    if ( v9 != 1 )
    {
      result = 1LL;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(v3 + 16);
    if ( !v8 )
    {
      result = 3LL;
      goto LABEL_10;
    }
LABEL_4:
    v3 = v8;
  }
  v8 = *(_QWORD *)(v3 + 8);
  if ( v8 )
    goto LABEL_4;
  result = 2LL;
LABEL_10:
  *a3 = v3;
  return result;
}
