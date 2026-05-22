/*
 * XREFs of ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z @ 0x180010B88
 * Callers:
 *     ?Destroy@CompositionPathGeometry@Composition@UI@Windows@@UEAAXXZ @ 0x180010B40 (-Destroy@CompositionPathGeometry@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8 (-SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z.c)
 *     ?Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180178360 (-Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionPath::DetachConsumer(
        Windows::UI::Composition::CompositionPath *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  __int64 v2; // rsi
  _DWORD *i; // rbx
  DirectComposition::CDelayedDestructionObject *v5; // rcx
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a2 + 57);
  v7 = (char *)this + 96;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  for ( i = (_DWORD *)*((_QWORD *)this + 9); i != *((_DWORD **)this + 10); i += 4 )
  {
    v5 = *(DirectComposition::CDelayedDestructionObject **)i;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 48LL) + 24LL) == v2 )
    {
      if ( i[2]-- == 1 )
      {
        DirectComposition::CDelayedDestructionObject::Release(v5);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        memmove_0(i, i + 4, *((_QWORD *)this + 10) - (_QWORD)(i + 4));
        *((_QWORD *)this + 10) -= 16LL;
      }
      break;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
