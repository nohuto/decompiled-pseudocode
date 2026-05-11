/*
 * XREFs of USBMIDICreateEventPackets @ 0x1C003B4A0
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C0007EC8 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C0007C78 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r11
  _DWORD *v6; // r12
  __int64 v7; // r10
  unsigned int v8; // eax
  __int64 v9; // rsi
  char v10; // r8
  unsigned int v11; // ebp
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // r15d
  int v15; // ebx
  __int64 v16; // rax
  char v17; // dl
  char v18; // r8
  int v20; // [rsp+20h] [rbp-98h]
  int v21; // [rsp+28h] [rbp-90h]
  int v22; // [rsp+30h] [rbp-88h]
  char v23; // [rsp+60h] [rbp-58h]
  unsigned int v24; // [rsp+64h] [rbp-54h]
  unsigned int *v27; // [rsp+D0h] [rbp+18h]
  char v28; // [rsp+D8h] [rbp+20h]

  v27 = a3;
  v3 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = *(_DWORD **)(a2 + 48);
  v7 = a1;
  v8 = *(_DWORD *)(a2 + 36) >> 2;
  v24 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 152LL);
  v10 = 0;
  v28 = 0;
  if ( !*(_DWORD *)(v9 + 72) )
    goto LABEL_4;
  if ( (*(_BYTE *)(v4 + 8) & 0xF8) == 0xF8 )
  {
    v8 = *(_DWORD *)(a2 + 36) >> 2;
    v28 = 1;
    *(_BYTE *)(v9 + 68) = 0;
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  *v6 = *(_DWORD *)(v9 + 76);
  v11 = *(_DWORD *)(v9 + 72);
  v28 = 0;
LABEL_5:
  v12 = *(_DWORD *)(v4 + 4);
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    do
    {
      if ( v14 >= v8 )
        break;
      v23 = 0;
      if ( v11 )
      {
        v15 = 1;
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 69) || (v15 = 0, *(char *)(v13 + v4 + 8) < 0) )
          v15 = 1;
        *(_BYTE *)v6 = 16 * *(_BYTE *)(v9 + 20);
      }
      do
      {
        if ( v13 >= *(_DWORD *)(v4 + 4) )
          break;
        v16 = v11++;
        LOBYTE(a3) = *(_BYTE *)(v13 + v4 + 8);
        v13 += v15;
        v23 = ((__int64 (__fastcall *)(__int64, _DWORD *, unsigned int *))USBMidiOutCreateByte[v16])(v9, v6, a3);
        v15 = 1;
      }
      while ( !v23 );
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 )
      {
        v17 = 1;
        if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          continue;
      }
      v17 = 0;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = 1;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          continue;
      }
      v18 = 0;
      if ( v17 || v18 )
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v21,
          v22,
          (__int64)&WPP_991a5ee278e9311741fc96465d7a29e8_Traceguids);
      v10 = v23;
      if ( v23 )
        v11 = 0;
      else
        *(_DWORD *)(v9 + 76) = *v6;
      v12 = *(_DWORD *)(v4 + 4);
      ++v6;
      v8 = v24;
      ++v14;
    }
    while ( v13 < v12 );
    v5 = a2;
    v3 = v27;
    if ( v10 )
    {
      if ( v13 == v12 )
        v13 = *(_DWORD *)(a1 + 44);
      else
        *(_DWORD *)(v13 + *(_QWORD *)(a1 + 32) + 4LL) = v12 - v13;
      goto LABEL_36;
    }
    v7 = a1;
  }
  v13 = *(_DWORD *)(v7 + 44);
  --v14;
LABEL_36:
  *v3 = v13;
  if ( v28 )
    *(_BYTE *)(v9 + 68) = 1;
  else
    *(_DWORD *)(v9 + 72) = v11;
  *(_DWORD *)(*(_QWORD *)(v5 + 24) + 36LL) += 4 * v14;
  return v10;
}
