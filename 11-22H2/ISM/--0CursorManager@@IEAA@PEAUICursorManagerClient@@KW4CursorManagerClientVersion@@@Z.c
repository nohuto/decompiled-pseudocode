/*
 * XREFs of ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x180182E74
 * Callers:
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18018309C (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CursorManager::CursorManager(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CursorManager::`vftable'{for `ICursorManager'};
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 8) = &CursorManager::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *(_QWORD *)(a1 + 16) = &CursorManager::`vftable'{for `RefCountedObject'};
  v4 = (__int64 *)(a1 + 32);
  *(_BYTE *)(a1 + 84) = 0;
  *v4 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v4);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = 2;
  return result;
}
