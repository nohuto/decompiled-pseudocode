/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x18009C438
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbCloseDatabaseRead @ 0x18009512C (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800959A8 (SdbpOpenDatabaseInMemory.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rbx
  const char *v7; // r9
  int v8; // r8d
  __m128i *v9; // rax
  PVOID Heap; // rbp
  __int64 result; // rax
  _DWORD *v12; // rax
  unsigned __int32 Size; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *a1;
  v4 = 0;
  v14 = 0;
  v5 = 0LL;
  if ( !g_ExpandCallback )
  {
    v7 = "No expand callback method set. Cannot expand ZDB file.";
    v8 = 147;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v8, (_DWORD)v7);
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v3 + 20) < 0x14u )
  {
    v7 = "SDB file too small to be valid";
    v8 = 152;
    goto LABEL_3;
  }
  v9 = *(__m128i **)(v3 + 8);
  Size = v9[1].m128i_u32[0];
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*v9, 8)) != 1717724282 )
  {
    v7 = "SDB is not compressed";
    v8 = 159;
    goto LABEL_3;
  }
  if ( HIDWORD(*(unsigned __int128 *)v9) != g_ExpectedAlgorithm )
  {
    v7 = "SDB compression algorithm does not match callback algorithm.";
    v8 = 164;
    goto LABEL_3;
  }
  v14 = v9[1].m128i_i32[0];
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
  if ( !Heap )
  {
    v7 = "SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory";
    v8 = 183;
    goto LABEL_3;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                       Heap,
                       &v14,
                       *(_QWORD *)(v3 + 8) + 20LL,
                       (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
  {
    v12 = SdbpOpenDatabaseInMemory((__int64)Heap, v14);
    v5 = (__int64)v12;
    if ( v12 )
    {
      v12[6] |= 0xCu;
      v4 = 1;
      v14 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpOpenCompressedDatabase",
      193,
      (unsigned int)"Expand callback failed to expand SDB");
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  v14 = 0;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    SdbCloseDatabaseRead(v5);
    v5 = 0LL;
  }
LABEL_16:
  SdbCloseDatabaseRead(*a1);
  result = v4;
  *a1 = v5;
  return result;
}
