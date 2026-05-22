/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0
 * Callers:
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, volatile __int32 ***a3)
{
  volatile __int32 *v3; // rbp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rsi
  volatile __int32 **v8; // rax
  volatile __int32 **v9; // r8
  int v10; // ecx
  unsigned int v11; // edx

  v3 = (volatile __int32 *)*((_QWORD *)a1 + 1);
  v4 = 0;
  v5 = a2;
  if ( ((unsigned __int8)v3 & 3) != 0 || a2 - 1 > 0xFF || (v7 = *a1, v7 < (unsigned __int64)(2 * a2) + 8) )
  {
    v10 = -2147024809;
    v11 = 55;
    goto LABEL_11;
  }
  v8 = (volatile __int32 **)DefaultHeap::Alloc(0x10uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = v3;
    *((_DWORD *)v8 + 2) = v5;
    *((_DWORD *)v8 + 3) = (v7 - 8) / v5;
  }
  else
  {
    v9 = 0LL;
  }
  *a3 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    v11 = 61;
LABEL_11:
    v4 = v10;
    DoStackCaptureDirect(v10, v11);
    return v4;
  }
  _InterlockedExchange(*v9, 0);
  _InterlockedExchange(*v9 + 1, 0);
  return v4;
}
