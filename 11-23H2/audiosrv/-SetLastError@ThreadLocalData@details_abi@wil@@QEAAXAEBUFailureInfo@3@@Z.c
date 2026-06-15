/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18003CAE8
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18003C9C0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18005FC08 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800CD4C0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  _DWORD *v6; // r8
  _WORD *v7; // rax
  _WORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  unsigned __int16 v11; // dx

  v3 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v3 )
    {
      v7 = wil::details::ProcessHeapAlloc(8u, 0x190uLL, a3);
      *((_QWORD *)this + 3) = v7;
      if ( v7 )
      {
        *((_DWORD *)this + 8) = 5;
        v8 = v7 + 200;
        while ( v7 != v8 )
        {
          *v7 = 80;
          v7 += 40;
        }
      }
    }
  }
  v6 = (_DWORD *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    if ( !v3 || (v9 = &v6[20 * *((unsigned __int16 *)this + 16)], v6 == v9) )
    {
LABEL_16:
      v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v11;
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)&v6[20 * v11],
        a2,
        _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
    }
    else
    {
      v10 = v6 + 2;
      while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 2) )
      {
        v10 += 20;
        if ( v10 - 2 == v9 )
          goto LABEL_16;
      }
    }
  }
}
