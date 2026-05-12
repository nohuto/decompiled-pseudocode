/*
 * XREFs of sub_1C004D914 @ 0x1C004D914
 * Callers:
 *     sub_1C004D6F0 @ 0x1C004D6F0 (sub_1C004D6F0.c)
 *     sub_1C004D880 @ 0x1C004D880 (sub_1C004D880.c)
 *     sub_1C004DAE0 @ 0x1C004DAE0 (sub_1C004DAE0.c)
 * Callees:
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C004B5D8 @ 0x1C004B5D8 (sub_1C004B5D8.c)
 */

void __fastcall sub_1C004D914(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( sub_1C0008B84(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1792);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 0x100) != 0
      && (v4 & 0x400) != 0
      && (v4 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 148), 0) )
    {
      v5 = *(_QWORD *)(a1 + 1792);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v5 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v5 + 128) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL) = ExAllocateTimer(sub_1C004D6F0, a1, 0LL, v2);
        v6 = *(_QWORD *)(a1 + 1792);
        if ( *(_QWORD *)(v6 + 128) )
        {
          if ( (byte_1C0093A06 & 8) != 0 )
            sub_1C004B5D8(
              a1 + 169,
              a1 + 160,
              a1 + 2024,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
              *(_QWORD *)(a1 + 24) + 5000LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              *(_BYTE *)(a1 + 98),
              a1 + 2024,
              (const char *)(a1 + 160),
              (const char *)(a1 + 169),
              (const char *)(a1 + 186));
          sub_1C0008A7C(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
