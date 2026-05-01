/*
 * XREFs of ??0?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800C81FC
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x1800C835C (_lambda_4181134c5161f261fff3e61f273c9fd8_--_lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  void **v2; // r14
  bool v5; // zf
  void *v7; // rbx
  HANDLE ProcessHeap; // rax

  *(_DWORD *)a1 = 0;
  v2 = (void **)(a1 + 56);
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  v5 = *(_BYTE *)(a1 + 64) == 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  if ( !v5 )
  {
    v7 = *v2;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    *(_BYTE *)(a1 + 64) = 0;
  }
  *v2 = 0LL;
  *v2 = *(void **)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(a2 + 64) = 0;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  *(_QWORD *)(a2 + 232) = 0LL;
  *(_QWORD *)(a2 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  return a1;
}
