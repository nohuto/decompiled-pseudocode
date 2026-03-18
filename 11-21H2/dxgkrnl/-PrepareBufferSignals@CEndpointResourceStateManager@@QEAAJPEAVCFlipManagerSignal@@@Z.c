/*
 * XREFs of ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C007FB78
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007EFAC (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareBufferSignals(
        CEndpointResourceStateManager *this,
        struct CFlipManagerSignal *a2,
        __int64 a3,
        __int64 a4)
{
  CEndpointResourceStateManager *v4; // rsi
  unsigned int v5; // ebx
  CEndpointResourceStateManager *v6; // r8
  unsigned int v7; // ebp
  bool v9; // zf
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 Pool2; // r14
  CEndpointResourceStateManager *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  CPoolBufferResource *v16; // rcx

  v4 = (CEndpointResourceStateManager *)((char *)this + 16);
  v5 = 0;
  v6 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  v7 = 0;
  if ( v6 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v9 = v6 == 0LL;
      v10 = (__int64)v6 + 40;
      v6 = *(CEndpointResourceStateManager **)v6;
      v11 = v7 + 1;
      if ( v9 )
        v10 = 48LL;
      if ( !*(_QWORD *)v10 )
        v11 = v7;
      v7 = v11;
    }
    while ( v6 != v4 );
    if ( v11 )
    {
      if ( is_mul_ok(v11, 8uLL) )
      {
        Pool2 = ExAllocatePool2(257LL, 8LL * v11, 1651721030LL, a4);
        if ( Pool2 )
        {
          v13 = *(CEndpointResourceStateManager **)v4;
          v14 = 0LL;
          while ( v13 != v4 )
          {
            v15 = (__int64)v13 + 40;
            if ( !v13 )
              v15 = 48LL;
            v16 = *(CPoolBufferResource **)v15;
            if ( *(_QWORD *)v15 )
            {
              ++*((_DWORD *)v16 + 6);
              *(_QWORD *)(Pool2 + 8 * v14) = v16;
              CPoolBufferResource::AddUsageReference(v16);
              v14 = (unsigned int)(v14 + 1);
            }
            v13 = *(CEndpointResourceStateManager **)v13;
          }
          *((_QWORD *)a2 + 3) = Pool2;
          *((_DWORD *)a2 + 8) = v7;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741675;
      }
    }
  }
  return v5;
}
