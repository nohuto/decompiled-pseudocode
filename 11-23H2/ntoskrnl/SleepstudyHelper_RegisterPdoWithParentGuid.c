/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1409A24B0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1403B52F0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407A8480 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x1408440B0 (SleepstudyHelperCreateBlockerFromDevice.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentGuid(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        KSPIN_LOCK **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rbx
  int v7; // eax
  int v8; // edi
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  KSPIN_LOCK *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v11 = *a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, &v11, a3, &v10);
    v5 = v10;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = SleepstudyHelperBuildBlocker(v10, &v12);
      if ( v8 >= 0 )
      {
        *a4 = v12;
        return (unsigned int)v8;
      }
      v4 = v12;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
  return (unsigned int)v8;
}
