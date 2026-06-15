/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x1800106B0
 * Callers:
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18001099C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(
        CDuckingManager *this,
        struct IDuckingController *a2,
        const unsigned __int16 *a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  __int128 v5; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v7; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+68h] [rbp-20h]
  struct IDuckingController *v9; // [rsp+98h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)&v5 = this;
  *((_QWORD *)&v5 + 1) = &v9;
  v6 = off_180047D20;
  v7 = v5;
  v8 = &v6;
  CDuckingManager::ForEachDuckableSession(this, a3, &v6);
  if ( v8 )
  {
    v3 = &v6;
    LOBYTE(v3) = v8 != &v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v3);
  }
  return 0LL;
}
