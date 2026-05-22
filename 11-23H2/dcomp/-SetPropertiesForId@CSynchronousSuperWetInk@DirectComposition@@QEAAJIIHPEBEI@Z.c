/*
 * XREFs of ?SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z @ 0x1800FCAF8
 * Callers:
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ @ 0x1800FCA3C (-NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ.c)
 *     memcpy_s_2 @ 0x1800FCC00 (memcpy_s_2.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::SetPropertiesForId(
        DirectComposition::CSynchronousSuperWetInk *this,
        rsize_t a2,
        int a3,
        rsize_t a4,
        const unsigned __int8 *Source)
{
  __int64 v5; // rax
  __int64 v8; // rcx
  gsl::details *v9; // rcx
  const void *v10; // r10
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 6);
  if ( !v5 || *(_DWORD *)(v5 + 8) == 108 )
  {
    v8 = *((_QWORD *)this + 7);
    *(_DWORD *)(v8 + 8) = a3;
    *(_QWORD *)v8 = (unsigned int)a2;
    *(_BYTE *)(v8 + 12) = 1;
    *(_DWORD *)(v8 + 16) = 84;
    memcpy_s_2((void *const)(v8 + 20), a2, Source, a4);
    v10 = (const void *)*((_QWORD *)this + 7);
    v11 = *((_QWORD *)this + 6);
    if ( !v10 )
    {
      gsl::details::terminate(v9);
      __debugbreak();
    }
    memcpy_0(
      (void *)(*(_QWORD *)v11
             + 8LL
             + *(_DWORD *)(v11 + 8)
             * ((unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)v11, 1u) % *(_DWORD *)(v11 + 12))),
      v10,
      *(unsigned int *)(v11 + 8));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v11 + 4LL));
    v12 = DirectComposition::CSynchronousSuperWetInk::NotifySuperWetInkWork(this);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = *((_QWORD *)this + 5);
      if ( v14 )
        *((_DWORD *)this + 21) = *(_DWORD *)(*(_QWORD *)v14 + 4LL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
