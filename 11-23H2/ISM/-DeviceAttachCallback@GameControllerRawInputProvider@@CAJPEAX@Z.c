/*
 * XREFs of ?DeviceAttachCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800CCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::DeviceAttachCallback(char *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !GameControllerRawInputProvider::s_instance )
    return 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 5) + 40LL))(
         *((_QWORD *)GameControllerRawInputProvider::s_instance + 5),
         a1 + 16);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x284,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
