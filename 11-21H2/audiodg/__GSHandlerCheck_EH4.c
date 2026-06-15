/*
 * XREFs of __GSHandlerCheck_EH4 @ 0x140032078
 * Callers:
 *     <none>
 * Callees:
 *     __GSHandlerCheckCommon @ 0x140030750 (__GSHandlerCheckCommon.c)
 *     __CxxFrameHandler4_0 @ 0x1400307E6 (__CxxFrameHandler4_0.c)
 */

__int64 __fastcall _GSHandlerCheck_EH4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  _GSHandlerCheckCommon(a2, a4);
  result = 1LL;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return _CxxFrameHandler4_0();
  return result;
}
