/*
 * XREFs of ServiceDeviceEvent @ 0x180008F34
 * Callers:
 *     ServiceDeviceEventCallback @ 0x180008DC0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180009020 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800090F0 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180111BB0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ServiceDeviceEvent(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( !v2 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
  if ( !v11 )
    goto LABEL_4;
  v12 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
  if ( !v12 )
  {
LABEL_4:
    if ( *(_DWORD *)(a2 + 4) == 5 )
    {
      v3 = (unsigned int)(a1 - 0x8000);
      if ( !(_DWORD)v3 )
      {
        v4 = PostDeviceEvent(v3);
        v5 = v4;
        if ( v4 >= 0 )
          return 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x219,
          (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)(unsigned int)v4,
          v18);
        v14 = v5;
        v15 = 752LL;
LABEL_27:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)v14,
          v18);
        return 0LL;
      }
      v7 = v3 - 1;
      if ( !v7 )
      {
        v17 = PostDeviceEvent(2LL);
        if ( v17 >= 0 )
          return 0LL;
        v14 = (unsigned int)v17;
        v15 = 757LL;
        goto LABEL_27;
      }
      v8 = v7 - 1;
      if ( !v8 )
        return 0LL;
      v9 = v8 - 1;
      if ( !v9 )
      {
        v16 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
        if ( v16 >= 0 )
          return 0LL;
        v14 = (unsigned int)v16;
        v15 = 760LL;
        goto LABEL_27;
      }
      if ( v9 == 1 )
      {
        v10 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
        if ( v10 >= 0 )
          return 0LL;
        v14 = (unsigned int)v10;
        v15 = 763LL;
        goto LABEL_27;
      }
      v13 = 766LL;
    }
    else
    {
      v13 = 771LL;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
      (const char *)0x80070078LL,
      v18);
  }
  return 0LL;
}
