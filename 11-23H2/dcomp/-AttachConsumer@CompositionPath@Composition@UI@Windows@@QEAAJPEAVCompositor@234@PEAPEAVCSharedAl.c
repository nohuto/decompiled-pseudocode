/*
 * XREFs of ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4
 * Callers:
 *     ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8 (-SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z.c)
 *     ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z @ 0x1801785A0 (-InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBUPathDataConsumer@CompositionPath@Composition@UI@Windows@@@?$vector@UPathDataConsumer@CompositionPath@Composition@UI@Windows@@V?$allocator@UPathDataConsumer@CompositionPath@Composition@UI@Windows@@@std@@@std@@QEAAPEAUPathDataConsumer@CompositionPath@Composition@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180041194 (--$_Emplace_reallocate@AEBUPathDataConsumer@CompositionPath@Composition@UI@Windows@@@-$vector@UP.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::AttachConsumer(
        Windows::UI::Composition::CompositionPath *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct DirectComposition::CSharedAllocation **a3,
        unsigned int *a4)
{
  __int64 v4; // rax
  DirectComposition::CDevice *v6; // r15
  const void *v9; // r14
  size_t v10; // rbx
  _DWORD *i; // rdx
  struct DirectComposition::CSharedAllocation *v12; // rdi
  int SharedMemory; // eax
  unsigned int v14; // edi
  _OWORD *v15; // rdx
  struct DirectComposition::CSharedAllocation *v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char *v19; // [rsp+60h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 8);
  v6 = (DirectComposition::CDevice *)*((_QWORD *)a2 + 57);
  v9 = *(const void **)(v4 + 16);
  v10 = *(_QWORD *)(v4 + 24) - (_QWORD)v9;
  if ( v10 == -1LL || !v9 && v10 )
  {
    gsl::details::terminate(this);
    JUMPOUT(0x1800405E8LL);
  }
  *(_OWORD *)v17 = 0LL;
  v19 = (char *)this + 96;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  for ( i = (_DWORD *)*((_QWORD *)this + 9); i != *((_DWORD **)this + 10); i += 4 )
  {
    if ( *(DirectComposition::CDevice **)(*(_QWORD *)(*(_QWORD *)i + 48LL) + 24LL) == v6 )
    {
      ++i[2];
      *(_OWORD *)v17 = *(_OWORD *)i;
      break;
    }
  }
  v12 = v17[0];
  if ( v17[0] )
    goto LABEL_9;
  SharedMemory = DirectComposition::CDevice::AllocateSharedMemory(v6, (unsigned int)v10, v17);
  v14 = SharedMemory;
  if ( SharedMemory >= 0 )
  {
    v12 = v17[0];
    memcpy_0((char *)v17[0] + 56, v9, v10);
    (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)v6 + 8LL))(v6);
    v15 = (_OWORD *)*((_QWORD *)this + 10);
    LODWORD(v17[1]) = 1;
    if ( v15 == *((_OWORD **)this + 11) )
    {
      std::vector<Windows::UI::Composition::CompositionPath::PathDataConsumer>::_Emplace_reallocate<Windows::UI::Composition::CompositionPath::PathDataConsumer const &>(
        (char *)this + 72,
        v15,
        v17);
      v12 = v17[0];
    }
    else
    {
      *v15 = *(_OWORD *)v17;
      *((_QWORD *)this + 10) += 16LL;
    }
LABEL_9:
    *a3 = v12;
    *a4 = v10;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
    (const char *)(unsigned int)SharedMemory);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v14;
}
