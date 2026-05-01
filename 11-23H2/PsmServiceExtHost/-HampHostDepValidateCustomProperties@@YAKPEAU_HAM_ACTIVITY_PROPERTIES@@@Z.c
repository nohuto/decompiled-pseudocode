/*
 * XREFs of ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18008031C
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800716DC (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800026F4 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall HampHostDepValidateCustomProperties(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  unsigned int v2; // edi
  _BYTE Buf1[40]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v5; // [rsp+48h] [rbp-1h]
  __int64 v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+78h] [rbp+2Fh]

  v2 = 0;
  if ( !(unsigned int)HampUtilCheckAndSanitizeActivityProperties(a1)
    || (*(_DWORD *)a1 & 0xFF7FD9BF) != 0
    || *((_DWORD *)a1 + 1)
    || *((_DWORD *)a1 + 2)
    || *((_WORD *)a1 + 70)
    || *((_DWORD *)a1 + 67) != 5
    || *((_DWORD *)a1 + 68) )
  {
    return 0LL;
  }
  memset_0(Buf1, 0, 0x68uLL);
  v10 = 33LL;
  v5 = 128LL;
  v8 = -1LL;
  v9 = 0xFFFFFFFFFFFFFFFFuLL;
  v7 = -1LL;
  v6 = -1LL;
  LOBYTE(v2) = memcmp_0(Buf1, (char *)a1 + 280, 0x68uLL) == 0;
  return v2;
}
