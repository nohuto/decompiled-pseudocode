/*
 * XREFs of ?CloseLuid@Compositor@Composition@UI@Windows@@QEAAJ_K@Z @ 0x18010E758
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407___ @ 0x1800A1EA4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CloseLuid(
        Windows::UI::Composition::Compositor *this,
        __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  const char *v7; // [rsp+28h] [rbp-20h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  if ( !a2 )
  {
    v2 = "The LUID to close is null.";
    v3 = 301LL;
LABEL_3:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)0x80070057LL,
      (int)v2,
      v7);
    return 2147942487LL;
  }
  if ( (*((_BYTE *)this + 32) & 2) == 0 )
  {
    v2 = "The compositor is disposed.";
    v3 = 302LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v8 = this;
  *((_QWORD *)&v8 + 1) = &v10;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407___(
           v6,
           CurrentThreadId,
           &v8);
}
