/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x180096FBC
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180090084 (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbCloseDatabaseRead @ 0x18008FD34 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x180090640 (SdbpOpenDatabaseInMemory.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rbx
  __m128i *v7; // rax
  PVOID Heap; // rbp
  __int64 result; // rax
  _DWORD *v10; // rax
  unsigned __int32 Size; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = a3;
  v3 = *a1;
  v4 = 0;
  v12 = 0;
  v5 = 0LL;
  if ( g_ExpandCallback )
  {
    if ( *(_DWORD *)(v3 + 20) >= 0x14u )
    {
      v7 = *(__m128i **)(v3 + 8);
      Size = v7[1].m128i_u32[0];
      if ( _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8)) == 1717724282 )
      {
        if ( HIDWORD(*(unsigned __int128 *)v7) == g_ExpectedAlgorithm )
        {
          v12 = v7[1].m128i_i32[0];
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
          if ( !Heap )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpOpenCompressedDatabase",
              207,
              (unsigned int)"SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory");
            goto LABEL_16;
          }
          if ( (unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                               Heap,
                               &v12,
                               *(_QWORD *)(v3 + 8) + 20LL,
                               (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
          {
            v10 = SdbpOpenDatabaseInMemory((__int64)Heap, v12);
            v5 = (__int64)v10;
            if ( v10 )
            {
              v10[6] |= 0xCu;
              v4 = 1;
              v12 = 0;
              goto LABEL_16;
            }
          }
          else
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpOpenCompressedDatabase",
              217,
              (unsigned int)"Expand callback failed to expand SDB");
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          v12 = 0;
          if ( v5 )
          {
            SdbCloseDatabaseRead(v5);
            v5 = 0LL;
          }
        }
        else
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpOpenCompressedDatabase",
            188,
            (unsigned int)"SDB compression algorithm does not match callback algorithm.");
        }
      }
      else
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", 183, (unsigned int)"SDB is not compressed");
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpOpenCompressedDatabase",
        176,
        (unsigned int)"SDB file too small to be valid");
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpOpenCompressedDatabase",
      171,
      (unsigned int)"No expand callback method set. Cannot expand ZDB file.");
  }
LABEL_16:
  SdbCloseDatabaseRead(*a1);
  result = v4;
  *a1 = v5;
  return result;
}
