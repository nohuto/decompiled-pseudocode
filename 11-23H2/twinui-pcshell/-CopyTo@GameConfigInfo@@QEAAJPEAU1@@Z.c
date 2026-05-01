/*
 * XREFs of ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x180049C48
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GameConfigInfo::CopyTo(GameConfigInfo *this, struct GameConfigInfo *a2)
{
  HRESULT v3; // edi
  HSTRING v4; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)a2 = *(_BYTE *)this;
  *((_BYTE *)a2 + 1) = *((_BYTE *)this + 1);
  *((_BYTE *)a2 + 2) = *((_BYTE *)this + 2);
  *((_BYTE *)a2 + 3) = *((_BYTE *)this + 3);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 4);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 2);
  *((_BYTE *)a2 + 5) = *((_BYTE *)this + 5);
  *((_BYTE *)a2 + 6) = *((_BYTE *)this + 6);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  v3 = WindowsDuplicateString(*((HSTRING *)this + 4), &newString);
  if ( v3 >= 0 )
  {
    v4 = (HSTRING)*((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = newString;
    WindowsDeleteString(v4);
  }
  return (unsigned int)v3;
}
