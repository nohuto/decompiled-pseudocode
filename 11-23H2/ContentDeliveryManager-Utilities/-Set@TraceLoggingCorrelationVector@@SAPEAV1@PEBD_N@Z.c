/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180094678
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18008EBB0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18008F8C4 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x18008F934 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x180096370 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Source, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  char *v13; // rax
  char *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r14
  void *v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  rsize_t v20; // rsi

  LOBYTE(a2) = 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(Source, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 65LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Source[v6] );
  if ( v6 + 1 <= v5 && Source[v6 - 1] == 33 )
  {
    if ( v3 == 1 )
    {
      v9 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
      {
        v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v9);
        goto LABEL_14;
      }
    }
    else
    {
      if ( v3 != 2 )
        return 0LL;
      v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
      {
        v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v7);
LABEL_14:
        v10 = v8;
        goto LABEL_16;
      }
    }
    v10 = 0LL;
LABEL_16:
    if ( v10 )
    {
      strncpy_s((char *)v10, 0x81uLL, Source, v6 - 1);
      *(_BYTE *)(v10 + 129) = v6 - 1;
      *(_QWORD *)(v10 + 136) = (v6 + 1) << 32;
      v11 = *(_QWORD *)(v10 + 136) | 0x8000000000000000uLL;
LABEL_18:
      *(_QWORD *)(v10 + 136) = v11;
      result = (struct TraceLoggingCorrelationVector *)v10;
      *(_BYTE *)(*(unsigned __int8 *)(v10 + 129) + v10) = 0;
      return result;
    }
    return 0LL;
  }
  if ( v6 + 2 > v5 )
    return 0LL;
  v13 = strrchr(Source, 46);
  if ( !v13 )
    return 0LL;
  v14 = v13 + 1;
  _set_errno(0);
  v15 = strtol(v14, 0LL, 10);
  v16 = v15;
  if ( !v15 && *v14 != 48 && v14[1] )
    return 0LL;
  if ( *_errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v19 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v19 )
    {
      v18 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v19);
      goto LABEL_31;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v17 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v17 )
    {
      v18 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v17);
LABEL_31:
      v10 = v18;
      goto LABEL_33;
    }
  }
  v10 = 0LL;
LABEL_33:
  if ( v10 )
  {
    v20 = v14 - Source;
    strncpy_s((char *)v10, 0x81uLL, Source, v20);
    *(_BYTE *)(v10 + 129) = v20;
    *(_QWORD *)(v10 + 136) = v16 | ((v6 + 1) << 32);
    v11 = *(_QWORD *)(v10 + 136) & 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_18;
  }
  return 0LL;
}
