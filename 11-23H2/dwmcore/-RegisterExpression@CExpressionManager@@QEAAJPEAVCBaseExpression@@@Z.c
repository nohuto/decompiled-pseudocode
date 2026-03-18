/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180082740
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18008435C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180028EF8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180082878 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800E9418 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180216B84 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int inserted; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  void *v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned int v18; // ecx
  void *v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-18h]
  void *v22; // [rsp+40h] [rbp-10h]
  struct CBaseExpression *v23; // [rsp+68h] [rbp+18h] BYREF

  v23 = a2;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v4 = (char *)this + 32 * *((unsigned int *)this + 41);
  v5 = *((_DWORD *)v4 + 48);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v17 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v9 = -2147024362;
    goto LABEL_18;
  }
  if ( v6 <= *((_DWORD *)v4 + 47) )
  {
    *(_QWORD *)(*((_QWORD *)v4 + 21) + 8LL * v5) = a2;
    *((_DWORD *)v4 + 48) = v6;
    goto LABEL_4;
  }
  v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v4 + 168), 8u, (__int64)v4, &v23);
  v17 = v15;
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x50u, 0LL);
    goto LABEL_7;
  }
LABEL_4:
  v20 = *((_QWORD *)v23 + 23);
  v21 = *((_DWORD *)v23 + 48);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(
               this,
               (struct CTargetMapEntry *)&v20,
               v23,
               *((struct SubchannelMaskInfo **)v23 + 25));
  v9 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inserted, 0x5Bu, 0LL);
    DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 41) + 168, &v23);
  }
  else
  {
    if ( (*((_BYTE *)this + 448) & 4) == 0 )
    {
      v12 = *((_QWORD *)v23 + 23);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v13, v21);
          if ( SourceAnimationsForProperty )
          {
            if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
              *((_BYTE *)this + 448) |= 4u;
          }
        }
      }
    }
    v9 = 0;
  }
LABEL_7:
  v10 = v22;
  while ( v10 )
  {
    v19 = v10;
    v10 = (void *)*((_QWORD *)v10 + 2);
    operator delete(v19, 0x18uLL);
  }
  return v9;
}
