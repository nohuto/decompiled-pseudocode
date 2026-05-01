/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180002D04
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180003130 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001754 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x180003F04 (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180003F94 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     memset_0 @ 0x180007BE6 (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  _WORD *v5; // rax
  _WORD *v6; // rcx
  _DWORD *v7; // r8
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r9
  unsigned __int16 v11; // dx
  _DWORD *v12; // rsi
  _DWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  unsigned __int64 *v23; // rdi
  LPVOID v24; // r15
  void *v25; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rax

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
        v6 = v5 + 200;
        while ( v5 != v6 )
        {
          *v5 = 80;
          v5 += 40;
        }
      }
    }
  }
  v7 = (_DWORD *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( !v2 || (v8 = &v7[20 * *((unsigned __int16 *)this + 16)], v7 == v8) )
    {
LABEL_14:
      v10 = 1LL;
      v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v11;
      v12 = &v7[20 * v11];
      v13 = v12 + 14;
      v12[1] = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
      v14 = -1LL;
      v12[2] = *((_DWORD *)a2 + 2);
      *((_QWORD *)v12 + 2) = 0LL;
      *((_WORD *)v12 + 12) = *((_WORD *)a2 + 32);
      *((_BYTE *)v12 + 26) = *(_BYTE *)a2;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = *((_QWORD *)a2 + 17);
      *((_QWORD *)v12 + 6) = *((_QWORD *)a2 + 18);
      *((_QWORD *)v12 + 7) = 0LL;
      v15 = *((_QWORD *)a2 + 7);
      if ( v15 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *(_BYTE *)(v15 + v17) );
        v16 = v17 + 1;
      }
      else
      {
        v16 = 1LL;
      }
      v18 = *((_QWORD *)a2 + 16);
      if ( v18 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( *(_BYTE *)(v18 + v19) );
        v10 = v19 + 1;
      }
      v20 = *((_QWORD *)a2 + 3);
      if ( v20 )
      {
        do
          ++v14;
        while ( *(_WORD *)(v20 + 2 * v14) );
        v21 = 2 * v14 + 2;
      }
      else
      {
        v21 = 2LL;
      }
      v22 = v16 + v21 + v10;
      v23 = (unsigned __int64 *)(v12 + 18);
      if ( !*((_QWORD *)v12 + 8) || *v23 < v22 )
      {
        v24 = wil::details::ProcessHeapAlloc(8u, v16 + v21 + v10);
        if ( v24 )
        {
          v25 = (void *)*((_QWORD *)v12 + 8);
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v25);
          *((_QWORD *)v12 + 8) = v24;
          *v23 = v22;
        }
        v13 = v12 + 14;
      }
      v27 = *((_QWORD *)v12 + 8);
      if ( v27 )
      {
        v28 = v27 + *v23;
        v29 = wil::details::WriteResultString<char const *>(v27, v28, *((_QWORD *)a2 + 7), v12 + 4);
        v30 = wil::details::WriteResultString<char const *>(v29, v28, *((_QWORD *)a2 + 16), v12 + 8);
        v31 = (void *)wil::details::WriteResultString<wchar_t const *>(v30, v28, *((_QWORD *)a2 + 3), v13);
        memset_0(v31, 0, v28 - (_QWORD)v31);
      }
    }
    else
    {
      v9 = v7 + 2;
      while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 2) )
      {
        v9 += 20;
        if ( v9 - 2 == v8 )
          goto LABEL_14;
      }
    }
  }
}
