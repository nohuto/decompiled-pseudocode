/*
 * XREFs of ServiceDeviceEvent @ 0x18015110C
 * Callers:
 *     ServiceDeviceEventCallback @ 0x180151260 (ServiceDeviceEventCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103150 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180150F9C (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18015100C (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall ServiceDeviceEvent(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( !v2 )
    goto LABEL_10;
  v3 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
  if ( !v3 )
    goto LABEL_10;
  v4 = *(_QWORD *)(a2 + 12) - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a2 + 20) - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
  if ( !v4 )
  {
LABEL_10:
    if ( *(_DWORD *)(a2 + 4) != 5 )
    {
      v9 = 764LL;
      goto LABEL_27;
    }
    v5 = a1 - 0x8000;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
            {
              v9 = 759LL;
LABEL_27:
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)v9,
                (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
                (const char *)0x80070078LL);
              return 0LL;
            }
            v10 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
            if ( v10 < 0 )
            {
              v11 = (unsigned int)v10;
              v12 = 756LL;
LABEL_25:
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)v12,
                (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
                (const char *)v11);
            }
          }
          else
          {
            v13 = OnAudioDeviceRemoval((struct _DEV_BROADCAST_DEVICEINTERFACE_W *)a2);
            if ( v13 < 0 )
            {
              v11 = (unsigned int)v13;
              v12 = 753LL;
              goto LABEL_25;
            }
          }
        }
      }
      else
      {
        v14 = PostDeviceEvent(2, (unsigned int *)a2);
        if ( v14 < 0 )
        {
          v11 = (unsigned int)v14;
          v12 = 750LL;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v15 = PostDeviceEvent(0, (unsigned int *)a2);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x212,
          (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)(unsigned int)v15);
        v11 = v16;
        v12 = 745LL;
        goto LABEL_25;
      }
    }
  }
  return 0LL;
}
