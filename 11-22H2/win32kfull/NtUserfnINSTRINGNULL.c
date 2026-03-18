/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1C00656B0
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CC9EC (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0065A48 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00BD434 (RtlInitLargeAnsiString.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  _OWORD *v7; // rbx
  __int64 v11; // r8
  _OWORD v13[2]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a4;
  v13[0] = 0LL;
  PtiCurrentShared();
  if ( v7 )
  {
    if ( a7 )
    {
      RtlInitLargeAnsiString(v13, a4, v11);
    }
    else
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlInitLargeUnicodeString(v13, a4);
    }
    v7 = v13;
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v7,
           a5);
}
