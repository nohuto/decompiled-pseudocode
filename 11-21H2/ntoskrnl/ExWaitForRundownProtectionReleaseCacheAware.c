/*
 * XREFs of ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100
 * Callers:
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_1405E364C @ 0x1405E364C (sub_1405E364C.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1407FBE14 @ 0x1407FBE14 (sub_1407FBE14.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

void __stdcall ExWaitForRundownProtectionReleaseCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRef)
{
  unsigned __int64 v1; // r9
  unsigned int v2; // r8d
  unsigned int v3; // r11d
  int v4; // edx
  __int64 v5; // rax
  signed __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h]

  v6 = 0LL;
  v1 = 0LL;
  v2 = *((_DWORD *)RunRef + 5);
  v3 = 0;
  Object = 0LL;
  v8 = 0LL;
  if ( v2 )
  {
    do
    {
      v4 = v3 % v2;
      ++v3;
      v5 = _InterlockedExchange64(
             (volatile __int64 *)(*(_QWORD *)RunRef + (unsigned int)(*((_DWORD *)RunRef + 4) * v4)),
             (__int64)&v6 + 1);
      v2 = *((_DWORD *)RunRef + 5);
      v1 += v5;
    }
    while ( v3 < v2 );
    if ( v1 )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v8 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      if ( _InterlockedExchangeAdd64(&v6, v1 >> 1) != -(__int64)(v1 >> 1) )
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
  }
}
