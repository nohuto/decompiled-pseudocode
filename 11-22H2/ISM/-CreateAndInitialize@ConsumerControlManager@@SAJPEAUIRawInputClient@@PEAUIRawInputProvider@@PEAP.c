/*
 * XREFs of ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800F9184
 * Callers:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004B910 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x1800457C0 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x1800F9008 (--4-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800F92BC (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800F9750 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlManager::CreateAndInitialize(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct ConsumerControlManager **a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (__int64 *)RefCountedObject::operator new(0x88uLL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = (__int64)&RefCountedObject::`vftable';
    *((_DWORD *)v6 + 2) = 1;
    *v6 = (__int64)&ConsumerControlManager::`vftable';
    v6[4] = 0LL;
    v6[3] = (__int64)(v6 + 2);
    v6[2] = (__int64)(v6 + 2);
    v6[7] = 0LL;
    v6[6] = (__int64)(v6 + 5);
    v6[5] = (__int64)(v6 + 5);
    v6[10] = 0LL;
    v6[9] = (__int64)(v6 + 8);
    v6[8] = (__int64)(v6 + 8);
    v6[11] = 0LL;
    v6[12] = 0LL;
    *((_BYTE *)v6 + 104) = 0;
    v6[14] = 0LL;
    v6[15] = 0LL;
    v6[16] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v7 + 14, (__int64)a1);
    Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(v7 + 16, (__int64)a2);
    v9 = ConsumerControlManager::Initialize((ULONG_PTR)v7);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = (struct ConsumerControlManager *)v7;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v9);
      ConsumerControlManager::Release((ULONG_PTR)v7);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
