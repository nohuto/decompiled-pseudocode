/*
 * XREFs of ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805D0770
 * Callers:
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800C7A94 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800C7C84 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x1805C04B8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Extend(const char *a1)
{
  char v2; // al
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  void *v5; // rax
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct TraceLoggingCorrelationVector *result; // rax

  v2 = TraceLoggingCorrelationVector::ValidateImpl(a1, 1);
  if ( !v2 )
    return 0LL;
  v3 = 129LL;
  if ( v2 == 1 )
    v3 = 65LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a1[v4] );
  if ( v4 + 1 >= v3 && (v4 + 1 != v3 || a1[v4 - 1] != 33) )
    return 0LL;
  if ( v2 == 1 )
  {
    v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v6 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v7);
      goto LABEL_15;
    }
  }
  else
  {
    if ( v2 != 2 )
      return 0LL;
    v5 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v6 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v5);
LABEL_15:
      v8 = v6;
      goto LABEL_17;
    }
  }
  v8 = 0LL;
LABEL_17:
  if ( v8 )
  {
    if ( a1[v4 - 1] == 33 )
    {
      _o_strncpy_s(v8, 129LL, a1, v4 - 1);
      *(_BYTE *)(v8 + 129) = v4 - 1;
      v9 = v4 + 1;
    }
    else if ( v4 + 2 == v3 )
    {
      _o_strncpy_s(v8, 129LL, a1, v4);
      v9 = v4 + 2;
      *(_BYTE *)(v8 + 129) = v4;
    }
    else
    {
      if ( v4 + 3 != v3 )
      {
        _o_strncpy_s(v8, 129LL, a1, v4);
        *(_BYTE *)(v8 + v4) = 46;
        *(_BYTE *)(v8 + 129) = v4 + 1;
        *(_QWORD *)(v8 + 136) = (v4 + 3) << 32;
        *(_QWORD *)(v8 + 136) &= ~0x8000000000000000uLL;
        goto LABEL_26;
      }
      _o_strncpy_s(v8, 129LL, a1, v4);
      *(_BYTE *)(v8 + v4) = 46;
      *(_BYTE *)(v8 + 129) = v4 + 1;
      v9 = v4 + 3;
    }
    *(_QWORD *)(v8 + 136) = v9 << 32;
    *(_QWORD *)(v8 + 136) |= 0x8000000000000000uLL;
LABEL_26:
    result = (struct TraceLoggingCorrelationVector *)v8;
    *(_BYTE *)(*(unsigned __int8 *)(v8 + 129) + v8) = 0;
    return result;
  }
  return 0LL;
}
