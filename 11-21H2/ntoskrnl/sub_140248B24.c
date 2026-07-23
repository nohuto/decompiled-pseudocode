/*
 * XREFs of sub_140248B24 @ 0x140248B24
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140538930 @ 0x140538930 (sub_140538930.c)
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_140248B24(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1228) )
    return;
  if ( !*(_BYTE *)(a1 + 985) )
  {
    sub_140276758(a1, 0LL, 0LL, 0LL);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * DesiredTime;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = DueTime;
      if ( v3.QuadPart <= 0 )
        goto LABEL_7;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = DueTime;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 984) )
    KeBugCheckEx(0x34u, 0x3F8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 920), v3, 0, 0x3E8u, 0LL);
}
