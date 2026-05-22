/*
 * XREFs of ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x18010E090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateNarratorProxy@NarratorProxy@@QEAAJAEAV?$ComPtr@UIMessageFactory@@@WRL@Microsoft@@PEAUIMessageProxyListener@@@Z @ 0x18010CDA8 (-CreateNarratorProxy@NarratorProxy@@QEAAJAEAV-$ComPtr@UIMessageFactory@@@WRL@Microsoft@@PEAUIMes.c)
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x18010CFF4 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::SetOverriderState(KeyboardOverriderDispatcher *this, char a2)
{
  int NarratorProxy; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    NtMITSetKeyboardOverriderState(1LL);
    NarratorProxy = NarratorProxy::CreateNarratorProxy(
                      (__int64 *)this + 55,
                      (_QWORD *)this + 95,
                      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    if ( NarratorProxy < 0 )
    {
      v4 = 325LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardove"
                 "rriderdispatcher.cpp",
        (const char *)(unsigned int)NarratorProxy);
      return (unsigned int)NarratorProxy;
    }
  }
  else
  {
    NarratorProxy = KeyboardOverriderDispatcher::DestroyOverriderProxy(this);
    if ( NarratorProxy < 0 )
    {
      v4 = 329LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
