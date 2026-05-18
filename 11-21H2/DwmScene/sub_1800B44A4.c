/*
 * XREFs of sub_1800B44A4 @ 0x1800B44A4
 * Callers:
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B42B4 @ 0x1800B42B4 (sub_1800B42B4.c)
 *     sub_1800B4344 @ 0x1800B4344 (sub_1800B4344.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800B44A4(__int64 *a1)
{
  __int64 v2; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a1[2] )
  {
    v6 = 0LL;
    v2 = a1[1];
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      while ( v3 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
        if ( v4 == v3 )
        {
          v5 = *a1;
          v6 = *(_OWORD *)a1;
          goto LABEL_7;
        }
      }
    }
    v5 = v6;
LABEL_7:
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, a1 + 2);
    sub_180010910((__int64)&v6);
  }
}
