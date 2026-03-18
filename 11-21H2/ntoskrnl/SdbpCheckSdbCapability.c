/*
 * XREFs of SdbpCheckSdbCapability @ 0x140A122E0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpIsSdbCapabilityPresent @ 0x140A12B34 (SdbpIsSdbCapabilityPresent.c)
 */

__int64 __fastcall SdbpCheckSdbCapability(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v13 = 0;
  v9 = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      SdbpIsSdbCapabilityPresent(&v13, a2, StringTagPtr);
      v9 = v13;
      v8 = 1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}
