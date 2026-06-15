/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180022A38
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x1800206B0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x180020C9C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002164C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]
  __int64 *v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = a3;
  v5[0] = off_18004F418;
  v5[1] = &v7;
  v6 = v5;
  CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a2, (__int64)v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return 0LL;
}
