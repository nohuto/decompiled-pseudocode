/*
 * XREFs of ?MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z @ 0x1800220BC
 * Callers:
 *     ?SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z @ 0x180021F70 (-SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002206C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C (-MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA-AV-$basic_string@GU-$char.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::MarshalComment(
        Windows::UI::Composition::AnimationLoggingManager *this,
        int a2,
        const unsigned __int16 *a3)
{
  SIZE_T v5; // rsi
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rbx
  unsigned __int16 **v9; // r8
  HRESULT v10; // eax
  HANDLE v11; // rax
  unsigned __int16 *v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-50h]
  unsigned __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  void *v16; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int16 *v17[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-20h]
  unsigned __int64 v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Windows::UI::Composition::AnimationLoggingManager::MaybeHashComment(this, v17, a3);
  v5 = 2 * v18 + 6;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v5);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_DWORD *)v7 = a2;
  v9 = v17;
  if ( v19 >= 8 )
    v9 = (unsigned __int16 **)v17[0];
  v10 = StringCchCopyNW(v7 + 2, v18 + 1, (size_t *)v9, v18);
  if ( v10 != -2147024774 && v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x134,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)(unsigned int)v10,
      v14);
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2u,
    v8,
    v5);
  v11 = GetProcessHeap();
  HeapFree(v11, 0, v8);
  if ( v19 >= 8 )
  {
    v12 = v17[0];
    v13 = 2 * v19 + 2;
    v15 = v13;
    v16 = v17[0];
    if ( v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, &v15);
      v13 = v15;
      v12 = (unsigned __int16 *)v16;
    }
    operator delete(v12, v13);
  }
}
