/*
 * XREFs of ?SetContent@CVisual@@UEAAJPEAVCResourceProxy@@@Z @ 0x180050A30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CResourceProxy *a2)
{
  unsigned int v3; // esi
  volatile signed __int32 *v4; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax

  v3 = 0;
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 13);
  if ( v4 != (volatile signed __int32 *)a2 )
  {
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 13) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    v7 = *((_QWORD *)this + 13);
    if ( v7 )
      v8 = *(unsigned int *)(*(_QWORD *)(v7 + 16) + 24LL);
    else
      v8 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 16LL)
                                                            + 376LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           v8);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x132u, 0LL);
  }
  return v3;
}
