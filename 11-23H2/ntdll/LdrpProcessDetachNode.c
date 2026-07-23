/*
 * XREFs of LdrpProcessDetachNode @ 0x18006B9F4
 * Callers:
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrpRecordUnloadEvent @ 0x18006BB6C (LdrpRecordUnloadEvent.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 */

void __fastcall LdrpProcessDetachNode(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r15
  __int64 v8; // [rsp+60h] [rbp-68h] BYREF
  int v9; // [rsp+68h] [rbp-60h]
  __int128 v10; // [rsp+70h] [rbp-58h]
  __int128 v11; // [rsp+80h] [rbp-48h]
  __int128 v12; // [rsp+90h] [rbp-38h]
  __int64 v13; // [rsp+A0h] [rbp-28h]

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    LdrpRecordUnloadEvent(i - 20);
    v4 = i - 16;
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 **)v3[5];
      if ( *(__int64 **)(v5 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 1LL;
    }
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2673,
        (__int64)"LdrpProcessDetachNode",
        2u,
        "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
        v3 + 9,
        v3[7]);
      v8 = 72LL;
      v9 = 1;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        LdrpCallTlsInitializers(0, (__int64)(i - 20));
      LdrpCallInitRoutine(v7, v3[6], 0, 0LL);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
    }
  }
}
