/*
 * XREFs of ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18008D6E8
 * Callers:
 *     PiiFilterCreate @ 0x18008DAB8 (PiiFilterCreate.c)
 * Callees:
 *     AslRegistryOpenSubKey @ 0x18008DA24 (AslRegistryOpenSubKey.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1800EE540 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 *     AslRegistryGetString @ 0x1800EF1D0 (AslRegistryGetString.c)
 *     AslRegistryOpenKey @ 0x1800EF534 (AslRegistryOpenKey.c)
 *     _wcsicmp @ 0x1801C7434 (_wcsicmp.c)
 *     _wcslwr @ 0x1801C7440 (_wcslwr.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall PiiFilterpAddProfiles(struct _PII_FILTER *this)
{
  wchar_t *Heap; // r13
  PVOID v3; // r15
  int v4; // ebx
  wchar_t *v5; // rdi
  ULONG v6; // ebx
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  const wchar_t **v9; // rsi
  int v10; // eax
  const unsigned __int16 *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned int v14; // r9d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // kr00_8
  unsigned __int64 v18; // rax
  wchar_t *v19; // rax
  const unsigned __int16 *v20; // rdx
  unsigned __int64 v21; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-8h] BYREF
  ULONG i; // [rsp+88h] [rbp+48h]
  ULONG ResultLength; // [rsp+90h] [rbp+50h] BYREF
  wchar_t *String; // [rsp+98h] [rbp+58h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  String = 0LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
    if ( v3 )
    {
      v4 = AslRegistryOpenKey(&KeyHandle);
      if ( v4 >= 0 )
      {
        v5 = String;
        v6 = 0;
        for ( i = 0; ; v6 = i )
        {
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( v5 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String);
          String = 0LL;
          v5 = 0LL;
          memset_0(v3, 0, 0x218uLL);
          memset_0(Heap, 0, 0x218uLL);
          v7 = ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, Heap, 0x217u, &ResultLength);
          if ( v7 == -2147483622 )
            break;
          if ( v7 >= 0 )
          {
            v8 = 0;
            v9 = (const wchar_t **)off_1807CC2B0;
            while ( wcsicmp(Heap + 8, *v9) )
            {
              ++v8;
              ++v9;
              if ( v8 >= 3 )
              {
                if ( (int)AslRegistryOpenSubKey(&Handle) >= 0 )
                {
                  v10 = AslRegistryGetString(&String, Handle, L"ProfileImagePath");
                  v5 = String;
                  if ( v10 >= 0 )
                  {
                    wcslwr(String);
                    v12 = -1LL;
                    do
                      ++v12;
                    while ( v5[v12] );
                    v13 = *((_QWORD *)this + 2);
                    v14 = 0;
                    if ( v13 )
                    {
                      v15 = 0LL;
                      do
                      {
                        v11 = 0LL;
                        if ( v15 < v13 )
                        {
                          v17 = v15;
                          v16 = *((_QWORD *)this + 1) * v15;
                          if ( !is_mul_ok(*((_QWORD *)this + 1), v17)
                            || (v21 = *((_QWORD *)this + 5), v11 = (const unsigned __int16 *)(v21 + v16),
                                                             v21 + v16 < v21) )
                          {
                            v11 = 0LL;
                          }
                        }
                        v18 = -1LL;
                        do
                          ++v18;
                        while ( *(_WORD *)(*(_QWORD *)v11 + 2 * v18) );
                        if ( v12 > v18 )
                          break;
                        v15 = ++v14;
                      }
                      while ( v14 < v13 );
                    }
                    v4 = RtlNameValueArray::Insert(this, v11, v5, L"%USERPROFILE%", v14);
                    if ( v4 < 0 )
                      goto LABEL_35;
                    v19 = wcsrchr(v5, 0x5Cu);
                    if ( v19 )
                    {
                      if ( v19[1] )
                      {
                        v4 = RtlNameValueArray::Insert(
                               (struct _PII_FILTER *)((char *)this + 48),
                               v20,
                               v19 + 1,
                               L"%USERNAME%",
                               *((_QWORD *)this + 8));
                        if ( v4 < 0 )
                          goto LABEL_35;
                      }
                    }
                  }
                }
                break;
              }
            }
          }
          ++i;
        }
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741801;
    }
LABEL_35:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v4 = -1073741801;
  }
  if ( String )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
