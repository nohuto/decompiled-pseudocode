/*
 * XREFs of ?ndisDereferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C00110D4
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceWithTagCompact(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // r9
  char v5; // al

  v2 = *(_QWORD *)(BugCheckParameter3 + 8);
  if ( v2 && (v3 = *(_BYTE *)(BugCheckParameter3 + 3), v4 = 0, v3) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v2 + 2LL * v4) == a2 )
      {
        v5 = *(_BYTE *)(v2 + 2LL * v4 + 1);
        if ( v5 )
          break;
      }
      if ( ++v4 >= v3 )
        goto LABEL_5;
    }
    *(_BYTE *)(v2 + 2LL * v4 + 1) = v5 - 1;
  }
  else
  {
LABEL_5:
    if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
      ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
  }
}
