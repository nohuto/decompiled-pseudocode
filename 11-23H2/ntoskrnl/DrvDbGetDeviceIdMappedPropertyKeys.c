/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A6B7A8
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1408764E0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140877D4C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x140A6B724 (DrvDbGetCompositeMappedPropertyKeys.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140A6CC18 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rsi
  HANDLE v8; // rax
  int CompositeMappedPropertyKeys; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v14 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDeviceIdRegKey(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_9;
    v8 = Handle[0];
  }
  CompositeMappedPropertyKeys = PnpCtxRegQueryInfoKey((__int64)&v14, v8, 0LL, 0LL, &v14, 0LL, 0LL);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v11 = a5;
    if ( !v14
      || (CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                          v10,
                                          (_OWORD **)off_140C096F8,
                                          3u,
                                          a4,
                                          a5,
                                          v6),
          CompositeMappedPropertyKeys >= 0) )
    {
      if ( v11 < *v6 )
        CompositeMappedPropertyKeys = -1073741789;
    }
  }
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)CompositeMappedPropertyKeys;
}
