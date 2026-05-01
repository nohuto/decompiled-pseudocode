/*
 * XREFs of ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182EB0
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182CF8 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool __fastcall BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(BroadcastDVRComponent *this)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx
  ULONGLONG v4; // rsi
  bool v6; // di
  bool v7; // zf
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  TickCount64 = GetTickCount64();
  v3 = *((_QWORD *)this + 63);
  v4 = TickCount64;
  if ( !v3 || TickCount64 >= v3 + 43200000 )
  {
    v6 = 1;
    v8 = 1;
    v9 = 1;
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Policies\\Microsoft\\Windows\\GameDVR", L"AllowGameDVR", &v8) >= 0 )
    {
      v7 = v8 == 0;
    }
    else
    {
      if ( (int)PolicyManager_GetPolicyInt(L"ApplicationManagement", L"AllowGameDVR", &v9) < 0 )
      {
LABEL_8:
        *((_BYTE *)this + 446) = v6;
        *((_QWORD *)this + 63) = v4;
        return *((_BYTE *)this + 446);
      }
      v7 = v9 == 0;
    }
    v6 = !v7;
    goto LABEL_8;
  }
  return *((_BYTE *)this + 446);
}
