/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ff5d2bca3e253277f289645b334a7f45__void_IAudioStreamInfo___::_Do_call @ 0x1800DDC20
 * Callers:
 *     <none>
 * Callees:
 *     ??8CProcessingModeParameters@@QEAA_NAEBV0@@Z @ 0x180104EFC (--8CProcessingModeParameters@@QEAA_NAEBV0@@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_ff5d2bca3e253277f289645b334a7f45__void_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  char *v4; // rax
  char v5; // di
  __int64 v6; // rdx

  v3 = *a2;
  v4 = *(char **)(a1 + 8);
  if ( *v4 )
  {
    v6 = v3 + 584;
    if ( !v3 )
      v6 = 592LL;
    v5 = *v4;
    LOBYTE(v4) = v5 & CProcessingModeParameters::operator==(*(_QWORD *)(a1 + 16), v6);
    **(_BYTE **)(a1 + 8) = (_BYTE)v4;
  }
  return (char)v4;
}
