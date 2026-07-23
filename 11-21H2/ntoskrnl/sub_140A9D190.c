/*
 * XREFs of sub_140A9D190 @ 0x140A9D190
 * Callers:
 *     sub_140A805A8 @ 0x140A805A8 (sub_140A805A8.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140A9D23C @ 0x140A9D23C (sub_140A9D23C.c)
 */

void __fastcall sub_140A9D190(__int64 *a1)
{
  __int16 v1; // di
  unsigned int v3; // esi
  __int64 *v4; // rax
  __int64 **v5; // rcx

  v1 = dword_140C1B25C;
  if ( dword_140C1B25C )
  {
    ++dword_140D576BC;
    v3 = dword_140C1B25C + dword_140D57568;
    KeAcquireSpinLockAtDpcLevel(&qword_140D57750);
    if ( *((_BYTE *)a1 + 28) )
    {
      if ( *((_DWORD *)a1 + 6) <= v3 )
      {
LABEL_8:
        KeReleaseSpinLockFromDpcLevel(&qword_140D57750);
        return;
      }
      v4 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      --dword_140D57520;
    }
    *((_DWORD *)a1 + 6) = v3;
    *((_WORD *)a1 + 15) = v1;
    sub_140A9D23C(a1);
    goto LABEL_8;
  }
}
