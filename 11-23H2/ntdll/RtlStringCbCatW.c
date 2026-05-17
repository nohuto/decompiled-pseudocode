/*
 * XREFs of RtlStringCbCatW @ 0x18007F404
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18007F298 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D649C (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x18007F4B0 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCbCatW(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r11
  _WORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int16 v11; // ax
  _WORD *v12; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    return 3221225485LL;
  result = RtlStringLengthWorkerW(a1, a2 >> 1, &v13);
  if ( (int)result >= 0 )
  {
    v7 = (_WORD *)(a1 + 2 * v13);
    v8 = v6 - v13;
    if ( v6 != v13 )
    {
      v9 = 2147483646LL;
      v10 = a3 - (_QWORD)v7;
      do
      {
        if ( !v9 )
          break;
        v11 = *(_WORD *)((char *)v7 + v10);
        if ( !v11 )
          break;
        *v7 = v11;
        --v9;
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    v12 = v7 - 1;
    if ( v8 )
      v12 = v7;
    *v12 = 0;
    return v8 == 0 ? 0x80000005 : 0;
  }
  return result;
}
