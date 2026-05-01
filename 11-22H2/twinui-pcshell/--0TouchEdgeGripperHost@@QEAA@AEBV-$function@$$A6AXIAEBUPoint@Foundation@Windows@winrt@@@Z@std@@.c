/*
 * XREFs of ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x180183250
 * Callers:
 *     winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1801830DC (winrt--make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f.c)
 * Callees:
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??4?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180183328 (--4-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TouchEdgeGripperHost::TouchEdgeGripperHost(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<TouchEdgeGripperHost>::`vftable';
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 88));
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  std::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>::operator=(a1 + 104, a2);
  std::function<void (void)>::operator=(a1 + 168, a3);
  return a1;
}
