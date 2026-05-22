/*
 * XREFs of ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180052468
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180038090 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputProcessorWorker(_QWORD *a1, __int64 a2, int a3, signed int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  char *v9; // rbx
  unsigned int (__fastcall *v10)(_QWORD); // rax

  v4 = a4;
  result = 2147943568LL;
  if ( (unsigned __int64)a4 < 0x13 )
  {
    v9 = (char *)&unk_180266010 + 48 * a4;
    do
    {
      if ( IsEdition(*((_QWORD *)v9 + 1)) && (!a3 || a3 == *(_DWORD *)v9) )
      {
        v10 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v9 + 2);
        if ( !v10 || v10(*a1) )
        {
          result = (*((__int64 (__fastcall **)(_QWORD *, __int64))v9 + 3))(a1, a2);
          if ( (int)result >= 0 )
            break;
        }
      }
      ++v4;
      v9 += 48;
      result = 2147943568LL;
    }
    while ( v4 < 0x13 );
  }
  return result;
}
