/*
 * XREFs of ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x180139680
 * Callers:
 *     _lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator() @ 0x180139528 (_lambda_a38aae5e6c9958ce849327ccd84fd2a2_--operator().c)
 *     _lambda_cf8fce5bcb9a969599706c6ca6cec37d_::operator() @ 0x1804130B4 (_lambda_cf8fce5bcb9a969599706c6ca6cec37d_--operator().c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
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
