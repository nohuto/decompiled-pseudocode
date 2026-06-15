/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x18000A450
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        void (__fastcall ***a2)(struct IAudioProcess *, GUID *, __int64 **),
        unsigned int a3)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  void (__fastcall **v8)(struct IAudioProcess *, GUID *, __int64 **); // rax
  __int64 v9; // rax
  int v10; // eax
  BOOL v11; // ebx
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *a2;
  v13 = 0LL;
  (*v8)((struct IAudioProcess *)a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v13);
  v9 = *v13;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v9 + 24))(v13, &v14) >= 0 )
  {
    v4 = *(_DWORD *)(v14 + 460);
    v5 = *(_DWORD *)(v14 + 444);
    v6 = *(_DWORD *)(v14 + 464);
    v7 = *(_DWORD *)(*(_QWORD *)(v14 + 224) + 208LL) & 0x20;
  }
  v11 = (a3 > 0x13 || (v10 = 933936, !_bittest(&v10, a3))) && !v4 && !v5 && !v6 && !v7;
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  return v11;
}
