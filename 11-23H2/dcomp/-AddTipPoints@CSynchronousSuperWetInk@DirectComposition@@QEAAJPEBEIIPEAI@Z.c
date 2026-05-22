/*
 * XREFs of ?AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z @ 0x1800FC1AC
 * Callers:
 *     ?DCompAddTipPoints@CDelegatedInkTrailImpl@DirectComposition@@AEAAJAEBV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@PEAI@Z @ 0x1800E6A48 (-DCompAddTipPoints@CDelegatedInkTrailImpl@DirectComposition@@AEAAJAEBV-$vector@USuperWetInkBallp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ @ 0x1800FCA3C (-NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::AddTipPoints(
        DirectComposition::CSynchronousSuperWetInk *this,
        const unsigned __int8 *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int i; // edi
  __int64 v9; // r14
  const unsigned __int8 *v10; // r10
  unsigned int v11; // edx
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 8LL) == 56 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v9 = *((_QWORD *)this + 5);
      v10 = &a2[56 * i];
      if ( !v10 )
      {
        gsl::details::terminate(this);
        __debugbreak();
      }
      memcpy_0(
        (void *)(*(_QWORD *)v9
               + 8LL
               + *(_DWORD *)(v9 + 8)
               * ((unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)v9, 1u) % *(_DWORD *)(v9 + 12))),
        v10,
        *(unsigned int *)(v9 + 8));
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v9 + 4LL));
    }
    v11 = *(_DWORD *)(**((_QWORD **)this + 5) + 4LL);
    if ( a5 )
      *a5 = v11;
    if ( v11 - *((_DWORD *)this + 21) < 3 )
      return 0LL;
    *((_DWORD *)this + 21) = v11;
    v12 = DirectComposition::CSynchronousSuperWetInk::NotifySuperWetInkWork(this);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 170LL;
  }
  else
  {
    v12 = -2147024809;
    v13 = 150LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
