/*
 * XREFs of ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803AF348
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180142410 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803AF970 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
ImmersiveShellComponentsConfiguration **__fastcall winrt::make_self<ImmersiveShellComponentsConfiguration,HKEY__ *,unsigned short const *>(
        ImmersiveShellComponentsConfiguration **a1,
        HKEY *a2,
        const unsigned __int16 **a3)
{
  ImmersiveShellComponentsConfiguration *v7; // [rsp+30h] [rbp+8h]

  v7 = (ImmersiveShellComponentsConfiguration *)operator new(0x80uLL);
  ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(v7, *a2, *a3);
  *(_QWORD *)v7 = &winrt::impl::heap_implements<ImmersiveShellComponentsConfiguration>::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)v7 + 1) = &winrt::impl::heap_implements<ImmersiveShellComponentsConfiguration>::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  *a1 = v7;
  return a1;
}
