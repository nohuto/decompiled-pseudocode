/*
 * XREFs of VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000CF00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000CF80 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

__int64 __fastcall VidSchiUpdateNodeRunningTimeAtISR(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1556) + 1568);
  result = 0LL;
  if ( v5 )
  {
    v8[0] = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v8[1] = v5;
    result = VidSchiUpdateContextRunningTimeAtISR(v8, a2, a3);
    a1[3] = v10;
    v7 = v9;
    a1[1] = v5;
  }
  else
  {
    a1[1] = 0LL;
    a1[3] = 0LL;
    v7 = *(_QWORD *)(v4 + 2648);
  }
  a1[2] = v7;
  return result;
}
