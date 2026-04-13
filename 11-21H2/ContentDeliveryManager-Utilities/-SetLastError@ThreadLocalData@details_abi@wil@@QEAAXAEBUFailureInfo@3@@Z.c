/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800455BC
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180035340 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800271F8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180027278 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18003BFB8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v3; // esi
  _WORD *v6; // rax
  _WORD *v7; // rax
  _WORD *v8; // rdi
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r8
  unsigned __int16 v12; // dx
  __int64 v13; // rsi
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  LPVOID v24; // r15
  void *v25; // rbx
  HANDLE ProcessHeap; // rax
  char *v27; // rcx
  char *v28; // rbx
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_7;
  if ( v3 )
  {
    v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
    *((_QWORD *)this + 3) = v6;
    v2 = v6;
    if ( v6 )
    {
      v7 = v6 + 200;
      *((_DWORD *)this + 8) = 5;
      if ( v2 == v7 )
        goto LABEL_7;
      do
      {
        *v2 = 80;
        v2 += 40;
      }
      while ( v2 != v7 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
      if ( v2 )
      {
LABEL_7:
        v8 = v2;
        if ( !v3 || (v9 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v9) )
        {
LABEL_14:
          v11 = 1LL;
          v12 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
          *((_WORD *)this + 17) = v12;
          v13 = 40LL * v12;
          *(_DWORD *)&v8[v13 + 2] = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
          *(_DWORD *)&v8[v13 + 4] = *((_DWORD *)a2 + 2);
          v14 = &v8[v13 + 28];
          *(_QWORD *)&v8[v13 + 8] = 0LL;
          v15 = -1LL;
          v8[v13 + 12] = *((_WORD *)a2 + 32);
          LOBYTE(v8[v13 + 13]) = *(_BYTE *)a2;
          *(_QWORD *)&v8[v13 + 16] = 0LL;
          *(_QWORD *)&v8[v13 + 20] = *((_QWORD *)a2 + 17);
          *(_QWORD *)&v8[v13 + 24] = *((_QWORD *)a2 + 18);
          *v14 = 0LL;
          v16 = *((_QWORD *)a2 + 7);
          if ( v16 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( *(_BYTE *)(v16 + v18) );
            v17 = v18 + 1;
          }
          else
          {
            v17 = 1LL;
          }
          v19 = *((_QWORD *)a2 + 16);
          if ( v19 )
          {
            v20 = -1LL;
            do
              ++v20;
            while ( *(_BYTE *)(v19 + v20) );
            v11 = v20 + 1;
          }
          v21 = *((_QWORD *)a2 + 3);
          if ( v21 )
          {
            do
              ++v15;
            while ( *(_WORD *)(v21 + 2 * v15) );
            v22 = 2 * v15 + 2;
          }
          else
          {
            v22 = 2LL;
          }
          v23 = v17 + v22 + v11;
          if ( !*(_QWORD *)&v8[v13 + 32] || *(_QWORD *)&v8[v13 + 36] < v23 )
          {
            v24 = wil::details::ProcessHeapAlloc(8u, v17 + v22 + v11);
            if ( v24 )
            {
              v25 = *(void **)&v8[v13 + 32];
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v25);
              *(_QWORD *)&v8[v13 + 32] = v24;
              *(_QWORD *)&v8[v13 + 36] = v23;
            }
            v14 = &v8[v13 + 28];
          }
          v27 = *(char **)&v8[v13 + 32];
          if ( v27 )
          {
            v28 = &v27[*(_QWORD *)&v8[v13 + 36]];
            v29 = wil::details::WriteResultString<char const *>(v27, v28, *((_BYTE **)a2 + 7), &v8[v13 + 8]);
            v30 = wil::details::WriteResultString<char const *>(v29, v28, *((_BYTE **)a2 + 16), &v8[v13 + 16]);
            v31 = wil::details::WriteResultString<unsigned short const *>(v30, v28, *((_WORD **)a2 + 3), v14);
            memset_0(v31, 0, v28 - v31);
          }
        }
        else
        {
          v10 = v2 + 4;
          while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 2) )
          {
            v10 += 20;
            if ( v10 - 2 == v9 )
            {
              v8 = (_WORD *)*((_QWORD *)this + 3);
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
}
