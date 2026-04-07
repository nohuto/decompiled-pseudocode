/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResourceProxy@@@Z @ 0x18000C500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResourceProxy *a2)
{
  struct CResourceProxy *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx

  v3 = a2;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 13);
  if ( v4 == (volatile signed __int32 *)a2 )
    return 0LL;
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
  *((_QWORD *)this + 13) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    v3 = (struct CResourceProxy *)*((_QWORD *)this + 13);
  }
  if ( v3 )
    v6 = *(unsigned int *)(*((_QWORD *)v3 + 2) + 24LL);
  else
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 432LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x132u);
  return v8;
}
