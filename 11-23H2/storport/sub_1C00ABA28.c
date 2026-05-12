/*
 * XREFs of sub_1C00ABA28 @ 0x1C00ABA28
 * Callers:
 *     sub_1C00ABB58 @ 0x1C00ABB58 (sub_1C00ABB58.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0010420 @ 0x1C0010420 (sub_1C0010420.c)
 */

__int64 __fastcall sub_1C00ABA28(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  void *v9; // rcx
  _DWORD *v10; // r14
  __int64 v11; // rcx

  v6 = (_DWORD *)sub_1C0007CF4(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *v6 = 88;
    v9 = *(void **)(a1 + 8);
    *a3 = 112;
    v10 = v6 + 22;
    ObfReferenceObject(v9);
    *((_QWORD *)v8 + 1) = a1;
    *((_BYTE *)v8 + 74) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)v8 + 75) = *(_BYTE *)(a1 + 97);
    *((_BYTE *)v8 + 76) = *(_BYTE *)(a1 + 98);
    sub_1C0010420(*(_DWORD *)(a1 + 3344), (__int64)(v8 + 10), (_WORD *)v8 + 36);
    if ( sub_1C0008B84(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1792)) >= 0 )
      {
        *(_BYTE *)v10 = 1;
        v11 = **(_QWORD **)(a1 + 1792);
        *((_QWORD *)v10 + 2) = a1 + 1782;
        *((_QWORD *)v10 + 1) = v11;
        *((_QWORD *)v8 + 2) = a1 + 1783;
        *((_QWORD *)v8 + 3) = sub_1C004DF40;
        *((_QWORD *)v8 + 4) = v10;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
