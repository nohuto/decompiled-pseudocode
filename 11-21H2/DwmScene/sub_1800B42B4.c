/*
 * XREFs of sub_1800B42B4 @ 0x1800B42B4
 * Callers:
 *     sub_1800B52F0 @ 0x1800B52F0 (sub_1800B52F0.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_1800B44A4 @ 0x1800B44A4 (sub_1800B44A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B42B4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, &v7, 0LL);
    v5 = v7;
    *(_DWORD *)(a1 + 36) = v7;
    if ( v5 == 2 )
    {
      *(_OWORD *)(a1 + 40) = v8;
LABEL_6:
      sub_1800B44A4(a1);
      goto LABEL_7;
    }
    if ( v5 == 5 )
      goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)a2 = 4;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 36);
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 40);
  return result;
}
