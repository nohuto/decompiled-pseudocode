/*
 * XREFs of ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x18019C118
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0 (_lambda_e1e333736bfc613a027e396b29f06629_--operator().c)
 *     _lambda_1be1e40747901402039ac9a9af83119a_::operator() @ 0x1804E5CE0 (_lambda_1be1e40747901402039ac9a9af83119a_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804ED04C (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     <none>
 */

void __fastcall LightweightPropertySet::PushLightweightPropertiesToWindow(LightweightPropertySet *this, HWND a2)
{
  unsigned __int64 i; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  const WCHAR *StringRawBuffer; // rax

  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    v6 = *(_DWORD *)(v5 + 16);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
    SetPropW(a2, StringRawBuffer, (HANDLE)v6);
  }
}
