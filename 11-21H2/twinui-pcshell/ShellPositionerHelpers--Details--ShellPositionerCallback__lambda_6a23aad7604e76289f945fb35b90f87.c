/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_6a23aad7604e76289f945fb35b90f871___::Invoke @ 0x18015C550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_6a23aad7604e76289f945fb35b90f871___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ecx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 216LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 216LL));
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         v4,
         a1 + 56,
         *(_QWORD *)(a1 + 72));
  v6 = 0;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v6;
}
