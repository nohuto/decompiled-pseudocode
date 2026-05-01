/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E
 * Callers:
 *     _lambda_666d22edc2a9b06a02075e2b448fb99f_::operator() @ 0x1801B02D8 (_lambda_666d22edc2a9b06a02075e2b448fb99f_--operator().c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator() @ 0x1801B0638 (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--operator().c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180461AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180462080 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180462280 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180463360 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18038667C (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180460EE0 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
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
    Microsoft::WRL::ComPtr<IAppResizeView>::operator=(a3, (char *)*Ptr + 8);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
