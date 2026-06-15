/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x1800290F0
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18002529C (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x18000E390 (--_G-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAPEAXI@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18002BA5C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt(
        __int64 *a1)
{
  __int64 v2; // rax
  ATL::Checked **v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]
  unsigned __int64 v8; // [rsp+20h] [rbp-8h]

  if ( *((int *)a1 + 4) <= 0 )
    return 0LL;
  std::wstring::`scalar deleting destructor'((_QWORD *)*a1);
  v2 = *((int *)a1 + 4);
  v3 = (ATL::Checked **)(a1 + 1);
  if ( (_DWORD)v2 != 1 )
  {
    ATL::Checked::memmove_s((ATL::Checked *)*a1, (void *)(32 * v2), *a1 + 32, (const void *)(32LL * ((int)v2 - 1)), v7);
    ATL::Checked::memmove_s(
      *v3,
      (void *)(8LL * *((int *)a1 + 4)),
      (unsigned __int64)*v3 + 8,
      (const void *)(8LL * (*((_DWORD *)a1 + 4) - 1)),
      v8);
  }
  v4 = _o__recalloc(*a1, *((_DWORD *)a1 + 4) - 1, 32LL);
  if ( v4 || *((_DWORD *)a1 + 4) == 1 )
    *a1 = v4;
  v5 = _o__recalloc(*v3, *((_DWORD *)a1 + 4) - 1, 8LL);
  if ( v5 || *((_DWORD *)a1 + 4) == 1 )
    *v3 = (ATL::Checked *)v5;
  --*((_DWORD *)a1 + 4);
  return 1LL;
}
