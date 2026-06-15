/*
 * XREFs of wil::init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___ @ 0x180033760
 * Callers:
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18000E710 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x18003A664 (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001044C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_7af2eb194479c71b10cc30af6f218930_::operator() @ 0x18003473C (_lambda_7af2eb194479c71b10cc30af6f218930_--operator().c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  fPending = 0;
  if ( !InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (int)"wil", v3);
  if ( fPending )
  {
    v5 = lambda_7af2eb194479c71b10cc30af6f218930_::operator()();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x258, (int)"wil", (const char *)(unsigned int)v5);
      InitOnceComplete(&InitOnce, 4u, 0LL);
      return v6;
    }
    InitOnceComplete(&InitOnce, 0, 0LL);
  }
  return 0LL;
}
