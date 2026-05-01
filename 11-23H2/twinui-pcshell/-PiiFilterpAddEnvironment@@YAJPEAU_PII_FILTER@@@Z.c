/*
 * XREFs of ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140
 * Callers:
 *     PiiFilterCreate @ 0x18008DAB8 (PiiFilterCreate.c)
 * Callees:
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x1800EE498 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z.c)
 *     AslEnvBuildBasic @ 0x1800EEA40 (AslEnvBuildBasic.c)
 *     _wcslwr @ 0x1801C7440 (_wcslwr.c)
 *     _wcsnicmp @ 0x1801C744C (_wcsnicmp.c)
 *     wcscat_s @ 0x1801C74C4 (wcscat_s.c)
 *     wcscpy_s @ 0x1801C74D0 (wcscpy_s.c)
 */

__int64 __fastcall PiiFilterpAddEnvironment(struct _PII_FILTER *this)
{
  wchar_t *Heap; // rsi
  unsigned __int64 v3; // rbp
  int v4; // edi
  unsigned __int64 v5; // rcx
  wchar_t *v6; // rbx
  __int64 v7; // rax
  wchar_t *v8; // rdi
  __int64 v9; // rax
  wchar_t *String1; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  String1 = 0LL;
  Heap = 0LL;
  v3 = 0LL;
  v4 = AslEnvBuildBasic(&String1, &v12);
  if ( v4 >= 0 )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( Heap )
    {
      v5 = v12;
      v6 = String1;
      if ( v12 )
      {
        do
        {
          v7 = -1LL;
          do
            ++v7;
          while ( v6[v7] );
          v3 += v7 + 1;
          if ( *v6 )
          {
            if ( wcsnicmp(v6, L"SystemDrive=", 0xCuLL)
              && wcsnicmp(v6, L"DataDrive=", 0xAuLL)
              && wcsnicmp(v6, L"OSDataDrive=", 0xCuLL) )
            {
              v8 = wcschr(v6, 0x3Du);
              if ( !v8 )
                break;
              wcslwr(v6);
              *v8 = 0;
              wcscpy_s(Heap, 0x104uLL, L"%");
              wcscat_s(Heap, 0x104uLL, v6);
              wcscat_s(Heap, 0x104uLL, L"%");
              *v8 = 61;
              v4 = PiiFilterpAddItemSorted(this, v8 + 1, Heap);
              if ( v4 < 0 )
                goto LABEL_17;
            }
            v5 = v12;
          }
          v9 = -1LL;
          do
            ++v9;
          while ( v6[v9] );
          v6 += v9 + 1;
        }
        while ( v3 < v5 );
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
  }
LABEL_17:
  if ( String1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v4;
}
