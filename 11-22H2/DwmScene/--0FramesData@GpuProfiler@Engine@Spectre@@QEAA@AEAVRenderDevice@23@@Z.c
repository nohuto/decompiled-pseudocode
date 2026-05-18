/*
 * XREFs of ??0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z @ 0x1800A0A04
 * Callers:
 *     ??0GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A0B40 (--0GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180073D30 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Emplace_back_internal@_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX$$QEA_K@Z @ 0x1800A07DC (--$_Emplace_back_internal@_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX$$QEA_K@Z.c)
 *     ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800A09BC (--0-$set@_KU-$less@_K@std@@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     ??0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A2574 (--0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
Spectre::Engine::GpuProfiler::FramesData *__fastcall Spectre::Engine::GpuProfiler::FramesData::FramesData(
        Spectre::Engine::GpuProfiler::FramesData *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp+20h]

  Spectre::Utils::SharedMutex::SharedMutex(this);
  v11 = (__int64)this + 8;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 1);
  std::set<unsigned __int64>::set<unsigned __int64>((_QWORD *)this + 6);
  `eh vector constructor iterator'(
    (char *)this + 64,
    16LL,
    5LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    v7 = operator new(0x448uLL);
    v8 = v7;
    v12 = v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = 0LL;
      v7[2] = 1;
      v7[3] = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame((Spectre::Engine::GpuProfilerFrame *)(v7 + 4), a2);
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)((char *)this + v6 + 64) = v8 + 4;
    v9 = *(std::_Ref_count_base **)((char *)this + v6 + 72);
    *(_QWORD *)((char *)this + v6 + 72) = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    *(_QWORD *)((char *)this + v5 + 144) = 0LL;
    v11 = (int)v4;
    std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64>((__int64)this + 8, &v11);
    ++v4;
    v6 += 16LL;
    v5 += 8LL;
  }
  while ( v4 < 5 );
  return this;
}
