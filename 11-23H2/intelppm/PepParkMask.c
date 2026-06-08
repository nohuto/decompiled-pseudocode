/*
 * XREFs of PepParkMask @ 0x1C0005F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 */

__int64 __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r14
  _DWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  void *v10; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  unsigned int v13; // [rsp+A0h] [rbp+40h] BYREF

  result = 0LL;
  v13 = 0;
  v8[1] = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !PepSkipParkNotification )
  {
    result = (unsigned int)dword_1C001F668;
    if ( dword_1C001F668 >= (unsigned int)dword_1C001F014 )
    {
      memset(&PepParkLists, 0, (unsigned int)(16 * dword_1C001F014));
      v5 = 0;
      KeInitializeEnumerationContext(&v11, &unk_1C001F420);
      result = KeEnumerateNextProcessor(&v13, &v11);
      if ( !(_DWORD)result )
      {
        do
        {
          v6 = v13;
          v7 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v13);
          *((_QWORD *)&PepParkLists + 2 * v5) = *(_QWORD *)(v7 + 1120);
          *((_BYTE *)&PepParkLists + 16 * v5++ + 8) = KeCheckProcessorAffinityEx(a2, v6);
          result = KeEnumerateNextProcessor(&v13, &v11);
        }
        while ( !(_DWORD)result );
        if ( v5 )
        {
          v9 = a1;
          v8[0] = v5;
          v10 = &PepParkLists;
          result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C001F388)(*(_QWORD *)(v7 + 1120), v8);
          if ( (int)result < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         4u,
                         2u,
                         0x12u,
                         (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
                         result);
            PepSkipParkNotification = 1;
          }
        }
      }
    }
  }
  return result;
}
