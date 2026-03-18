/*
 * XREFs of NVMeFreeNamespaceEnumerationContext @ 0x1C001D314
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeNamespaceEnumerationContext(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax

  if ( a2 )
  {
    if ( a3 )
    {
      v5 = (_QWORD *)(a2 + 8);
      v6 = 255LL;
      do
      {
        if ( *v5 )
          StorPortExtendedFunction(1LL, a1, *v5);
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    return StorPortExtendedFunction(1LL, a1, a2);
  }
  return result;
}
