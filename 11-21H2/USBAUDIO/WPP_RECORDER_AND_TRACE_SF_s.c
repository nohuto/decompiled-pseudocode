/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x1C0011158
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009F68 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_s(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]

  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids,
      32LL,
      v16,
      v15,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v17) = 32;
    WppAutoLogTrace(a4, 0LL, 9LL, &WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids, v17, v9);
  }
}
