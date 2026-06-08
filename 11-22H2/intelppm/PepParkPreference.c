/*
 * XREFs of PepParkPreference @ 0x1C000E6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
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
  __int64 v16; // rdx
  char *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  _DWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+68h] [rbp-8h]
  int v27; // [rsp+69h] [rbp-7h]
  __int16 v28; // [rsp+6Dh] [rbp-3h]
  char v29; // [rsp+6Fh] [rbp-1h]

  v8 = 0;
  v22 = 0LL;
  result = (unsigned int)dword_1C001F668;
  v21 = 0LL;
  v20 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( dword_1C001F668 < (unsigned int)dword_1C001F014 )
    return result;
  result = KeCountSetBitsAffinityEx(a4);
  v12 = result;
  if ( !(_DWORD)result )
    return result;
  result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
  if ( a3 <= (unsigned int)result || a3 >= v12 )
    return result;
  v13 = v12;
  if ( v12 < 4 )
    v13 = 4;
  memset(PepParkLists, 0, (unsigned int)(16 * v13));
  v14 = 0LL;
  v15 = 0;
  KeInitializeEnumerationContext(&v21, a4);
  result = KeEnumerateNextProcessor(&v20, &v21);
  if ( (_DWORD)result )
    return result;
  while ( v15 < v12 )
  {
    v16 = v20;
    v17 = &PepParkLists[16 * v15];
    v14 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v20);
    *(_QWORD *)v17 = *(_QWORD *)(v14 + 1120);
    v17[9] = 0;
    if ( !a6 )
      goto LABEL_18;
    if ( !(unsigned int)KeCheckProcessorAffinityEx(a6, v16) )
    {
      v16 = v20;
LABEL_18:
      v17[8] = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v16);
      v8 = 0;
      goto LABEL_23;
    }
    v18 = a3 - 1;
    v17[8] = 2;
    v8 = 0;
    if ( !a3 )
      v18 = 0;
    a3 = v18;
LABEL_23:
    ++v15;
    result = KeEnumerateNextProcessor(&v20, &v21);
    if ( (_DWORD)result )
      break;
  }
  if ( v15 && v14 )
  {
    v26 = a1;
    v23[0] = a3;
    v25 = a2;
    v23[1] = v15;
    v24 = PepParkLists;
    result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C001F380)(*(_QWORD *)(v14 + 1120), v23);
    if ( (int)result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 2u,
                 0x11u,
                 (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
                 result);
      return result;
    }
    KeInitializeEnumerationContext(&v21, a4);
    while ( 2 )
    {
      result = KeEnumerateNextProcessor(&v20, &v21);
      if ( (_DWORD)result || v8 >= v12 )
        return result;
      if ( PepParkLists[16 * v8 + 9] == 1 )
      {
        v19 = a7;
LABEL_35:
        KeAddProcessorAffinityEx(v19, v20);
      }
      else if ( PepParkLists[16 * v8 + 9] == 2 )
      {
        v19 = a8;
        goto LABEL_35;
      }
      ++v8;
      continue;
    }
  }
  return result;
}
