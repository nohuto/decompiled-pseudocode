/*
 * XREFs of ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1803967C0
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x180392A80 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *this,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, SID *, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = ppv;
    v8 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, char *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
    v4 = v8(v7, &SID_ImmersiveRawInputProvider, &GUID_c1235996_b084_4af2_8663_28f19352097e, (char *)this + 48);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *, __int64, char *))(**((_QWORD **)this + 6) + 24LL))(
             *((_QWORD *)this + 6),
             this,
             1LL,
             (char *)this + 56);
      v5 = v4;
      if ( v4 >= 0 )
      {
        *((_QWORD *)this + 5) = a2;
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 571LL;
    }
    else
    {
      v6 = 569LL;
    }
  }
  else
  {
    v6 = 568LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v5;
}
