/*
 * XREFs of GetClassPtr @ 0x1C0070980
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     _GetClassInfoEx @ 0x1C007F338 (_GetClassInfoEx.c)
 *     _GetWOWClass @ 0x1C01E38C8 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C00714A8 (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int16 v5; // bx
  __int64 result; // rax
  __int64 v7; // rdi

  v3 = a2 + 344;
  v5 = a1;
  result = InnerGetClassPtr(a1, a2 + 344, a3);
  if ( !result )
  {
    result = InnerGetClassPtr(v5, a2 + 352, 0LL);
    if ( !result )
    {
      v7 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
      result = InnerGetClassPtr(v5, v3, *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock);
      if ( !result )
        return InnerGetClassPtr(v5, a2 + 352, v7);
    }
  }
  return result;
}
