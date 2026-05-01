/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800160B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  HSTRING *v8; // r14
  RTL_SRWLOCK *v10; // rcx
  HRESULT v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int i; // ecx
  __int64 v17; // rbx
  void *v19; // [rsp+60h] [rbp+8h]
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v5 = 0LL;
  v6 = a3;
  v21 = 0;
  v7 = 0LL;
  v8 = a4;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v19 = 0LL;
  v10 = (RTL_SRWLOCK *)(a1 + 112);
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v10);
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v19 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v19 )
    {
      v11 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v11, 0LL);
      goto LABEL_22;
    }
  }
  v12 = *(_DWORD *)(a1 + 72);
  v13 = a2;
  v21 = v12;
  if ( a2 > v12 )
  {
    v11 = -2147483637;
    goto LABEL_12;
  }
  if ( (_DWORD)v6 )
  {
    if ( *(_DWORD *)(a1 + 80) )
    {
      do
      {
        v14 = v7 + v13;
        if ( v14 >= v12 )
          break;
        v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v14), &v8[v7]);
        if ( v11 < 0 )
          break;
        v12 = v21;
        v7 = (unsigned int)(v7 + 1);
        v13 = a2;
      }
      while ( (unsigned int)v7 < (unsigned int)v6 );
    }
    else
    {
      do
      {
        v15 = v5 + v13;
        if ( v15 >= v12 )
          break;
        v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v15), &v8[v5]);
        if ( v11 < 0 )
          break;
        v12 = v21;
        v5 = (unsigned int)(v5 + 1);
        v13 = a2;
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
  }
LABEL_22:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*(_DWORD *)(a1 + 112);
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v11 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      v17 = (unsigned int)v5;
      do
      {
        WindowsDeleteString(*v8);
        *v8++ = 0LL;
        --v17;
      }
      while ( v17 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v21 )
          break;
        v11 = 0;
        LODWORD(v5) = v5 + 1;
      }
    }
    *a5 = v5;
  }
  operator delete[](v19);
  return (unsigned int)v11;
}
