/*
 * XREFs of XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0037990
 * Callers:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

_UNKNOWN **__fastcall XilEndpoint_SendRequestToFreeSecureStreamContextArray(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v3 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
  v7 = 0LL;
  v11 = 0;
  v9 = a2;
  v8 = 0LL;
  v10 = 38;
  result = (_UNKNOWN **)SecureChannel_SendRequestSynchronously(v3, &v7, 40LL, 0LL, 0);
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      LOBYTE(v6) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_DD(
                            *(_QWORD *)(v5 + 80),
                            v6,
                            13,
                            14,
                            (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
                            *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
                            *(_DWORD *)(v5 + 144));
    }
  }
  return result;
}
