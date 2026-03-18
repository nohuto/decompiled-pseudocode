/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01D60A0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  PDEVICE_OBJECT v4; // rcx
  bool v5; // r10
  bool v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  int v10; // ebx
  __int128 *v11; // r11
  __int64 v12; // r14
  int v13; // r12d
  __int64 v14; // r10
  char *v15; // rsi
  _OWORD *v16; // rdx
  __int128 v17; // xmm0
  __int64 v18; // rcx
  _OWORD *v19; // rdx
  unsigned int v20; // edx
  _DWORD *i; // r8
  __int16 v23; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+40h] [rbp-C8h]
  __int128 v25; // [rsp+50h] [rbp-B8h]
  __int128 v26; // [rsp+60h] [rbp-A8h]
  __int128 v27; // [rsp+70h] [rbp-98h]
  __int128 v28; // [rsp+80h] [rbp-88h]
  __int128 v29; // [rsp+90h] [rbp-78h]
  __int128 v30; // [rsp+A0h] [rbp-68h]
  __int128 v31; // [rsp+B0h] [rbp-58h]
  __int128 v32; // [rsp+C0h] [rbp-48h]
  __int128 v33; // [rsp+D0h] [rbp-38h]

  if ( !a2 )
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v24) = 0;
    LODWORD(v7) = 17;
    v23 = 17;
    goto LABEL_36;
  }
  v5 = 1;
  v8 = 1;
  v9 = a2 / 9;
  if ( a2 / 9 <= 1 )
    goto LABEL_40;
  do
    v8 = 3 * v8 + 1;
  while ( v8 < v9 );
  if ( v8 )
  {
LABEL_40:
    do
    {
      if ( v8 < a2 )
      {
        v10 = 0;
        v11 = (__int128 *)((char *)a1 + 144 * v8);
        do
        {
          v12 = v10;
          v13 = v10;
          v25 = *v11;
          v26 = v11[1];
          v27 = v11[2];
          v28 = v11[3];
          v29 = v11[4];
          v30 = v11[5];
          v31 = v11[6];
          v32 = v11[7];
          v33 = v11[8];
          if ( v10 >= 0 )
          {
            v14 = v10 + v8;
            v15 = (char *)a1 + 144 * v10;
            do
            {
              if ( *((_DWORD *)v15 + 1) <= DWORD1(v25) )
                break;
              v13 -= v8;
              v16 = (_OWORD *)((char *)a1 + 144 * v14);
              v14 = (unsigned int)v14 - v8;
              *v16 = *(_OWORD *)v15;
              v16[1] = *((_OWORD *)v15 + 1);
              v16[2] = *((_OWORD *)v15 + 2);
              v16[3] = *((_OWORD *)v15 + 3);
              v16[4] = *((_OWORD *)v15 + 4);
              v16[5] = *((_OWORD *)v15 + 5);
              v16[6] = *((_OWORD *)v15 + 6);
              v16[7] = *((_OWORD *)v15 + 7);
              v17 = *((_OWORD *)v15 + 8);
              v15 -= 144 * (int)v8;
              v12 -= (int)v8;
              v16[8] = v17;
            }
            while ( v12 >= 0 );
            v5 = 1;
          }
          v18 = v13 + v8;
          if ( v10 + v8 != (_DWORD)v18 )
          {
            v19 = (_OWORD *)((char *)a1 + 144 * v18);
            *v19 = v25;
            v19[1] = v26;
            v19[2] = v27;
            v19[3] = v28;
            v19[4] = v29;
            v19[5] = v30;
            v19[6] = v31;
            v19[7] = v32;
            v19[8] = v33;
          }
          ++v10;
          v11 += 9;
        }
        while ( v10 + v8 < a2 );
      }
      v8 /= 3u;
    }
    while ( v8 );
  }
  v20 = 1;
  if ( a2 <= 1 )
    return 1LL;
  for ( i = (_DWORD *)((char *)a1 + 148); *i != *((_DWORD *)a1 + 36 * v20 - 35); i += 36 )
  {
    if ( ++v20 >= a2 )
      return 1LL;
  }
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 18LL * v20;
    v24 = *((_DWORD *)a1 + 2 * v7 + 1);
    v23 = 18;
LABEL_36:
    LOBYTE(v7) = v5;
    WPP_RECORDER_AND_TRACE_SF_D(
      v4->AttachedDevice,
      v7,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      20,
      v23,
      (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
      v24);
  }
  return 0LL;
}
