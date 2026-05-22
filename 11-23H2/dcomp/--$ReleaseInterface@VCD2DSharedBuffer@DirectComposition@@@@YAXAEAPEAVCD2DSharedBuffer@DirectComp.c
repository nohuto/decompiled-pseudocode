/*
 * XREFs of ??$ReleaseInterface@VCD2DSharedBuffer@DirectComposition@@@@YAXAEAPEAVCD2DSharedBuffer@DirectComposition@@@Z @ 0x1800ECC7C
 * Callers:
 *     ?Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800ECD10 (-Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CD2DSharedBuffer>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 2;
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 48LL))(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        --*v3;
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 40LL))(v1, 1LL);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
