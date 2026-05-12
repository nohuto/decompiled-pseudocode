/*
 * XREFs of PortPassThroughGetDataBuffer @ 0x1C0088E34
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C00889F4 (PortPassThroughSendAsync.c)
 *     PortPassThroughValidate @ 0x1C0088D2C (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughGetDataBuffer(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a3 )
      return v4;
    else
      return v4 + *(_QWORD *)(a2 + 24);
  }
  return result;
}
