/*
 * XREFs of ??8CProcessingModeParameters@@QEAA_NAEBV0@@Z @ 0x180104EFC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5d2bca3e253277f289645b334a7f45__void_IAudioStreamInfo___::_Do_call @ 0x1800DDC20 (std--_Func_impl_no_alloc__lambda_ff5d2bca3e253277f289645b334a7f45__void_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     <none>
 */

char __fastcall CProcessingModeParameters::operator==(__int64 a1, _QWORD *a2)
{
  char v2; // bl
  _QWORD *v5; // r9
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 24) || a2[3] || (unsigned int)_o__wcsicmp(0LL, 0LL) )
    return 0;
  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(_QWORD **)a1;
  if ( ((((unsigned __int64)v5 - *(_QWORD *)a1) ^ (a2[1] - *a2)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    if ( v6 == v5 )
    {
      return 1;
    }
    else
    {
      v7 = *a2 - (_QWORD)v6;
      while ( 1 )
      {
        v8 = *v6 - *(_QWORD *)((char *)v6 + v7);
        if ( *v6 == *(_QWORD *)((char *)v6 + v7) )
          v8 = v6[1] - *(_QWORD *)((char *)v6 + v7 + 8);
        if ( v8 )
          break;
        v6 += 2;
        if ( v6 == v5 )
          return 1;
      }
    }
  }
  return v2;
}
