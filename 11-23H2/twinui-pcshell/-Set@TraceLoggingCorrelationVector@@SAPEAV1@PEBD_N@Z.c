/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800BB844
 * Callers:
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1806C5A50 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800BB9D8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800BBC9C (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x1806B05D4 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  char *v7; // rax
  char *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  void *v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  void *v20; // rax

  LOBYTE(a2) = 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 65LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Str[v6] );
  if ( v6 + 1 > v5 || Str[v6 - 1] != 33 )
  {
    if ( v6 + 2 > v5 )
      return 0LL;
    v7 = strrchr(Str, 46);
    if ( !v7 )
      return 0LL;
    v8 = v7 + 1;
    _o__set_errno(0LL);
    v9 = strtol(v8, 0LL, 10);
    v10 = v9;
    if ( !v9 && *v8 != 48 && v8[1] )
      return 0LL;
    if ( *(_DWORD *)_o__errno() == 34 )
      return 0LL;
    if ( v4 == 1 )
    {
      v20 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v20 )
      {
        v12 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v20);
        goto LABEL_16;
      }
    }
    else
    {
      if ( v4 != 2 )
        return 0LL;
      v11 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v11 )
      {
        v12 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v11);
LABEL_16:
        v13 = v12;
        goto LABEL_17;
      }
    }
    v13 = 0LL;
LABEL_17:
    if ( v13 )
    {
      v14 = v8 - Str;
      _o_strncpy_s(v13, 129LL, Str, v14);
      *(_BYTE *)(v13 + 129) = v14;
      *(_QWORD *)(v13 + 136) = v10 | ((v6 + 1) << 32);
      v15 = *(_QWORD *)(v13 + 136) & 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
      *(_QWORD *)(v13 + 136) = v15;
      result = (struct TraceLoggingCorrelationVector *)v13;
      *(_BYTE *)(*(unsigned __int8 *)(v13 + 129) + v13) = 0;
      return result;
    }
    return 0LL;
  }
  if ( v3 == 1 )
  {
    v19 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v19 )
    {
      v18 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v19);
      goto LABEL_27;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v17 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v17 )
    {
      v18 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v17);
LABEL_27:
      v13 = v18;
      goto LABEL_29;
    }
  }
  v13 = 0LL;
LABEL_29:
  if ( v13 )
  {
    _o_strncpy_s(v13, 129LL, Str, v6 - 1);
    *(_BYTE *)(v13 + 129) = v6 - 1;
    *(_QWORD *)(v13 + 136) = (v6 + 1) << 32;
    v15 = *(_QWORD *)(v13 + 136) | 0x8000000000000000uLL;
    goto LABEL_19;
  }
  return 0LL;
}
