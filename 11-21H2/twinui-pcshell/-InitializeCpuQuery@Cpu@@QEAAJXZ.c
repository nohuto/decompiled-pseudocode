/*
 * XREFs of ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x1803455A0
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x180345400 (--_G_COUNTER_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x180345738 (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 */

__int64 __fastcall Cpu::InitializeCpuQuery(Cpu *this)
{
  void **v1; // rsi
  __int64 result; // rax
  __int64 v4; // r8
  Cpu **v5; // rbx
  void **v6; // rcx
  void **v7; // rcx
  Cpu *v8; // rax
  _OWORD *v9; // rax
  Cpu *v10; // rcx
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0;
  v1 = (void **)((char *)this + 8);
  result = (unsigned int)PcwCreateQuery((char *)this + 8, 0LL) | 0x10000000;
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Processor Information");
    RtlInitUnicodeString(&v11, L"*");
    LOBYTE(v4) = 1;
    result = (unsigned int)PcwAddQueryItem(&v13, *v1, v4, &DestinationString, &v11, -1, 201392128LL, 0LL) | 0x10000000;
    if ( (int)result >= 0 )
    {
      v5 = (Cpu **)((char *)this + 16);
      v6 = (void **)*((_QWORD *)this + 2);
      if ( v6 )
        _COUNTER_BUFFER::`scalar deleting destructor'(v6);
      v7 = (void **)*((_QWORD *)this + 3);
      if ( v7 )
        _COUNTER_BUFFER::`scalar deleting destructor'(v7);
      v8 = (Cpu *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        *(_OWORD *)v8 = 0LL;
        *((_OWORD *)v8 + 1) = 0LL;
      }
      *v5 = v8;
      v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
      }
      v10 = *v5;
      *((_QWORD *)this + 3) = v9;
      if ( v10 && v9 )
      {
        *(_QWORD *)v10 = 0LL;
        **((_QWORD **)this + 3) = 0LL;
        return Cpu::TmQueryPcwCounter(
                 v10,
                 (struct _COUNTER_BUFFER **)this + 2,
                 (struct _COUNTER_BUFFER **)this + 3,
                 *v1);
      }
      else
      {
        return 2147942414LL;
      }
    }
  }
  return result;
}
