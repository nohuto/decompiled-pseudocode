/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800BCC24
 * Callers:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800BBE94 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800BCBAC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18038F63C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  _DWORD *v5; // r8
  _WORD *v6; // rax
  _WORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // dx

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
      *((_QWORD *)this + 3) = v6;
      if ( v6 )
      {
        *((_DWORD *)this + 8) = 5;
        v7 = v6 + 200;
        while ( v6 != v7 )
        {
          *v6 = 80;
          v6 += 40;
        }
      }
    }
  }
  v5 = (_DWORD *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    if ( !v2 || (v8 = &v5[20 * *((unsigned __int16 *)this + 16)], v5 == v8) )
    {
LABEL_16:
      v10 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v10;
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)&v5[20 * v10],
        a2,
        _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
    }
    else
    {
      v9 = v5 + 2;
      while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 2) )
      {
        v9 += 20;
        if ( v9 - 2 == v8 )
          goto LABEL_16;
      }
    }
  }
}
