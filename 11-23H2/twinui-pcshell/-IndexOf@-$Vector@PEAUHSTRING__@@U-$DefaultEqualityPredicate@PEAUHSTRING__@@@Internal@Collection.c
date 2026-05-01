/*
 * XREFs of ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x180400AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x180400C70 (-IndexOfInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Co.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  HSTRING *v8; // r14
  __int64 v9; // rsi
  RTL_SRWLOCK *v10; // rcx
  HRESULT v11; // edi
  size_t v12; // rax
  __int64 i; // rbp
  HSTRING *v14; // rbx
  int v16; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v17, (RTL_SRWLOCK *)(a1 + 104), &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 80) )
    {
      v12 = 8LL * *(unsigned int *)(a1 + 72);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 72), 8uLL) )
        v12 = -1LL;
      v8 = (HSTRING *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
        {
          v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8 * i), &v8[i]);
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 88),
              *(_DWORD *)(a1 + 72),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( (_DWORD)v9 )
  {
    if ( v11 >= 0 )
      v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
              (_DWORD)v10,
              (_DWORD)v8,
              v9,
              a2,
              (__int64)a3,
              (__int64)a4);
    v14 = v8;
    do
    {
      WindowsDeleteString(*v14);
      *v14++ = 0LL;
      --v9;
    }
    while ( v9 );
  }
  operator delete[](v8);
  return (unsigned int)v11;
}
