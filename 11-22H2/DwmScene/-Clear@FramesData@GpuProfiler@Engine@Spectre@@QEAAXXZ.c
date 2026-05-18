/*
 * XREFs of ?Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1110
 * Callers:
 *     ??1GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0CE4 (--1GpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18002980C (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engin.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::GpuProfiler::FramesData::Clear(Spectre::Engine::GpuProfiler::FramesData *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  std::_Ref_count_base *v4; // rcx

  Spectre::Engine::Mutex::lock(this);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    while ( 1 )
    {
      *((_QWORD *)this + 5) = --v2;
      if ( !v2 )
        break;
      ++*((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::clear((_QWORD *)this + 6);
  for ( i = (_QWORD *)((char *)this + 64); i != (_QWORD *)((char *)this + 144); i += 2 )
  {
    *i = 0LL;
    v4 = (std::_Ref_count_base *)i[1];
    i[1] = 0LL;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  if ( (char *)this + 144 <= (char *)this + 184 )
    memset_0((char *)this + 144, 0, 8LL * ((char *)this + 184 >= (char *)this + 144 ? 5 : 0));
  Spectre::Engine::Mutex::unlock(this);
}
