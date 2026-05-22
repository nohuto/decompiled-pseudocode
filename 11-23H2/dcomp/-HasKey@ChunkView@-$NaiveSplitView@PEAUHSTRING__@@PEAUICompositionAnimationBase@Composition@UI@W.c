/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18014BE00
 * Callers:
 *     ??$IterateOnChunks@V_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_@@V_lambda_4ff9c8b0452bb8e10a23cfbb045e1d9b_@@@?$NaiveSplitView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_@@V_lambda_4ff9c8b0452bb8e10a23cfbb045e1d9b_@@@Z @ 0x180149F88 (--$IterateOnChunks@V_lambda_b0eefe0cc9b5ebbcfe972c67530cd714_@@V_lambda_4ff9c8b0452bb8e10a23cfbb.c)
 *     ??$IterateOnChunks@V_lambda_e314891ccd7cb693af13507fa75782a9_@@V_lambda_81d137a50f45be38d056be9b6d120cf4_@@@?$NaiveSplitView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_e314891ccd7cb693af13507fa75782a9_@@V_lambda_81d137a50f45be38d056be9b6d120cf4_@@@Z @ 0x18018C338 (--$IterateOnChunks@V_lambda_e314891ccd7cb693af13507fa75782a9_@@V_lambda_81d137a50f45be38d056be9b.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x18014AAA8 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        HSTRING a2,
        _BYTE *a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx
  HSTRING v12; // rcx
  bool v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  v14 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(v4 + 12);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, &string);
    if ( v3 >= 0 )
    {
      v3 = XWinRT::StringEquals::operator()(v11, a2, string, &v14);
      if ( v3 >= 0 && v14 )
      {
        v12 = string;
        *a3 = 1;
        WindowsDeleteString(v12);
        return (unsigned int)v3;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v8 = (unsigned int)(v8 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  return (unsigned int)v3;
}
