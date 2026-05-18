/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000CC74
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18000AFB0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x1800099F0 (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000B620 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18000C8D8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r9
  int v4; // edi
  LPVOID v6; // rax
  _WORD *v7; // rcx
  _DWORD *v8; // rcx
  unsigned __int16 v9; // dx
  _WORD *v10; // [rsp+20h] [rbp-28h] BYREF
  _WORD *v11; // [rsp+28h] [rbp-20h]
  _DWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-10h]

  v2 = *((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_17;
  if ( v4 )
  {
    v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
    *((_QWORD *)this + 3) = v6;
    if ( v6 )
    {
      *((_DWORD *)this + 8) = 5;
      wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v10, (__int64)v6, 5LL);
      v7 = v10;
      if ( v10 == v11 )
        goto LABEL_17;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v11 );
      v2 = *((_QWORD *)this + 3);
      if ( v2 )
      {
LABEL_17:
        if ( !v4
          || (wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v12, v2, *((unsigned __int16 *)this + 16)),
              v12 == v13) )
        {
LABEL_14:
          v9 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
          *((_WORD *)this + 17) = v9;
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)(v2 + 80LL * v9),
            a2,
            _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
        }
        else
        {
          v8 = v12 + 2;
          while ( *(v8 - 1) <= *((_DWORD *)this + 4) || *v8 != *((_DWORD *)a2 + 2) )
          {
            v8 += 20;
            if ( v8 - 2 == v13 )
            {
              v2 = *((_QWORD *)this + 3);
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
}
