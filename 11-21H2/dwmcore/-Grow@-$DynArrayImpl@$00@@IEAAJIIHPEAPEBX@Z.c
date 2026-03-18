/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800432E8
 * Callers:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800EF978 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18020C14C (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIO.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18003AF88 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180044330 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(unsigned __int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ecx
  char *v19; // rsi
  char *v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  unsigned int v24; // [rsp+20h] [rbp-28h]
  void *v25; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v6 = a1;
  v25 = 0LL;
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v24 = 216;
LABEL_32:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, v24, 0LL);
    return v10;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 <= v9 )
    return v10;
  a1 = a2 * (unsigned __int64)v8;
  if ( a1 > 0xFFFFFFFF )
  {
    v24 = 225;
    goto LABEL_32;
  }
  if ( !a4 )
  {
    v12 = 16;
    v13 = v8 - v9;
    if ( v9 <= 0x10 || (v14 = 8092, v12 = v9, v9 < 0x1F9C) )
      v14 = v12;
    if ( v13 <= v14 )
      v13 = v14;
    v15 = v13 + v9;
    if ( v13 + v9 >= v9 && a2 * (unsigned __int64)v15 <= 0xFFFFFFFF )
    {
      v8 = v13 + v9;
      LODWORD(a1) = a2 * v15;
    }
  }
  if ( v8 > 0xFFFFFFFF / a2 )
  {
    v24 = 251;
    goto LABEL_32;
  }
  if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
  {
    v16 = HrAlloc((unsigned int)a1, &v25);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x102u, 0LL);
      return v10;
    }
    v18 = *(_DWORD *)(v6 + 24);
    v19 = (char *)v25;
    if ( v18 )
      memcpy_0(v25, *(const void **)v6, a2 * v18);
  }
  else
  {
    v21 = (char *)DefaultHeap::Realloc(*(void **)v6, (unsigned int)a1);
    v19 = v21;
    if ( !v21 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x114u, 0LL);
      return v10;
    }
    if ( v21 != *(char **)v6 )
    {
      if ( a5 )
      {
        v23 = *a5;
        if ( *a5 >= *(_QWORD *)v6 && v23 < *(_QWORD *)v6 + (unsigned __int64)(a2 * *(_DWORD *)(v6 + 20)) )
          *a5 = (unsigned __int64)&v21[v23 - *(_QWORD *)v6];
      }
    }
  }
  memset_0(&v19[a2 * *(_DWORD *)(v6 + 20)], 0, a2 * (v8 - *(_DWORD *)(v6 + 20)));
  *(_DWORD *)(v6 + 20) = v8;
  *(_QWORD *)v6 = v19;
  return v10;
}
