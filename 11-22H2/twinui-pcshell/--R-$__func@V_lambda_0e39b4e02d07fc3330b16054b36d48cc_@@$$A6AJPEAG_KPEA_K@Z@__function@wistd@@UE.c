/*
 * XREFs of ??R?$__func@V_lambda_0e39b4e02d07fc3330b16054b36d48cc_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x18079A730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_0e39b4e02d07fc3330b16054b36d48cc_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int PersistedRegistryLocationW; // eax
  unsigned int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]

  v4 = *a4;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 8),
                                 **(_QWORD **)(a1 + 16),
                                 *a2,
                                 2 * (unsigned int)*a3);
  v6 = 0;
  if ( !PersistedRegistryLocationW || PersistedRegistryLocationW == 234 )
    *v4 = (unsigned __int64)v9 >> 1;
  else
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           18LL,
                           (__int64)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
                           (const char *)PersistedRegistryLocationW);
  return v6;
}
