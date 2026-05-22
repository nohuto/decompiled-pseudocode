/*
 * XREFs of ?BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z @ 0x1800FC2B8
 * Callers:
 *     ?StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800E6F30 (-StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ @ 0x1800FCA3C (-NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ.c)
 *     memcpy_s_2 @ 0x1800FCC00 (memcpy_s_2.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::BeginStroke(
        DirectComposition::CSynchronousSuperWetInk *this,
        const unsigned __int8 *Source,
        __int64 a3,
        rsize_t a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v8; // rcx
  gsl::details *v9; // rcx
  const void *v10; // r10
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 6);
  if ( v4 && *(_DWORD *)(v4 + 8) != 108 )
  {
    v6 = 274LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 8LL) != 56 )
  {
    v6 = 279LL;
    goto LABEL_4;
  }
  v8 = *((_QWORD *)this + 7);
  *(_QWORD *)v8 = 0LL;
  *(_DWORD *)(v8 + 8) = a4;
  *(_BYTE *)(v8 + 12) = 1;
  *(_DWORD *)(v8 + 16) = 84;
  memcpy_s_2((void *const)(v8 + 20), (const rsize_t)Source, Source, a4);
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
      (void *)0x12F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
}
