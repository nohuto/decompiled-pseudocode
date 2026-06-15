/*
 * XREFs of ??4CAPONode@@QEAAXAEAV0@@Z @ 0x140012A00
 * Callers:
 *     ??0CAPONode@@QEAA@AEAV0@@Z @ 0x14001279C (--0CAPONode@@QEAA@AEAV0@@Z.c)
 * Callees:
 *     ?SetCount@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_N_KH@Z @ 0x140012D08 (-SetCount@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140012DBC (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAPONode::operator=(__int64 a1, __int64 a2)
{
  struct IUnknown *v4; // rdx
  struct IUnknown **v5; // rcx
  __int64 v6; // rcx
  struct IUnknown *v7; // rdx
  struct IUnknown *v8; // rdx
  struct IUnknown *v9; // rdx
  struct IUnknown *v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  __int64 result; // rax

  v4 = *(struct IUnknown **)(a2 + 8);
  v5 = (struct IUnknown **)(a1 + 8);
  if ( *v5 != v4 )
    ATL::AtlComPtrAssign(v5, v4);
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *(struct IUnknown **)(a2 + 24);
  if ( *(struct IUnknown **)(a1 + 24) != v7 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 24), v7);
  v8 = *(struct IUnknown **)(a2 + 40);
  if ( *(struct IUnknown **)(a1 + 40) != v8 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 40), v8);
  v9 = *(struct IUnknown **)(a2 + 32);
  if ( *(struct IUnknown **)(a1 + 32) != v9 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 32), v9);
  v10 = *(struct IUnknown **)(a2 + 48);
  if ( *(struct IUnknown **)(a1 + 48) != v10 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 48), v10);
  if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::SetCount(
                           a1 + 64,
                           *(_QWORD *)(a2 + 72)) )
    goto LABEL_46;
  v11 = *(_QWORD *)(a2 + 72);
  v12 = *(_QWORD **)(a1 + 64);
  if ( v11 )
  {
    v13 = *(_QWORD *)(a2 + 64) - (_QWORD)v12;
    do
    {
      *v12 = *(_QWORD *)((char *)v12 + v13);
      ++v12;
      --v11;
    }
    while ( v11 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::SetCount(
                           a1 + 96,
                           *(_QWORD *)(a2 + 104)) )
    goto LABEL_46;
  v14 = *(_QWORD *)(a2 + 104);
  v15 = *(_QWORD **)(a1 + 96);
  if ( v14 )
  {
    v16 = *(_QWORD *)(a2 + 96) - (_QWORD)v15;
    do
    {
      *v15 = *(_QWORD *)((char *)v15 + v16);
      ++v15;
      --v14;
    }
    while ( v14 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::SetCount(
                           a1 + 128,
                           *(_QWORD *)(a2 + 136)) )
    goto LABEL_46;
  v17 = *(_QWORD *)(a2 + 136);
  v18 = *(_QWORD **)(a1 + 128);
  if ( v17 )
  {
    v19 = *(_QWORD *)(a2 + 128) - (_QWORD)v18;
    do
    {
      *v18 = *(_QWORD *)((char *)v18 + v19);
      ++v18;
      --v17;
    }
    while ( v17 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::SetCount(
                           a1 + 160,
                           *(_QWORD *)(a2 + 168)) )
    goto LABEL_46;
  v20 = *(_QWORD *)(a2 + 168);
  v21 = *(_QWORD *)(a2 + 160);
  v22 = *(_QWORD **)(a1 + 160);
  if ( v20 )
  {
    v21 -= (__int64)v22;
    do
    {
      *v22 = *(_QWORD *)((char *)v22 + v21);
      ++v22;
      --v20;
    }
    while ( v20 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
                           a1 + 192,
                           *(_QWORD *)(a2 + 200),
                           v21) )
    goto LABEL_46;
  v23 = *(_QWORD *)(a2 + 200);
  v24 = *(_QWORD *)(a2 + 192);
  v25 = *(_QWORD **)(a1 + 192);
  if ( v23 )
  {
    v24 -= (__int64)v25;
    do
    {
      *v25 = *(_QWORD *)((char *)v25 + v24);
      ++v25;
      --v23;
    }
    while ( v23 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
                           a1 + 224,
                           *(_QWORD *)(a2 + 232),
                           v24) )
    goto LABEL_46;
  v26 = *(_QWORD *)(a2 + 232);
  v27 = *(_QWORD *)(a2 + 224);
  v28 = *(_QWORD **)(a1 + 224);
  if ( v26 )
  {
    v27 -= (__int64)v28;
    do
    {
      *v28 = *(_QWORD *)((char *)v28 + v27);
      ++v28;
      --v26;
    }
    while ( v26 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
                           a1 + 256,
                           *(_QWORD *)(a2 + 264),
                           v27) )
    goto LABEL_46;
  v29 = *(_QWORD *)(a2 + 264);
  v30 = *(_QWORD *)(a2 + 256);
  v31 = *(_QWORD **)(a1 + 256);
  if ( v29 )
  {
    v30 -= (__int64)v31;
    do
    {
      *v31 = *(_QWORD *)((char *)v31 + v30);
      ++v31;
      --v29;
    }
    while ( v29 );
  }
  if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
                           a1 + 288,
                           *(_QWORD *)(a2 + 296),
                           v30) )
LABEL_46:
    ATL::AtlThrowImpl(-2147024882);
  v32 = *(_QWORD *)(a2 + 296);
  v33 = *(_QWORD **)(a1 + 288);
  if ( v32 )
  {
    v34 = *(_QWORD *)(a2 + 288) - (_QWORD)v33;
    do
    {
      *v33 = *(_QWORD *)((char *)v33 + v34);
      ++v33;
      --v32;
    }
    while ( v32 );
  }
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 320);
  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a2 + 336);
  result = *(unsigned __int8 *)(a2 + 56);
  *(_BYTE *)(a1 + 56) = result;
  return result;
}
