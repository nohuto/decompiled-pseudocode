/*
 * XREFs of ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x1800122F0
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18001263C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

char __fastcall wil::ThreadErrorContext::GetLastError(
        wil::ThreadErrorContext *this,
        struct wil::FailureInfo *a2,
        int a3)
{
  char v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax

  v4 = 0;
  v5 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return 0;
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = v6 + 80LL * *(unsigned __int16 *)(v5 + 34);
    if ( v7 < *(_DWORD *)(v8 + 4) )
    {
      if ( !a3 )
        goto LABEL_13;
      v8 = 0LL;
      v9 = v6 + 80LL * *(unsigned __int16 *)(v5 + 32);
      if ( v6 != v9 )
      {
        do
        {
          if ( *(_DWORD *)(v6 + 8) == a3 )
          {
            v10 = *(_DWORD *)(v6 + 4);
            if ( v10 > v7 && (!v8 || v10 < *(_DWORD *)(v8 + 4)) )
              v8 = v6;
          }
          v6 += 80LL;
        }
        while ( v6 != v9 );
        if ( v8 )
        {
LABEL_13:
          memset_0(a2, 0, 0x98uLL);
          v4 = 1;
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v8 + 4);
          *((_DWORD *)a2 + 2) = *(_DWORD *)(v8 + 8);
          *((_QWORD *)a2 + 7) = *(_QWORD *)(v8 + 16);
          *((_DWORD *)a2 + 16) = *(unsigned __int16 *)(v8 + 24);
          *(_DWORD *)a2 = *(unsigned __int8 *)(v8 + 26);
          *((_QWORD *)a2 + 16) = *(_QWORD *)(v8 + 32);
          *((_QWORD *)a2 + 17) = *(_QWORD *)(v8 + 40);
          *((_QWORD *)a2 + 18) = *(_QWORD *)(v8 + 48);
          *((_QWORD *)a2 + 3) = *(_QWORD *)(v8 + 56);
        }
      }
    }
  }
  return v4;
}
