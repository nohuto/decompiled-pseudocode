/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z @ 0x18002293C
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x1800204C0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002145C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        struct IDuckingController *a2,
        const unsigned __int16 *a3,
        __int64 *a4)
{
  __int64 (__fastcall ***v4)(); // rdx
  __int128 v6; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v8; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-20h]
  struct IDuckingController *v10; // [rsp+98h] [rbp+10h] BYREF

  v10 = a2;
  *(_QWORD *)&v6 = &v10;
  *((_QWORD *)&v6 + 1) = a4;
  v7 = off_18004E388;
  v8 = v6;
  v9 = &v7;
  CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a3, (__int64)&v7);
  if ( v9 )
  {
    v4 = &v7;
    LOBYTE(v4) = v9 != &v7;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v9)[4])(v9, v4);
  }
  return 0LL;
}
