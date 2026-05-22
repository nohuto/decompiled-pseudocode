/*
 * XREFs of GetHandEventType @ 0x18011B478
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18011B1C0 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetHandEventType(int a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = 2LL;
  v5 = a1 - 2;
  if ( !v5 )
    return 8LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 16LL;
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 5 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
            a4);
      }
      return 4LL;
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
