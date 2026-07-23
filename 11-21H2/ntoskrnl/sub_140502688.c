/*
 * XREFs of sub_140502688 @ 0x140502688
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_1402A1080 @ 0x1402A1080 (sub_1402A1080.c)
 *     sub_1405029CC @ 0x1405029CC (sub_1405029CC.c)
 */

__int64 __fastcall sub_140502688(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  _BYTE *v9; // rsi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  result = sub_1405029CC(a1, a2, &v10);
  if ( (int)result >= 0 )
  {
    v8 = 256 - v10;
    v9 = (_BYTE *)(v10 + v7);
    if ( v10 == 256 || v10 == 255 )
    {
      if ( !v7 )
        return 3221225485LL;
      result = 2147483653LL;
    }
    else
    {
      v10 = 0LL;
      result = sub_1402A1080(v9, v8, &v10, (__int64)qword_140B31870);
      v9 += v10;
      v8 -= v10;
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2147483643 )
        return result;
    }
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = v8;
  }
  return result;
}
