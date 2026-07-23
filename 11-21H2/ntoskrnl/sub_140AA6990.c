/*
 * XREFs of sub_140AA6990 @ 0x140AA6990
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A8D17C @ 0x140A8D17C (sub_140A8D17C.c)
 */

__int64 __fastcall sub_140AA6990(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  _WORD v4[44]; // [rsp+40h] [rbp-58h] BYREF

  memset(v4, 0, 0x48uLL);
  result = (unsigned int)dword_140C29FC0;
  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    v4[0] = -234;
    return sub_140A8D17C(a1, (__int64)v4, 1, v2, 0LL, 0LL, 0LL);
  }
  return result;
}
