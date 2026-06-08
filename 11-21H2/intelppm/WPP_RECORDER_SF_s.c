/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0007EA0
 * Callers:
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     AcpiParseLpiObject @ 0x1C003B200 (AcpiParseLpiObject.c)
 *     Display_LPI @ 0x1C003C16C (Display_LPI.c)
 *     LpiEnumerateDependencies @ 0x1C0043618 (LpiEnumerateDependencies.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  const wchar_t *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  const wchar_t *v15; // rcx
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  v19 = a1;
  v6 = -1LL;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v11 = a6;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = L"NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8), 43LL, a5, a4, v15, v14, 0LL);
    a1 = v19;
  }
  v16 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v16 = a6 == 0LL;
  }
  if ( v16 )
    v11 = L"NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v18, v11);
}
