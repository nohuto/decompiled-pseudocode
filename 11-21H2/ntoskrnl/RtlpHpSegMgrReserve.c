/*
 * XREFs of RtlpHpSegMgrReserve @ 0x1403625F8
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140362540 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14024EFA8 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpAllocVA @ 0x140351E90 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140362714 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpFreeVA @ 0x140363E50 (RtlpHpFreeVA.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, __int64 *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // rax
  __int64 v12; // rax
  int v13; // esi
  __int64 v15; // r8
  bool v16; // cf
  __int64 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = -*(_DWORD *)a1;
  v19 = v6;
  v17[0] = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  v9 = v17[0];
  if ( v17[0] )
    goto LABEL_2;
  v15 = v19;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v6 < 0x200000 )
      v15 = 0x200000LL;
    v19 = v15;
  }
  v16 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
  v18 = *(_OWORD *)(a1 + 40);
  v13 = RtlpHpAllocVA(v17, (__int64 *)&v19, v15, 0x2000, v16 ? 64 : 4, &v18);
  if ( v13 >= 0 )
  {
    v10 = v19;
    v9 = v17[0];
    if ( v6 >= v19 )
      goto LABEL_3;
    RtlpHpSegMgrVaCtxInitialize(a1, v17[0], v6, v19);
    v9 = v17[0];
LABEL_2:
    v10 = v19;
LABEL_3:
    v11 = a5;
    *a4 = v6;
    *a3 = v9;
    *v11 = v10;
    v12 = 0LL;
    v17[0] = 0LL;
    v13 = 0;
    goto LABEL_4;
  }
  v12 = v17[0];
LABEL_4:
  if ( v12 )
  {
    v18 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(v17, &v19, 0x8000LL, &v18);
  }
  return (unsigned int)v13;
}
