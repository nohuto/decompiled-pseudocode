/*
 * XREFs of sub_1403DCC38 @ 0x1403DCC38
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_1402A1080 @ 0x1402A1080 (sub_1402A1080.c)
 *     sub_1403DCCB0 @ 0x1403DCCB0 (sub_1403DCCB0.c)
 */

__int64 sub_1403DCC38(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // r8d
  __int64 v4; // r9
  _BYTE *v5; // r10
  int v6; // eax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  _QWORD *v10; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD *);
  v3 = sub_1403DCCB0(a1, 256LL, a3, 0LL);
  if ( v3 < 0 )
  {
    *v5 = v4;
  }
  else
  {
    v8 &= v4;
    v6 = sub_1402A1080(v5, 256LL, (__int64 *)va, (__int64)qword_140B31890);
    v3 = v6;
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    {
      if ( v10 )
        *v10 = 256 - v8;
    }
  }
  return (unsigned int)v3;
}
