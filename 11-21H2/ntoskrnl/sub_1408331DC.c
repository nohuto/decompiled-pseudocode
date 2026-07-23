/*
 * XREFs of sub_1408331DC @ 0x1408331DC
 * Callers:
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 *     sub_140833110 @ 0x140833110 (sub_140833110.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1408331DC(volatile __int64 *a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // zf
  void *v8; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v9[68]; // [rsp+40h] [rbp-C0h] BYREF

  result = memset(&v9[2], 0, 0x100uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    v9[0] = 2097153;
    memset(&v9[1], 0, 0x104uLL);
    sub_1402D990C((unsigned __int16 *)v9);
    sub_1402FEDA0(dword_140D06E40, (char *)v9, v9, HIWORD(v9[0]));
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v9, HIDWORD(KeGetPcr()[1].LockArray));
    if ( !(unsigned int)KeIsEmptyAffinityEx(v9) )
      sub_14035BB4C(v9, (__int64)_misaligned_access, 0LL, 0);
    v6 = _InterlockedExchangeAdd64(a1 + 1, v5);
    v7 = v5 + v6 == 0;
    result = (void *)(v5 + v6);
    v8 = result;
    if ( !v7 )
    {
      do
      {
        ExBlockOnAddressPushLock((__int64)(a1 + 2), (_QWORD *)a1 + 1, &v8, 8uLL, 0LL);
        result = (void *)*((_QWORD *)a1 + 1);
        v8 = result;
      }
      while ( result );
    }
  }
  return result;
}
