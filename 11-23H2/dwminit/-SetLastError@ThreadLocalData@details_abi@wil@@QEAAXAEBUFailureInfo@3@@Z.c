/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800088F0
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180005B10 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x1800040D4 (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180006EC0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18000854C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  LPVOID v5; // rax
  _WORD *i; // rcx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  unsigned __int16 v9; // dx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v11; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      v5 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
      *((_QWORD *)this + 3) = v5;
      if ( v5 )
      {
        *((_DWORD *)this + 8) = 5;
        wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(v10, (__int64)v5, 5LL);
        for ( i = (_WORD *)v10[0]; i != (_WORD *)v10[1]; i += 40 )
          *i = 80;
      }
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( !v2
      || (wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(
            &v11,
            *((_QWORD *)this + 3),
            *((unsigned __int16 *)this + 16)),
          v11 == v12) )
    {
LABEL_14:
      v9 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v9;
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)(v7 + 80LL * v9),
        a2,
        _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
    }
    else
    {
      v8 = v11 + 2;
      while ( *(v8 - 1) <= *((_DWORD *)this + 4) || *v8 != *((_DWORD *)a2 + 2) )
      {
        v8 += 20;
        if ( v8 - 2 == v12 )
          goto LABEL_14;
      }
    }
  }
}
