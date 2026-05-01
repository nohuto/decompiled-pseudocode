/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z @ 0x1000392D
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z @ 0x10003C30 (-GetContextAndNotifyFailure@details@wil@@YGXPAUFailureInfo@2@PADI@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YGPAXKI@Z @ 0x10002645 (-ProcessHeapAlloc@details@wil@@YGPAXKI@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 */

void __thiscall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _DWORD *v3; // edx
  int v4; // ebx
  _WORD *v5; // eax
  _WORD *v6; // edx
  _WORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  unsigned int v11; // eax

  v3 = (_DWORD *)*((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 3);
  if ( v3 )
    goto LABEL_7;
  if ( v4 )
  {
    v5 = wil::details::ProcessHeapAlloc(8u, 0xDCu);
    v6 = v5;
    *((_DWORD *)this + 4) = v5;
    if ( v5 )
    {
      *((_WORD *)this + 10) = 5;
      *((_WORD *)this + 11) = 0;
      v7 = v5 + 110;
      do
      {
        *v6 = 44;
        v6 += 22;
      }
      while ( v6 != v7 );
      v3 = (_DWORD *)*((_DWORD *)this + 4);
      if ( v3 )
      {
LABEL_7:
        v8 = v3;
        if ( !v4 || (v9 = &v3[11 * *((unsigned __int16 *)this + 10)], v3 == v9) )
        {
LABEL_14:
          v11 = ((unsigned int)*((unsigned __int16 *)this + 11) + 1) % *((unsigned __int16 *)this + 10);
          *((_WORD *)this + 11) = v11;
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)&v8[11 * v11],
            a2,
            _InterlockedIncrement(*((volatile signed __int32 **)this + 2)));
        }
        else
        {
          v10 = v3 + 2;
          while ( *(v10 - 1) <= *((_DWORD *)this + 3) || *v10 != *((_DWORD *)a2 + 2) )
          {
            v10 += 11;
            if ( v10 - 2 == v9 )
            {
              v8 = (_DWORD *)*((_DWORD *)this + 4);
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
}
