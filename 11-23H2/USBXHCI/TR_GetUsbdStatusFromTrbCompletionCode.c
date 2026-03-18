/*
 * XREFs of TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0005FE4
 * Callers:
 *     Control_Transfer_Complete @ 0x1C0005E64 (Control_Transfer_Complete.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0011B14 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetUsbdStatusFromTrbCompletionCode(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx

  if ( a2 > 0xC6 )
  {
    if ( a2 == 199 )
      return (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x4000000000000000LL) != 0 ? -1073709056 : -1073741807;
    return (unsigned int)-1073741807;
  }
  if ( a2 == 198 )
    return (unsigned int)-1073741807;
  if ( a2 > 0x14 )
  {
    v10 = a2 - 23;
    if ( !v10 )
      return (unsigned int)-1073545216;
    v11 = v10 - 3;
    if ( !v11 )
      return 0;
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)-1073610752;
    v13 = v12 - 1;
    if ( !v13 )
      return 0;
    v14 = v13 - 3;
    if ( v14 )
    {
      if ( v14 == 3 )
        return (unsigned int)-1073741802;
      return (unsigned int)-1073741807;
    }
    return (unsigned int)-1073741806;
  }
  if ( a2 == 20 )
    return (unsigned int)-1073741804;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return 0;
    v5 = v3 - 1;
    if ( !v5 )
      return (unsigned int)-1073741805;
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( !v8 )
          return (unsigned int)-1073741820;
        v9 = v8 - 4;
        if ( !v9 )
          return (unsigned int)-1073741803;
        if ( v9 == 3 )
          return 0;
      }
      return (unsigned int)-1073741807;
    }
    return (unsigned int)-1073741806;
  }
  return a3;
}
