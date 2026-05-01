/*
 * XREFs of _lambda_9e758cdcb61e8985816640c79758b5b6_::operator() @ 0x18008F458
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e758cdcb61e8985816640c79758b5b6___::Run @ 0x18008F430 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9e758cdcb61e8985816640c79758b5b6___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9e758cdcb61e8985816640c79758b5b6_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int16 v4; // dx
  int *v5; // rcx
  int v6; // r8d
  bool v7; // zf
  __int16 v8; // r8
  char v10; // cl
  char v11; // cl
  int v12; // [rsp+30h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  v2 = **a1;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)a1[1] + 35) + 200LL))(*((_QWORD *)a1[1] + 35), &SRWLock);
  v3 = *a1[2];
  HIWORD(v12) = HIWORD(v2);
  if ( v3 == -1 )
  {
    v4 = v2;
  }
  else
  {
    v12 = a1[1][63];
    v4 = v12;
    if ( (v3 & 1) != 0 )
      v4 = ((unsigned __int8)v2 ^ (unsigned __int8)v12) & 1 ^ v12;
    if ( (v3 & 2) != 0 )
      v4 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 0xE;
    if ( (v3 & 4) != 0 )
      v4 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 0x30;
    if ( (v3 & 8) != 0 )
      v4 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 0x40;
    if ( (v3 & 0x10) != 0 )
      v4 ^= (v2 ^ v4) & 0x80;
    if ( (v3 & 0x20) != 0 )
      v4 ^= (v2 ^ v4) & 0x100;
    if ( (v3 & 0x40) != 0 )
      v4 ^= (v2 ^ v4) & 0x200;
    if ( (v3 & 0x80) != 0 )
      v4 ^= (v2 ^ v4) & 0x400;
    if ( (v3 & 0x100) != 0 )
      v4 ^= (v2 ^ v4) & 0x800;
    v10 = BYTE2(v12);
    if ( (v3 & 0x200) != 0 )
      v10 = BYTE2(v2);
    BYTE2(v12) = v10;
    v11 = HIBYTE(v12);
    if ( (v3 & 0x400) != 0 )
      v11 = HIBYTE(v2);
    HIBYTE(v12) = v11;
  }
  v5 = a1[1];
  v6 = v5[89];
  if ( (v6 & 4) == 0 )
    v4 ^= (*((_WORD *)v5 + 126) ^ v4) & 0xF;
  v7 = (v6 & 8) == 0;
  v8 = *((_WORD *)v5 + 126);
  if ( v7 )
    v4 ^= ((unsigned __int8)v4 ^ (unsigned __int8)v8) & 0x31;
  LOWORD(v12) = (v4 ^ v8) & 0xC0 ^ v4;
  if ( v12 != v5[63] )
  {
    v5[63] = v12;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v5);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
