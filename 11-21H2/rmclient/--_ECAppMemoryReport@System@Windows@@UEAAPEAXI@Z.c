/*
 * XREFs of ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x1800064C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001AEF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

Windows::System::CAppMemoryReport *__fastcall Windows::System::CAppMemoryReport::`vector deleting destructor'(
        Windows::System::CAppMemoryReport *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
  *((_QWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  *((_QWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
  *((_QWORD *)this + 3) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  v4 = *((_QWORD *)this + 5);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
