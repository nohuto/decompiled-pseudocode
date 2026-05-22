/*
 * XREFs of ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801C82EC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801C7B00 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801C819C (--0EdgyLegacyProcessor@@QEAA@XZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801CAAF0 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyLegacyProcessor::Create(EdgyConnection ***a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  EdgyLegacyProcessor *v4; // rax
  EdgyLegacyProcessor *v5; // rbx
  EdgyConnection **v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  EdgyConnection **v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    v4 = (EdgyLegacyProcessor *)RefCountedObject::operator new(0x88uLL);
    v5 = v4;
    v10 = (EdgyConnection **)v4;
    if ( v4 )
    {
      memset_0(v4, 0, 0x88uLL);
      v6 = (EdgyConnection **)EdgyLegacyProcessor::EdgyLegacyProcessor(v5);
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
    if ( v6 )
    {
      v7 = EdgyConnection::Initialize(v6[13]);
      v2 = v7;
      if ( v7 >= 0 )
      {
        EdgeGestureMetrics::Initialize();
        v10 = 0LL;
        *a1 = v6;
        v2 = 0;
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgy"
                 "legacyprocessor.cpp",
        (const char *)(unsigned int)v7);
      v3 = 62LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 60LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 57LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
    (const char *)v2);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return v2;
}
