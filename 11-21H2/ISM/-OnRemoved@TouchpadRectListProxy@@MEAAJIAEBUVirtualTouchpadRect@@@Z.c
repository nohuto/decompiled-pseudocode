/*
 * XREFs of ?OnRemoved@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130710
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x18019DFE4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall TouchpadRectListProxy::OnRemoved(
        TouchpadRectListProxy *this,
        __int64 a2,
        const struct VirtualTouchpadRect *a3)
{
  VirtualTouchpadContextProvider *Instance; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = VirtualTouchpadContextProvider::OnTouchpadRemoved(Instance, *(_QWORD *)a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      38LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\touchpadrectlistproxy.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
