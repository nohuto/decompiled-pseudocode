/*
 * XREFs of _lambda_532033d5f85a25734111ea1682d58830_::operator() @ 0x1800C25B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_532033d5f85a25734111ea1682d58830___::Run @ 0x1800C2590 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_532033d5f85a25734111ea1682d58830___--.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_532033d5f85a25734111ea1682d58830_::operator()(_QWORD *a1)
{
  float v1; // xmm6_4
  float v2; // xmm7_4
  float v3; // xmm8_4
  int v4; // eax
  float v5; // xmm9_4
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  const char *v9; // r9
  char v10; // si
  __int64 result; // rax
  RTL_SRWLOCK *SRWLock; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (float)**(int **)*a1;
  v2 = (float)*(int *)(*(_QWORD *)*a1 + 4LL);
  v3 = (float)(*(_DWORD *)(*(_QWORD *)*a1 + 8LL) - **(_DWORD **)*a1);
  v4 = *(_DWORD *)(*(_QWORD *)*a1 + 12LL) - *(_DWORD *)(*(_QWORD *)*a1 + 4LL);
  v5 = (float)v4;
  v6 = a1[1];
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 280) + 200LL))(*(_QWORD *)(v6 + 280));
    v7 = 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 280) + 216LL))(*(_QWORD *)(v6 + 280));
    *(_BYTE *)(v6 + 504) = 1;
    if ( *(float *)(v6 + 488) == v1 && *(float *)(v6 + 492) == v2 )
    {
      v7 = 2;
    }
    else
    {
      *(float *)(v6 + 488) = v1;
      *(float *)(v6 + 492) = v2;
    }
    v10 = 0;
    if ( *(float *)(v6 + 496) == v3 && *(float *)(v6 + 500) == v5 )
    {
      if ( !IsPPIEdition() )
        v7 &= ~2u;
    }
    else
    {
      *(float *)(v6 + 496) = v3;
      *(float *)(v6 + 500) = v5;
      v10 = 1;
    }
    if ( v7 )
    {
      LOBYTE(v8) = v10;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 160LL))(v6, v8, 0LL);
      WindowWrapperBase::PushBoundsToWindow(v6, v7);
      if ( (v7 & 2) != 0 && !*(_BYTE *)(v6 + 572) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE4,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return result;
}
