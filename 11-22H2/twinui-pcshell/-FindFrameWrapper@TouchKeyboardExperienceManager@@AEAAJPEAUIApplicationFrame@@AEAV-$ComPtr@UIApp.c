/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E
 * Callers:
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::operator() @ 0x180206E60 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--operator().c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     _lambda_58f4954a35e6992b2fe1d34b610efbe6_::operator() @ 0x180207A7C (_lambda_58f4954a35e6992b2fe1d34b610efbe6_--operator().c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802DBE70 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802DC070 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180514450 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802D4FA4 (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1802DBE36 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v8; // rbp
  unsigned int v9; // ebx

  v6 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (KBViewInfo **)a1[54].Ptr;
  v8 = (KBViewInfo **)a1[55].Ptr;
  while ( Ptr != v8
       && (!KBViewInfo::IsValid(*Ptr)
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*Ptr + 1) + 24LL))(*((_QWORD *)*Ptr + 1), a2) != 1) )
    Ptr += 2;
  if ( Ptr == a1[55].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppResizeView>::operator=(a3, (__int64 *)*Ptr + 1);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
