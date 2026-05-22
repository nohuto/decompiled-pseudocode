/*
 * XREFs of ??1CFlipContent@Flip@@EEAA@XZ @ 0x1801ABF80
 * Callers:
 *     ??_GCFlipContent@Flip@@EEAAPEAXI@Z @ 0x1801AC000 (--_GCFlipContent@Flip@@EEAAPEAXI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

void __fastcall Flip::CFlipContent::~CFlipContent(Flip::CFlipContent *this)
{
  int v2; // eax
  char *v3; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &Flip::CFlipContent::`vftable';
  v2 = NtFlipObjectRemoveContent(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL), (char *)this + 16);
  if ( v2 < 0 )
    ModuleFailFastForHRESULT(v2, retaddr);
  v3 = (char *)*((_QWORD *)this + 4);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 3);
}
