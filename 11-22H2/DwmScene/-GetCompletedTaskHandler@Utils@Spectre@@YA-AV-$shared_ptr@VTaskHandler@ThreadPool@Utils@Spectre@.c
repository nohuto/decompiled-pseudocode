/*
 * XREFs of ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714
 * Callers:
 *     ??RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x180043C60 (--RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandl.c)
 *     ??RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x18004AF60 (--RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Ut.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 *     ?LoadFromStream@Component@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x1800813E0 (-LoadFromStream@Component@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spec.c)
 *     ?Request@ResourceData@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x180097654 (-Request@ResourceData@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??4?$atomic@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@QEAA?AW4TaskStatus@ThreadPool@Utils@Spectre@@W42345@@Z @ 0x1800A5554 (--4-$atomic@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@QEAA-AW4TaskStatus@ThreadPool@Utils@Spe.c)
 *     ??0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ @ 0x1800DF608 (--0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Utils::GetCompletedTaskHandler(_QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  _DWORD *v4; // rbx

  v2 = operator new(0xB8uLL);
  v4 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    Spectre::Utils::ThreadPool::TaskHandler::TaskHandler((Spectre::Utils::ThreadPool::TaskHandler *)(v2 + 4));
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4 + 4;
  a1[1] = v4;
  std::atomic<enum Spectre::Utils::ThreadPool::TaskStatus>::operator=((__int64)(v4 + 8), 2LL, v3);
  return a1;
}
