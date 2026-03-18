/*
 * XREFs of DpiFdoCreateSysMmAdapter @ 0x1C01F58C8
 * Callers:
 *     DpiLdaPreStartChain @ 0x1C0066474 (DpiLdaPreStartChain.c)
 *     DpiFdoStartNonLdaAdapter @ 0x1C01F5830 (DpiFdoStartNonLdaAdapter.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x1C038AE74 (DpiFdoQuerySysMmAdapterCaps.c)
 */

__int64 __fastcall DpiFdoCreateSysMmAdapter(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdi
  _QWORD *Pool2; // rdx
  int Adapter; // eax
  unsigned int v12; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+3Ch] [rbp-44h]
  int v19; // [rsp+44h] [rbp-3Ch]
  PVOID P; // [rsp+48h] [rbp-38h]
  _BYTE v21[32]; // [rsp+50h] [rbp-30h] BYREF
  int v22; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  v19 = 0;
  v5 = *(_BYTE *)(a2 + 480) == 0;
  v7 = *(_QWORD *)(a2 + 40);
  v16 = 0x7FFFFFFFFFFFFFFFLL;
  v17 = *(_DWORD *)(a2 + 1120);
  if ( !v5 || *(_BYTE *)(a2 + 481) || *(_BYTE *)(a2 + 1159) || *(_BYTE *)(a2 + 2694) || *(_BYTE *)(a2 + 2692) )
  {
    LODWORD(v18) = v18 | 1;
  }
  else if ( *(_DWORD *)(v7 + 28) < 0xE002u || (int)DpiFdoQuerySysMmAdapterCaps(v7, *(_QWORD *)(a2 + 48), &v16) < 0 )
  {
    LODWORD(v18) = v18 | 2;
  }
  v8 = *(_DWORD *)(a2 + 504);
  v9 = 1LL;
  if ( v8 )
    v9 = v8;
  P = 0LL;
  v22 = 0;
  if ( (unsigned int)v9 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 8 )
      goto LABEL_24;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, a4);
    P = Pool2;
  }
  else
  {
    P = v21;
    memset(v21, 0, 8LL * (unsigned int)v9);
    Pool2 = P;
  }
  v22 = v9;
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a2 + 504) )
    {
      v14 = 0LL;
      v15 = (unsigned int)v9;
      do
      {
        Pool2[v14] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 * 8 + *(_QWORD *)(a2 + 2728)) + 64LL) + 152LL);
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    else
    {
      *Pool2 = *(_QWORD *)(a2 + 152);
    }
    Adapter = SysMmCreateAdapter(
                a1,
                (struct _DEVICE_OBJECT *const *)Pool2,
                v9,
                *(_DWORD *)(v7 + 28),
                (const struct SYSMM_ADAPTER_CREATE_PARAMS *)&v16,
                (struct SYSMM_ADAPTER **)(a2 + 5672));
    v12 = Adapter;
    if ( Adapter < 0 )
      WdLogSingleEntry1(2LL, Adapter);
    else
      v12 = 0;
    goto LABEL_12;
  }
LABEL_24:
  v12 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
LABEL_12:
  if ( P != v21 && P )
    ExFreePoolWithTag(P, 0);
  return v12;
}
