/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18004A2AC
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18004A0F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Find@?$DynArray@PEAVCBaseExpression@@$00@@QEBAIIAEBQEAVCBaseExpression@@@Z @ 0x180049800 (-Find@-$DynArray@PEAVCBaseExpression@@$00@@QEBAIIAEBQEAVCBaseExpression@@@Z.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x18004A3E0 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18004A4F8 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800E633C (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int inserted; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ebx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // r11
  unsigned int v21; // edx
  unsigned int v22; // r10d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  struct CBaseExpression *v28; // [rsp+68h] [rbp+18h] BYREF

  v28 = a2;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v4 = (char *)this + 32 * *((unsigned int *)this + 41);
  v5 = *((_DWORD *)v4 + 48);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v9 = -2147024362;
    goto LABEL_16;
  }
  if ( v6 <= *((_DWORD *)v4 + 47) )
  {
    *(_QWORD *)(*((_QWORD *)v4 + 21) + 8LL * v5) = a2;
    *((_DWORD *)v4 + 48) = v6;
    goto LABEL_4;
  }
  v14 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v4 + 168), 8u, (__int64)v4, &v28);
  v16 = v14;
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x50u, 0LL);
    goto LABEL_7;
  }
LABEL_4:
  v25 = *((_QWORD *)v28 + 23);
  v26 = *((_DWORD *)v28 + 48);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(
               this,
               (struct CTargetMapEntry *)&v25,
               v28,
               *((struct SubchannelMaskInfo **)v28 + 25));
  v9 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inserted, 0x5Bu, 0LL);
    v19 = DynArray<CBaseExpression *,1>::Find(
            (__int64)this + 32 * *((unsigned int *)this + 41) + 168,
            v18,
            (__int64 *)&v28);
    v21 = *(_DWORD *)(v20 + 192);
    v22 = v19;
    if ( v19 < v21 )
    {
      v23 = *(_QWORD *)(v20 + 168);
      if ( v19 < v21 - 1 )
      {
        do
        {
          v24 = v22++;
          *(_QWORD *)(v23 + 8 * v24) = *(_QWORD *)(v23 + 8LL * v22);
          v21 = *(_DWORD *)(v20 + 192);
        }
        while ( v22 < v21 - 1 );
      }
      *(_DWORD *)(v20 + 192) = v21 - 1;
    }
  }
  else
  {
    if ( (*((_BYTE *)this + 448) & 4) == 0 )
    {
      v11 = *((_QWORD *)v28 + 23);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v12, v26);
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
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v25);
  return v9;
}
