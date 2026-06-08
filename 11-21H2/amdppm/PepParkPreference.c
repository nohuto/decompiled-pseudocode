/*
 * XREFs of PepParkPreference @ 0x1C000AF20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned int v12; // esi
  int v13; // r8d
  __int64 v14; // r13
  unsigned int v15; // r14d
  char *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  _DWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  char v25; // [rsp+68h] [rbp-8h]
  int v26; // [rsp+69h] [rbp-7h]
  __int16 v27; // [rsp+6Dh] [rbp-3h]
  char v28; // [rsp+6Fh] [rbp-1h]

  v8 = 0;
  v21 = 0LL;
  result = (unsigned int)dword_1C0011A78;
  v20 = 0LL;
  v19 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( dword_1C0011A78 >= (unsigned int)dword_1C0011454 )
  {
    result = KeCountSetBitsAffinityEx(a4);
    v12 = result;
    if ( (_DWORD)result )
    {
      result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
      if ( a3 > (unsigned int)result && a3 < v12 )
      {
        v13 = v12;
        if ( v12 < 4 )
          v13 = 4;
        memset(PepParkLists, 0, (unsigned int)(16 * v13));
        v14 = 0LL;
        v15 = 0;
        KeInitializeEnumerationContext(&v20, a4);
        result = KeEnumerateNextProcessor(&v19, &v20);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v15 >= v12 )
              break;
            v16 = &PepParkLists[16 * v15];
            v14 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v19);
            *(_QWORD *)v16 = *(_QWORD *)(v14 + 1120);
            v16[9] = 0;
            if ( a6 && (unsigned int)KeCheckProcessorAffinityEx(a6) )
            {
              v17 = a3 - 1;
              v16[8] = 2;
              v8 = 0;
              if ( !a3 )
                v17 = 0;
              a3 = v17;
            }
            else
            {
              v16[8] = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5);
              v8 = 0;
            }
            ++v15;
            result = KeEnumerateNextProcessor(&v19, &v20);
          }
          while ( !(_DWORD)result );
          if ( v15 && v14 )
          {
            v25 = a1;
            v22[0] = a3;
            v24 = a2;
            v22[1] = v15;
            v23 = PepParkLists;
            result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C00117B0)(*(_QWORD *)(v14 + 1120), v22);
            if ( (int)result < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return WPP_RECORDER_SF_d(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         3u,
                         2u,
                         0x11u,
                         (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
                         result);
              return result;
            }
            KeInitializeEnumerationContext(&v20, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v19, &v20);
              if ( (_DWORD)result || v8 >= v12 )
                return result;
              if ( PepParkLists[16 * v8 + 9] == 1 )
              {
                v18 = a7;
              }
              else
              {
                if ( PepParkLists[16 * v8 + 9] != 2 )
                  goto LABEL_35;
                v18 = a8;
              }
              KeAddProcessorAffinityEx(v18, v19);
LABEL_35:
              ++v8;
            }
          }
        }
      }
    }
  }
  return result;
}
