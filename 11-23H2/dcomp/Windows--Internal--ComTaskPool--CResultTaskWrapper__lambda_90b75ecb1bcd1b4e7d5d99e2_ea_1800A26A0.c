/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407___::Run @ 0x1800A26A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ @ 0x18010FAF8 (-EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::Compositor::EnsureBroker(*(Windows::UI::Composition::Compositor **)(a1 + 16));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 496LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL),
           **(_QWORD **)(a1 + 24));
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 311LL;
  }
  else
  {
    v4 = 309LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
