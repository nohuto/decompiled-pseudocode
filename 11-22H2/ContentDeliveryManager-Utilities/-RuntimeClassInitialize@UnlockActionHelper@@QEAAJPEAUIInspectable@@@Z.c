/*
 * XREFs of ?RuntimeClassInitialize@UnlockActionHelper@@QEAAJPEAUIInspectable@@@Z @ 0x1800A7694
 * Callers:
 *     ??$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVUnlockActionHelper@@AEAPEAUIInspectable@@@Z @ 0x18004DB98 (--$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UnlockActionHelper::RuntimeClassInitialize(UnlockActionHelper *this, struct IInspectable *a2)
{
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  QueryInterface = a2->lpVtbl->QueryInterface;
  v4 = (_QWORD *)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  *v4 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, _QWORD *))QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6,
         v4);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
