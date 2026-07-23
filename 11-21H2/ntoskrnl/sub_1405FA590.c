/*
 * XREFs of sub_1405FA590 @ 0x1405FA590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405F655C @ 0x1405F655C (sub_1405F655C.c)
 */

__int64 __fastcall sub_1405FA590(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  const void *v7; // rdx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h]

  v3 = *a1;
  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(v3 + 96) )
  {
    v6 = v3 - 1448;
    v7 = *(const void **)(v3 - 1448);
    if ( !v7 )
      return result;
  }
  else
  {
    v6 = v3 - 1376;
    v7 = *(const void **)(v3 - 1376);
    if ( !v7 )
      return result;
  }
  return sub_1405F655C(v6, v7, &v8, a2, a3);
}
