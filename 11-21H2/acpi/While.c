/*
 * XREFs of While @ 0x1C001C380
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 */

__int64 __fastcall While(__int64 *a1, __int64 a2)
{
  unsigned int v4; // edx

  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v4 = PushScope(
             (__int64)a1,
             a1[15],
             *(_SLIST_ENTRY **)(a2 + 40),
             *(_QWORD *)(a2 + 32),
             a1[10],
             a1[11],
             a1[40],
             *(_QWORD *)(a2 + 88));
      if ( !v4 )
        *(_DWORD *)(a1[52] + 16) |= 0x20000u;
    }
    else
    {
      a1[15] = *(_QWORD *)(a2 + 40);
    }
  }
  return v4;
}
